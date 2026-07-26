// -------------------------------------------------------------------------------
// 
// 		�c�w���C�u����		�w�b�_�t�@�C��
// 
// 				Ver 3.24f
// 
// -------------------------------------------------------------------------------

#ifndef DX_LIB_H
#define DX_LIB_H

#include "DxCompileConfig.h"

// �c�w���C�u�����̃o�[�W����
#define DXLIB_VERSION 0x324f
#define DXLIB_VERSION_STR_T _T( "3.24f" )
#define DXLIB_VERSION_STR_W    L"3.24f"

// ��`---------------------------------------------------------------------------

// ��
#define DX_PI										(3.1415926535897932384626433832795 )
#define DX_PI_F										(3.1415926535897932384626433832795f)
#define DX_TWO_PI									(3.1415926535897932384626433832795  * 2.0 )
#define DX_TWO_PI_F									(3.1415926535897932384626433832795f * 2.0f)

#define DX_CHAR										char

#define DX_DEFINE_START

#define MAX_IMAGE_NUM								(0x40000)			// �����Ɏ��Ă�O���t�B�b�N�n���h���̍ő吔( �n���h���G���[�`�F�b�N�̃}�X�N�Ɏg�p���Ă���̂� 0x40000 �ȉ��� 2 �ׂ̂���ɂ��ĉ����� )
#define MAX_IMAGE_DIVNUM							(64)				// �摜�����̍ő吔
#define MAX_SHADOWMAP_NUM							(8192)				// �V���h�E�}�b�v�f�[�^�̍ő吔
#define MAX_SOFTIMAGE_NUM							(8192)				// �����Ɏ��Ă�\�t�g�C���[�W�n���h���̍ő吔( �n���h���G���[�`�F�b�N�̃}�X�N�Ɏg�p���Ă���̂� 0x40000 �ȉ��� 2 �ׂ̂���ɂ��ĉ����� )

#define MAX_SOUND_NUM								(32768)				// �����Ɏ��Ă�T�E���h�n���h���̍ő吔
#define MAX_SOFTSOUND_NUM							(8192)				// �����Ɏ��Ă�\�t�g�E�G�A�T�E���h�n���h���̍ő吔
#define MAX_MUSIC_NUM								(256)				// �����Ɏ��Ă�~���[�W�b�N�n���h���̍ő吔
#define MAX_MOVIE_NUM								(100)				// �����Ɏ��Ă郀�[�r�[�n���h���̍ő吔
#define MAX_MASK_NUM								(32768)				// �����Ɏ��Ă�}�X�N�n���h���̍ő吔
#define MAX_FONT_NUM								(256)				// �����Ɏ��Ă�t�H���g�n���h���̍ő吔
#define MAX_INPUT_NUM								(256)				// �����Ɏ��Ă镶������̓n���h���̍ő吔
#define MAX_SOCKET_NUM								(8192)				// �����Ɏ��Ă�ʐM�n���h���̍ő吔
#define MAX_LIGHT_NUM								(4096)				// �����Ɏ��Ă郉�C�g�n���h���̍ő吔
#define MAX_SHADER_NUM								(4096)				// �����Ɏ��Ă�V�F�[�_�[�n���h���̍ő吔
#define MAX_CONSTANT_BUFFER_NUM						(32768)				// �����Ɏ��Ă�萔�o�b�t�@�n���h���̍ő吔
#define MAX_MODEL_BASE_NUM							(32768)				// �����Ɏ��Ă�R�c���f����{�f�[�^�n���h���̍ő吔
#define MAX_MODEL_NUM								(32768)				// �����Ɏ��Ă�R�c���f���f�[�^�n���h���̍ő吔
#define MAX_VERTEX_BUFFER_NUM						(16384)				// �����Ɏ��Ă钸�_�o�b�t�@�n���h���̍ő吔
#define MAX_INDEX_BUFFER_NUM						(16384)				// �����Ɏ��Ă�C���f�b�N�X�o�b�t�@�̍ő吔
#define MAX_FILE_NUM								(32768)				// �����Ɏ��Ă�t�@�C���n���h���̍ő吔
#define MAX_LIVE2D_CUBISM4_MODEL_NUM				(32768)				// �����Ɏ��Ă� Live2D Cubism 4 Model �n���h���̍ő吔

// �n���h���^�C�v��`
#define DX_HANDLETYPE_NONE							(0)					// �n���h���^�C�v�O�͖��g�p
#define DX_HANDLETYPE_GRAPH							(1)					// �O���t�B�b�N�n���h��
#define DX_HANDLETYPE_SOFTIMAGE						(2)					// �\�t�g�E�G�A�ň����C���[�W�n���h��
#define DX_HANDLETYPE_SOUND							(3)					// �T�E���h�n���h��
#define DX_HANDLETYPE_SOFTSOUND						(4)					// �\�t�g�T�E���h�n���h��
#define DX_HANDLETYPE_MUSIC							(5)					// �~���[�W�b�N�n���h��
#define DX_HANDLETYPE_MOVIE							(6)					// ���[�r�[�n���h��
#define DX_HANDLETYPE_GMASK							(7)					// �}�X�N�n���h��
#define DX_HANDLETYPE_FONT							(8)					// �t�H���g�n���h��
#define DX_HANDLETYPE_KEYINPUT						(9)					// ��������̓n���h��
#define DX_HANDLETYPE_NETWORK						(10)				// �l�b�g���[�N�n���h��
#define DX_HANDLETYPE_LIGHT							(11)				// ���C�g
#define DX_HANDLETYPE_SHADER						(12)				// �V�F�[�_�[�n���h��
#define DX_HANDLETYPE_MODEL_BASE					(13)				// �R�c���f����{�f�[�^
#define DX_HANDLETYPE_MODEL							(14)				// �R�c���f��
#define DX_HANDLETYPE_VERTEX_BUFFER					(15)				// ���_�o�b�t�@�n���h��
#define DX_HANDLETYPE_INDEX_BUFFER					(16)				// �C���f�b�N�X�o�b�t�@�n���h��
#define DX_HANDLETYPE_FILE							(17)				// �t�@�C���n���h��
#define DX_HANDLETYPE_SHADOWMAP						(18)				// �V���h�E�}�b�v�n���h��
#define DX_HANDLETYPE_SHADER_CONSTANT_BUFFER		(19)				// �V�F�[�_�[�p�萔�o�b�t�@�n���h��
#define DX_HANDLETYPE_LIVE2D_CUBISM4_MODEL			(20)				// Live2D Cubism 4 ���f���n���h��

#define MAX_JOYPAD_NUM								(16)				// �W���C�p�b�h�̍ő吔

#define DEFAULT_SCREEN_SIZE_X						(640)				// �f�t�H���g�̉�ʂ̕�
#define DEFAULT_SCREEN_SIZE_Y						(480)				// �f�t�H���g�̉�ʂ̍���
#define DEFAULT_COLOR_BITDEPTH						(16)				// �f�t�H���g�̐F�r�b�g�[�x
#define DEFAULT_ZBUFFER_BITDEPTH					(16)				// �f�t�H���g�̂y�o�b�t�@�r�b�g�[�x

#define DEFAULT_FOV									(60.0F * 3.1415926535897932384626433832795F / 180.0F)	// �f�t�H���g�̎���p
#define DEFAULT_TAN_FOV_HALF						(0.57735026918962576450914878050196F) // tan( FOV * 0.5 )
#define DEFAULT_NEAR								(0.0F)				// NEAR�N���b�v��
#define DEFAULT_FAR									(20000.0F)			// FAR�N���b�v��

#define DX_DEFAULT_FONT_HANDLE						(-2)				// �f�t�H���g�t�H���g������l

#define DEFAULT_FONT_SIZE							(16)				// �t�H���g�̃f�t�H���g�̃T�C�Y
#define DEFAULT_FONT_THICKNESS						(6)					// �t�H���g�̃f�t�H���g�̑���
#define DEFAULT_FONT_TYPE							( DX_FONTTYPE_NORMAL )	// �t�H���g�̃f�t�H���g�̌`��
#define DEFAULT_FONT_EDGESIZE						(1)					// �t�H���g�̃f�t�H���g�̑���

#define MAX_USERIMAGEREAD_FUNCNUM					(10)				// ���[�U�[���o�^�ł���O���t�B�b�N���[�h�֐��̍ő吔

// �v�h�m�c�n�v�r�̃o�[�W�����}�N��
#define DX_WINDOWSVERSION_31						(0x000)
#define DX_WINDOWSVERSION_95						(0x001)
#define DX_WINDOWSVERSION_98						(0x002)
#define DX_WINDOWSVERSION_ME						(0x003)
#define DX_WINDOWSVERSION_NT31						(0x104)
#define DX_WINDOWSVERSION_NT40						(0x105)
#define DX_WINDOWSVERSION_2000						(0x106)
#define DX_WINDOWSVERSION_XP						(0x107)
#define DX_WINDOWSVERSION_VISTA						(0x108)
#define DX_WINDOWSVERSION_7							(0x109)
#define DX_WINDOWSVERSION_8							(0x10A)
#define DX_WINDOWSVERSION_8_1						(0x10B)
#define DX_WINDOWSVERSION_10						(0x10C)
#define DX_WINDOWSVERSION_11						(0x10D)
#define DX_WINDOWSVERSION_NT_TYPE					(0x100)

// DirectX�̃o�[�W����
#define DX_DIRECTXVERSION_NON						(0)
#define DX_DIRECTXVERSION_1							(0x10000)
#define DX_DIRECTXVERSION_2							(0x20000)
#define DX_DIRECTXVERSION_3							(0x30000)
#define DX_DIRECTXVERSION_4							(0x40000)
#define DX_DIRECTXVERSION_5							(0x50000)
#define DX_DIRECTXVERSION_6							(0x60000)
#define DX_DIRECTXVERSION_6_1						(0x60100)
#define DX_DIRECTXVERSION_7							(0x70000)
#define DX_DIRECTXVERSION_8							(0x80000)
#define DX_DIRECTXVERSION_8_1						(0x80100)

// Direct3D�̃o�[�W����
#define DX_DIRECT3D_NONE							(0)
#define DX_DIRECT3D_9								(1)
#define DX_DIRECT3D_9EX								(2)
#define DX_DIRECT3D_11								(3)

// Direct3D11 �� Feature Level
#define DX_DIRECT3D_11_FEATURE_LEVEL_9_1			(0x9100)
#define DX_DIRECT3D_11_FEATURE_LEVEL_9_2			(0x9200)
#define DX_DIRECT3D_11_FEATURE_LEVEL_9_3			(0x9300)
#define DX_DIRECT3D_11_FEATURE_LEVEL_10_0			(0xa000)
#define DX_DIRECT3D_11_FEATURE_LEVEL_10_1			(0xa100)
#define DX_DIRECT3D_11_FEATURE_LEVEL_11_0			(0xb000)
#define DX_DIRECT3D_11_FEATURE_LEVEL_11_1			(0xb100)

// �����Z�b�g
#define DX_CHARSET_DEFAULT							(0)				// �f�t�H���g�����Z�b�g
#define DX_CHARSET_SHFTJIS							(1)				// �V�t�gJIS
#define DX_CHARSET_HANGEUL							(2)				// �n���O�������Z�b�g
#define DX_CHARSET_BIG5								(3)				// �ɑ̕����Z�b�g
#define DX_CHARSET_GB2312							(4)				// �ȑ̕����Z�b�g
#define DX_CHARSET_WINDOWS_1252						(5)				// ����(���e�������̕����R�[�h)
#define DX_CHARSET_ISO_IEC_8859_15					(6)				// ����(���e�������̕����R�[�h)
#define DX_CHARSET_UTF8								(7)				// UTF-8
#define DX_CHARSET_NUM								(8)				// �����Z�b�g�̐�

// �����R�[�h�`��
#define DX_CHARCODEFORMAT_SHIFTJIS					(932)			// �V�t�gJIS�R�[�h
#define DX_CHARCODEFORMAT_GB2312					(936)			// �ȑ̎������R�[�h
#define DX_CHARCODEFORMAT_UHC						(949)			// �n���O�������R�[�h
#define DX_CHARCODEFORMAT_BIG5						(950)			// �ɑ̕����R�[�h
#define DX_CHARCODEFORMAT_UTF16LE					(1200)			// UTF-16 ���g���G���f�B�A��
#define DX_CHARCODEFORMAT_UTF16BE					(1201)			// UTF-16 �r�b�O�G���f�B�A��
#define DX_CHARCODEFORMAT_WINDOWS_1252				(1252)			// ����(���e�������̕����R�[�h)
#define DX_CHARCODEFORMAT_ISO_IEC_8859_15			(32764)			// ����(���e�������̕����R�[�h)
#define DX_CHARCODEFORMAT_UTF8						(65001)			// UTF-8
#define DX_CHARCODEFORMAT_ASCII						(32765)			// �A�X�L�[�����R�[�h
#define DX_CHARCODEFORMAT_UTF32LE					(32766)			// UTF-32 ���g���G���f�B�A��
#define DX_CHARCODEFORMAT_UTF32BE					(32767)			// UTF-32 �r�b�O�G���f�B�A��

// �l�h�c�h�̉��t���[�h��`
#define DX_MIDIMODE_MCI								(0)				// �l�b�h�ɂ�鉉�t
#define DX_MIDIMODE_DM								(1)				// �c�����������l���������ɂ�鉉�t
#define DX_MIDIMODE_DIRECT_MUSIC_REVERB				(1)				// �c�����������l��������(���o�[�u����)�ɂ�鉉�t
#define DX_MIDIMODE_DIRECT_MUSIC_NORMAL				(2)				// �c�����������l��������(���o�[�u�Ȃ�)�ɂ�鉉�t
#define DX_MIDIMODE_NUM								(3)				// �l�h�c�h�̉��t���[�h�̐�

// �`�惂�[�h��`
#define DX_DRAWMODE_NEAREST							(0)				// �l�A���X�g�l�C�o�[�@�ŕ`��
#define DX_DRAWMODE_BILINEAR						(1)				// �o�C���j�A�@�ŕ`�悷��
#define DX_DRAWMODE_ANISOTROPIC						(2)				// �ٕ����t�B���^�����O�@�ŕ`�悷��
#define DX_DRAWMODE_OTHER							(3)				// ����ȊO
#define DX_DRAWMODE_NUM								(4)				// �`�惂�[�h�̐�

// �t�H���g�̃^�C�v
#define DX_FONTTYPE_NORMAL							(0x00)			// �m�[�}���t�H���g
#define DX_FONTTYPE_EDGE							(0x01)			// �G�b�W���t�H���g
#define DX_FONTTYPE_ANTIALIASING					(0x02)			// �A���`�G�C���A�X�t�H���g( �W���@�\�A���`�G�C���A�X )
#define DX_FONTTYPE_ANTIALIASING_4X4				(0x12)			// �A���`�G�C���A�X�t�H���g( 4x4�T���v�����O )
#define DX_FONTTYPE_ANTIALIASING_8X8				(0x22)			// �A���`�G�C���A�X�t�H���g( 8x8�T���v�����O )
#define DX_FONTTYPE_ANTIALIASING_16X16				(0x32)			// �A���`�G�C���A�X�t�H���g( 16x16�T���v�����O )
#define DX_FONTTYPE_ANTIALIASING_EDGE				(0x03)			// �A���`�G�C���A�X���G�b�W�t���t�H���g( �W���@�\�A���`�G�C���A�X )
#define DX_FONTTYPE_ANTIALIASING_EDGE_4X4			(0x13)			// �A���`�G�C���A�X���G�b�W�t���t�H���g( 4x4�T���v�����O )
#define DX_FONTTYPE_ANTIALIASING_EDGE_8X8			(0x23)			// �A���`�G�C���A�X���G�b�W�t���t�H���g( 8x8�T���v�����O )
#define DX_FONTTYPE_ANTIALIASING_EDGE_16X16			(0x33)			// �A���`�G�C���A�X���G�b�W�t���t�H���g( 16x16�T���v�����O )

// �t�H���g�摜�̊K���r�b�g��
#define DX_FONTIMAGE_BIT_1							(0)
#define DX_FONTIMAGE_BIT_4							(1)
#define DX_FONTIMAGE_BIT_8							(2)

// �`��u�����h���[�h��`
#define DX_BLENDMODE_NOBLEND						(0)				// �m�[�u�����h
#define DX_BLENDMODE_ALPHA							(1)				// ���u�����h
#define DX_BLENDMODE_ADD							(2)				// ���Z�u�����h
#define DX_BLENDMODE_SUB							(3)				// ���Z�u�����h
#define DX_BLENDMODE_MUL							(4)				// ��Z�u�����h
   // (��������p)
#define DX_BLENDMODE_SUB2							(5)				// ��������p���Z�u�����h�Q
//#define DX_BLENDMODE_BLINEALPHA					(7)				// ���E���ڂ���
#define DX_BLENDMODE_XOR							(6)				// XOR�u�����h( �\�t�g�E�G�A�����_�����O���[�h�ł̂ݗL�� )
#define DX_BLENDMODE_DESTCOLOR						(8)				// �J���[�͍X�V����Ȃ�
#define DX_BLENDMODE_INVDESTCOLOR					(9)				// �`���̐F�̔��]�l��|����
#define DX_BLENDMODE_INVSRC							(10)			// �`�挳�̐F�𔽓]����
#define DX_BLENDMODE_MULA							(11)			// �A���t�@�`�����l���l���t����Z�u�����h
#define DX_BLENDMODE_ALPHA_X4						(12)			// ���u�����h�̕`�挳�̋P�x��ő�S�{�ɂł��郂�[�h
#define DX_BLENDMODE_ADD_X4							(13)			// ���Z�u�����h�̕`�挳�̋P�x��ő�S�{�ɂł��郂�[�h
#define DX_BLENDMODE_SRCCOLOR						(14)			// �`�挳�̃J���[�ł��̂܂ܕ`�悳���
#define DX_BLENDMODE_HALF_ADD						(15)			// �����Z�u�����h
#define DX_BLENDMODE_SUB1							(16)			// ��������p���Z�u�����h�P
#define DX_BLENDMODE_PMA_ALPHA						(17)			// ��Z�ς݃��u�����h���[�h�̃��u�����h
#define DX_BLENDMODE_PMA_ADD						(18)			// ��Z�ς݃��u�����h���[�h�̉��Z�u�����h
#define DX_BLENDMODE_PMA_SUB						(19)			// ��Z�ς݃��u�����h���[�h�̌��Z�u�����h
#define DX_BLENDMODE_PMA_INVSRC						(20)			// ��Z�ς݃��u�����h���[�h�̕`�挳�̐F�𔽓]����
#define DX_BLENDMODE_PMA_ALPHA_X4					(21)			// ��Z�ς݃��u�����h���[�h�̃��u�����h�̕`�挳�̋P�x��ő�S�{�ɂł��郂�[�h
#define DX_BLENDMODE_PMA_ADD_X4						(22)			// ��Z�ς݃��u�����h���[�h�̉��Z�u�����h�̕`�挳�̋P�x��ő�S�{�ɂł��郂�[�h
#define DX_BLENDMODE_LIVE2D_ZERO					(23)			// Live2D �̃u�����h���[�h Zero �p
#define DX_BLENDMODE_LIVE2D_NORMAL					(24)			// Live2D �̃u�����h���[�h Normal �p
#define DX_BLENDMODE_LIVE2D_ADD						(25)			// Live2D �̃u�����h���[�h Add �p
#define DX_BLENDMODE_LIVE2D_MULT					(26)			// Live2D �̃u�����h���[�h Mult �p
#define DX_BLENDMODE_LIVE2D_MASK					(27)			// Live2D �̃u�����h���[�h Mask �p
#define DX_BLENDMODE_SPINE_NORMAL					(28)			// Spine �̃u�����h���[�h Normal �p
#define DX_BLENDMODE_SPINE_ADDITIVE					(29)			// Spine �̃u�����h���[�h Additive �p
#define DX_BLENDMODE_SPINE_MULTIPLY					(30)			// Spine �̃u�����h���[�h Multiply �p
#define DX_BLENDMODE_SPINE_SCREEN					(31)			// Spine �̃u�����h���[�h Screen �p
#define DX_BLENDMODE_CUSTOM							(32)			// �J�X�^���u�����h���[�h
#define DX_BLENDMODE_DST_RGB_SRC_A					(33)			// �`�挳�� A �݂̂��������( �`���� RGB �͕ύX����Ȃ� )
#define DX_BLENDMODE_INVDESTCOLOR_A					(34)			// �`���� A �̔��]�l��|����( �`���� RGB �͕ύX����Ȃ� )
#define DX_BLENDMODE_MUL_A							(35)			// A �݂̂̏�Z�u�����h( �`���� RGB �͕ύX����Ȃ� )
#define DX_BLENDMODE_PMA_INVDESTCOLOR_A				(36)			// ��Z�ς݃��p�� DX_BLENDMODE_INVDESTCOLOR_A
#define DX_BLENDMODE_PMA_MUL_A						(37)			// ��Z�ς݃��p�� DX_BLENDMODE_MUL_A
#define DX_BLENDMODE_NUM							(38)			// �u�����h���[�h�̐�

// �J�X�^���u�����h���[�h�p�̃u�����h�v�f�^�C�v
// Rs = �`�挳��R   Rg = �`�挳��G   Rb = �`�挳��B   Ra = �`�挳��A
// Rd = �`����R   Rd = �`����G   Rd = �`����B   Rd = �`����A
#define DX_BLEND_ZERO								(0)				// R = 0         G = 0         B = 0         A = 0
#define DX_BLEND_ONE								(1)				// R = 255       G = 255       B = 255       A = 255
#define DX_BLEND_SRC_COLOR							(2)				// R = Rs        G = Gs        B = Gs        A = As
#define DX_BLEND_INV_SRC_COLOR						(3)				// R = 255 - Rs  G = 255 - Gs  B = 255 - Gs  A = 255 - As
#define DX_BLEND_SRC_ALPHA							(4)				// R = As        G = As        B = As        A = As
#define DX_BLEND_INV_SRC_ALPHA						(5)				// R = 255 - As  G = 255 - As  B = 255 - As  A = 255 - As
#define DX_BLEND_DEST_COLOR							(6)				// R = Rd        G = Gd        B = Bd        A = Ad
#define DX_BLEND_INV_DEST_COLOR						(7)				// R = 255 - Rd  G = 255 - Gd  B = 255 - Bd  A = 255 - Ad
#define DX_BLEND_DEST_ALPHA							(8)				// R = Ad        G = Ad        B = Ad        A = Ad
#define DX_BLEND_INV_DEST_ALPHA						(9)				// R = 255 - Ad  G = 255 - Ad  B = 255 - Ad  A = 255 - Ad
#define DX_BLEND_SRC_ALPHA_SAT						(10)			// R = f         G = f         B = f         A = 255        f = min( As, 255 - Ad )
#define DX_BLEND_NUM								(11)			// �u�����h�v�f�^�C�v�̐�

// �J�X�^���u�����h���[�h�p�̃u�����h�����^�C�v
#define DX_BLENDOP_ADD								(0)				// �u�����h�\�[�X1�ƃu�����h�\�[�X2����Z
#define DX_BLENDOP_SUBTRACT							(1)				// �u�����h�\�[�X1����u�����h�\�[�X2����Z
#define DX_BLENDOP_REV_SUBTRACT						(2)				// �u�����h�\�[�X2����u�����h�\�[�X2����Z
#define DX_BLENDOP_MIX								(3)				// �u�����h�\�[�X1�ƃu�����h�\�[�X2�̍ŏ��l
#define DX_BLENDOP_MAX								(4)				// �u�����h�\�[�X1�ƃu�����h�\�[�X2�̍ő�l
#define DX_BLENDOP_NUM								(5)				// �u�����h�����^�C�v�̐�

// DrawGraphF ���̕��������_�l�ō��W��w�肷��֐��ɂ�������W�^�C�v
#define DX_DRAWFLOATCOORDTYPE_DIRECT3D9				(0)				// Direct3D9�^�C�v( -0.5f �̕␳��s��Ȃ��ƃe�N�X�`���̃s�N�Z�����Y��Ƀ}�b�v����Ȃ��^�C�v )
#define DX_DRAWFLOATCOORDTYPE_DIRECT3D10			(1)				// Direct3D10�^�C�v( -0.5f �̕␳��s��ȂȂ��Ă�e�N�X�`���̃s�N�Z�����Y��Ƀ}�b�v�����^�C�v )

// �摜�����^�C�v
#define DX_BLENDGRAPHTYPE_NORMAL					(0)				// �ʏ퍇��
#define DX_BLENDGRAPHTYPE_WIPE						(1)				// ���C�v����
#define DX_BLENDGRAPHTYPE_ALPHA						(2)				// �u�����h�摜�̃��l�ƌ��摜�̃��l��|�����킹��
#define DX_BLENDGRAPHTYPE_NUM						(3)

// �摜�������W�^�C�v
#define DX_BLENDGRAPH_POSMODE_DRAWGRAPH				(0)				// �`�悷��摜��ō����摜�̍��W�����
#define DX_BLENDGRAPH_POSMODE_SCREEN				(1)				// �X�N���[�����W��ō����摜�̍��W�����
#define DX_BLENDGRAPH_POSMODE_NUM					(2)

// �O���t�B�b�N�t�B���^�[�^�C�v
#define DX_GRAPH_FILTER_MONO						(0)				// ���m�g�[���t�B���^
#define DX_GRAPH_FILTER_GAUSS						(1)				// �K�E�X�t�B���^
#define DX_GRAPH_FILTER_DOWN_SCALE					(2)				// �k���t�B���^
#define DX_GRAPH_FILTER_BRIGHT_CLIP					(3)				// ���邳�N���b�v�t�B���^
#define DX_GRAPH_FILTER_BRIGHT_SCALE				(4)				// �w��̖��邳�̈��g�傷��t�B���^
#define DX_GRAPH_FILTER_HSB							(5)				// �F���E�ʓx�E���x�t�B���^
#define DX_GRAPH_FILTER_INVERT						(6)				// �K���̔��]�t�B���^
#define DX_GRAPH_FILTER_LEVEL						(7)				// ���x���␳�t�B���^
#define DX_GRAPH_FILTER_TWO_COLOR					(8)				// �Q�K�����t�B���^
#define DX_GRAPH_FILTER_GRADIENT_MAP				(9)				// �O���f�[�V�����}�b�v�t�B���^
#define DX_GRAPH_FILTER_REPLACEMENT					(10)			// �F�̒u��
#define DX_GRAPH_FILTER_PREMUL_ALPHA				(11)			// �ʏ�̃A���t�@�`�����l���t���摜���Z�ς݃A���t�@�摜�ɕϊ�����t�B���^
#define DX_GRAPH_FILTER_INTERP_ALPHA				(12)			// ��Z�ς݃��摜��ʏ�̃A���t�@�`�����l���t���摜�ɕϊ�����t�B���^
#define DX_GRAPH_FILTER_YUV_TO_RGB					(13)			// YUV�J���[��RGB�J���[�ɕϊ�����t�B���^
#define DX_GRAPH_FILTER_Y2UV1_TO_RGB				(14)			// YUV�J���[��RGB�J���[�ɕϊ�����t�B���^( UV������ Y�����̔����E���͂S���̂P( ���E�c�Е��Ⴕ���͗��� )�̉𑜓x�����Ȃ��ꍇ�p )
#define DX_GRAPH_FILTER_YUV_TO_RGB_RRA				(15)			// YUV�J���[��RGB�J���[�ɕϊ�����t�B���^( ���E��������R�̒l��A���t�@�l�Ƃ��Ĉ��� )
#define DX_GRAPH_FILTER_Y2UV1_TO_RGB_RRA			(16)			// YUV�J���[��RGB�J���[�ɕϊ�����t�B���^( UV������ Y�����̔����E���͂S���̂P( ���E�c�Е��Ⴕ���͗��� )�̉𑜓x�����Ȃ��ꍇ�p )( ���E��������R�̒l��A���t�@�l�Ƃ��Ĉ��� )
#define DX_GRAPH_FILTER_BICUBIC_SCALE				(17)			// �o�C�L���[�r�b�N��g�p�����g��E�k���t�B���^
#define DX_GRAPH_FILTER_LANCZOS3_SCALE				(18)			// Lanczos-3��g�p�����g��E�k���t�B���^
#define DX_GRAPH_FILTER_SSAO						(19)			// Screen-Space Ambient Occlusion�t�B���^
#define DX_GRAPH_FILTER_FLOAT_COLOR_SCALE			(20)			// float�^�̐F�̃X�P�[�����O
#define DX_GRAPH_FILTER_PMA_BRIGHT_CLIP				(21)			// ���邳�N���b�v�t�B���^(��Z�ς݃A���t�@�摜�p)
#define DX_GRAPH_FILTER_PMA_BRIGHT_SCALE			(22)			// �w��̖��邳�̈��g�傷��t�B���^(��Z�ς݃A���t�@�摜�p)
#define DX_GRAPH_FILTER_PMA_HSB						(23)			// �F���E�ʓx�E���x�t�B���^(��Z�ς݃A���t�@�摜�p)
#define DX_GRAPH_FILTER_PMA_INVERT					(24)			// �K���̔��]�t�B���^(��Z�ς݃A���t�@�摜�p)
#define DX_GRAPH_FILTER_PMA_LEVEL					(25)			// ���x���␳�t�B���^(��Z�ς݃A���t�@�摜�p)
#define DX_GRAPH_FILTER_PMA_TWO_COLOR				(26)			// �Q�K�����t�B���^(��Z�ς݃A���t�@�摜�p)
#define DX_GRAPH_FILTER_PMA_GRADIENT_MAP			(27)			// �O���f�[�V�����}�b�v�t�B���^(��Z�ς݃A���t�@�摜�p)
#define DX_GRAPH_FILTER_PMA_REPLACEMENT				(28)			// �F�̒u��(��Z�ς݃A���t�@�摜�p)
#define DX_GRAPH_FILTER_NUM							(29)

// �O���t�B�b�N�u�����h�^�C�v
#define DX_GRAPH_BLEND_NORMAL						(0)				// �ʏ�
#define DX_GRAPH_BLEND_RGBA_SELECT_MIX				(1)				// RGBA�̗v�f��I����č���
#define DX_GRAPH_BLEND_MULTIPLE						(2)				// ��Z
#define DX_GRAPH_BLEND_DIFFERENCE					(3)				// ���Z
#define DX_GRAPH_BLEND_ADD							(4)				// ���Z
#define DX_GRAPH_BLEND_SCREEN						(5)				// �X�N���[��
#define DX_GRAPH_BLEND_OVERLAY						(6)				// �I�[�o�[���C
#define DX_GRAPH_BLEND_DODGE						(7)				// �����Ă�
#define DX_GRAPH_BLEND_BURN							(8)				// �Ă�����
#define DX_GRAPH_BLEND_DARKEN						(9)				// ��r(��)
#define DX_GRAPH_BLEND_LIGHTEN						(10)			// ��r(��)
#define DX_GRAPH_BLEND_SOFTLIGHT					(11)			// �\�t�g���C�g
#define DX_GRAPH_BLEND_HARDLIGHT					(12)			// �n�[�h���C�g
#define DX_GRAPH_BLEND_EXCLUSION					(13)			// ���O
#define DX_GRAPH_BLEND_NORMAL_ALPHACH				(14)			// ���`�����l���t���摜�̒ʏ퍇��
#define DX_GRAPH_BLEND_ADD_ALPHACH					(15)			// ���`�����l���t���摜�̉��Z����
#define DX_GRAPH_BLEND_MULTIPLE_A_ONLY				(16)			// �A���t�@�`�����l���݂̂̏�Z
#define DX_GRAPH_BLEND_PMA_NORMAL					(17)			// �ʏ�( ��Z�ς݃��摜�p )
#define DX_GRAPH_BLEND_PMA_RGBA_SELECT_MIX			(18)			// RGBA�̗v�f��I����č���( ��Z�ς݃��摜�p )
#define DX_GRAPH_BLEND_PMA_MULTIPLE					(19)			// ��Z( ��Z�ς݃��摜�p )
#define DX_GRAPH_BLEND_PMA_DIFFERENCE				(20)			// ���Z( ��Z�ς݃��摜�p )
#define DX_GRAPH_BLEND_PMA_ADD						(21)			// ���Z( ��Z�ς݃��摜�p )
#define DX_GRAPH_BLEND_PMA_SCREEN					(22)			// �X�N���[��( ��Z�ς݃��摜�p )
#define DX_GRAPH_BLEND_PMA_OVERLAY					(23)			// �I�[�o�[���C( ��Z�ς݃��摜�p )
#define DX_GRAPH_BLEND_PMA_DODGE					(24)			// �����Ă�( ��Z�ς݃��摜�p )
#define DX_GRAPH_BLEND_PMA_BURN						(25)			// �Ă�����( ��Z�ς݃��摜�p )
#define DX_GRAPH_BLEND_PMA_DARKEN					(26)			// ��r(��)( ��Z�ς݃��摜�p )
#define DX_GRAPH_BLEND_PMA_LIGHTEN					(27)			// ��r(��)( ��Z�ς݃��摜�p )
#define DX_GRAPH_BLEND_PMA_SOFTLIGHT				(28)			// �\�t�g���C�g( ��Z�ς݃��摜�p )
#define DX_GRAPH_BLEND_PMA_HARDLIGHT				(29)			// �n�[�h���C�g( ��Z�ς݃��摜�p )
#define DX_GRAPH_BLEND_PMA_EXCLUSION				(30)			// ���O( ��Z�ς݃��摜�p )
#define DX_GRAPH_BLEND_PMA_NORMAL_ALPHACH			(31)			// ���`�����l���t���摜�̒ʏ퍇��( ��Z�ς݃��摜�p )
#define DX_GRAPH_BLEND_PMA_ADD_ALPHACH				(32)			// ���`�����l���t���摜�̉��Z����( ��Z�ς݃��摜�p )
#define DX_GRAPH_BLEND_PMA_MULTIPLE_A_ONLY			(33)			// �A���t�@�`�����l���݂̂̏�Z( ��Z�ς݃��摜�p )
#define DX_GRAPH_BLEND_MASK							(34)			// �}�X�N( SrcGrHandle �� BlendGrHandle ��ʏ�`�悵����ŁASrcGrHandle �� A ��D�� )
#define DX_GRAPH_BLEND_PMA_MASK						(35)			// �}�X�N( DX_GRAPH_BLEND_MASK �̏�Z�ς݃��摜�p )
#define DX_GRAPH_BLEND_NUM							(36)

// DX_GRAPH_BLEND_RGBA_SELECT_MIX �p�̐F�I��p��`
#define DX_RGBA_SELECT_SRC_R						(0)				// ���摜�̐Ԑ���
#define DX_RGBA_SELECT_SRC_G						(1)				// ���摜�̗ΐ���
#define DX_RGBA_SELECT_SRC_B						(2)				// ���摜�̐���
#define DX_RGBA_SELECT_SRC_A						(3)				// ���摜�̃�����
#define DX_RGBA_SELECT_BLEND_R						(4)				// �u�����h�摜�̐Ԑ���
#define DX_RGBA_SELECT_BLEND_G						(5)				// �u�����h�摜�̗ΐ���
#define DX_RGBA_SELECT_BLEND_B						(6)				// �u�����h�摜�̐���
#define DX_RGBA_SELECT_BLEND_A						(7)				// �u�����h�摜�̃�����
#define DX_RGBA_SELECT_SRC_INV_R					(8)				// ���摜�̐Ԑ����𔽓]�������
#define DX_RGBA_SELECT_SRC_INV_G					(9)				// ���摜�̗ΐ����𔽓]�������
#define DX_RGBA_SELECT_SRC_INV_B					(10)			// ���摜�̐����𔽓]�������
#define DX_RGBA_SELECT_SRC_INV_A					(11)			// ���摜�̃������𔽓]�������
#define DX_RGBA_SELECT_BLEND_INV_R					(12)			// �u�����h�摜�̐Ԑ����𔽓]�������
#define DX_RGBA_SELECT_BLEND_INV_G					(13)			// �u�����h�摜�̗ΐ����𔽓]�������
#define DX_RGBA_SELECT_BLEND_INV_B					(14)			// �u�����h�摜�̐����𔽓]�������
#define DX_RGBA_SELECT_BLEND_INV_A					(15)			// �u�����h�摜�̃������𔽓]�������

// �t�B�����[�h
#define DX_FILL_WIREFRAME							(2)				// ���C���[�t���[��
#define DX_FILL_SOLID								(3)				// �|���S��

// �|���S���J�����O���[�h
#define DX_CULLING_NONE								(0)				// �J�����O�Ȃ�
#define DX_CULLING_LEFT								(1)				// �w�ʂ�����ŃJ�����O
#define DX_CULLING_RIGHT							(2)				// �w�ʂ�E���ŃJ�����O
#define DX_CULLING_NUM								(3)				// �J�����O���[�h�̐�

// �N���b�s���O����
#define DX_CAMERACLIP_LEFT							(0x01)			// ��ʍ������ɃN���b�v
#define DX_CAMERACLIP_RIGHT							(0x02)			// ��ʉE�����ɃN���b�v
#define DX_CAMERACLIP_BOTTOM						(0x04)			// ��ʉ������ɃN���b�v
#define DX_CAMERACLIP_TOP							(0x08)			// ��ʏ�����ɃN���b�v
#define DX_CAMERACLIP_BACK							(0x10)			// ��ʌ�����ɃN���b�v
#define DX_CAMERACLIP_FRONT							(0x20)			// ��ʑO�����ɃN���b�v

// MV1���f���̕`�惂�[�h
#define DX_MV1_DRAWMODE_NORMAL						(0)				// �ʏ�`��
#define DX_MV1_DRAWMODE_NORMAL_DEPTH				(1)				// �@���Ɛ[�x��`��

// MV1���f���̒��_�^�C�v
#define DX_MV1_VERTEX_TYPE_1FRAME					(0)				// �P�t���[���̉e����󂯂钸�_
#define DX_MV1_VERTEX_TYPE_4FRAME					(1)				// �P�`�S�t���[���̉e����󂯂钸�_
#define DX_MV1_VERTEX_TYPE_8FRAME					(2)				// �T�`�W�t���[���̉e����󂯂钸�_
#define DX_MV1_VERTEX_TYPE_FREE_FRAME				(3)				// �X�t���[���ȏ�̉e����󂯂钸�_
#define DX_MV1_VERTEX_TYPE_NMAP_1FRAME				(4)				// �@���}�b�v�p�̏�񂪊܂܂��P�t���[���̉e����󂯂钸�_
#define DX_MV1_VERTEX_TYPE_NMAP_4FRAME				(5)				// �@���}�b�v�p�̏�񂪊܂܂��P�`�S�t���[���̉e����󂯂钸�_
#define DX_MV1_VERTEX_TYPE_NMAP_8FRAME				(6)				// �@���}�b�v�p�̏�񂪊܂܂��T�`�W�t���[���̉e����󂯂钸�_
#define DX_MV1_VERTEX_TYPE_NMAP_FREE_FRAME			(7)				// �@���}�b�v�p�̏�񂪊܂܂��X�t���[���ȏ�̉e����󂯂钸�_
#define DX_MV1_VERTEX_TYPE_NUM						(8)				// ���_�^�C�v�̐�

// ���b�V���̎��
#define DX_MV1_MESHCATEGORY_NORMAL					(0)				// ���ʂ̃��b�V��
#define DX_MV1_MESHCATEGORY_OUTLINE					(1)				// �֊s���`��p���b�V��
#define DX_MV1_MESHCATEGORY_OUTLINE_ORIG_SHADER		(2)				// �֊s���`��p���b�V��( �I���W�i���V�F�[�_�[�ł̕`��p )
#define DX_MV1_MESHCATEGORY_NUM						(3)				// ���b�V���̎�ނ̐�

// �V�F�C�v���̓K�p�^�C�v
#define DX_MV1_SHAPERATE_ADD						(0)				// ���̒l�ɉ��Z
#define DX_MV1_SHAPERATE_OVERWRITE					(1)				// ���̒l�ɏ㏑��

// MV1�t�@�C���̕ۑ��^�C�v
#define MV1_SAVETYPE_MESH							(0x0001)		// ���b�V�����̂ݕۑ�
#define MV1_SAVETYPE_ANIM							(0x0002)		// �A�j���[�V�������̂ݕۑ�
#define MV1_SAVETYPE_NORMAL							( MV1_SAVETYPE_MESH | MV1_SAVETYPE_ANIM )	// �ʏ�ۑ�

// �A�j���[�V�����L�[�f�[�^�^�C�v
#define MV1_ANIMKEY_DATATYPE_ROTATE					(0)				// ��]
#define MV1_ANIMKEY_DATATYPE_ROTATE_X				(1)				// ��]�w
#define MV1_ANIMKEY_DATATYPE_ROTATE_Y				(2)				// ��]�x
#define MV1_ANIMKEY_DATATYPE_ROTATE_Z				(3)				// ��]�y
#define MV1_ANIMKEY_DATATYPE_SCALE					(5)				// �g��
#define MV1_ANIMKEY_DATATYPE_SCALE_X				(6)				// �X�P�[���w
#define MV1_ANIMKEY_DATATYPE_SCALE_Y				(7)				// �X�P�[���x
#define MV1_ANIMKEY_DATATYPE_SCALE_Z				(8)				// �X�P�[���y
#define MV1_ANIMKEY_DATATYPE_TRANSLATE				(10)			// ���s�ړ�
#define MV1_ANIMKEY_DATATYPE_TRANSLATE_X			(11)			// ���s�ړ��w
#define MV1_ANIMKEY_DATATYPE_TRANSLATE_Y			(12)			// ���s�ړ��x
#define MV1_ANIMKEY_DATATYPE_TRANSLATE_Z			(13)			// ���s�ړ��y
#define MV1_ANIMKEY_DATATYPE_MATRIX4X4C				(15)			// �S�~�S�s��̂S���( 0,0,0,1 )�Œ��
#define MV1_ANIMKEY_DATATYPE_MATRIX3X3				(17)			// �R�~�R�s��
#define MV1_ANIMKEY_DATATYPE_SHAPE					(18)			// �V�F�C�v
#define MV1_ANIMKEY_DATATYPE_OTHRE					(20)			// ���̑�

// �^�C���^�C�v
#define MV1_ANIMKEY_TIME_TYPE_ONE					(0)				// ���ԏ��͑S�̂ň��
#define MV1_ANIMKEY_TIME_TYPE_KEY					(1)				// ���ԏ��͊e�L�[�Ɉ��

// �A�j���[�V�����L�[�^�C�v
#define MV1_ANIMKEY_TYPE_QUATERNION_X				(0)				// �N�H�[�^�j�I��( X�t�@�C���^�C�v )
#define MV1_ANIMKEY_TYPE_VECTOR						(1)				// �x�N�^�[
#define MV1_ANIMKEY_TYPE_MATRIX4X4C					(2)				// �S�~�S�s��̂S���( 0,0,0,1 )�Œ��
#define MV1_ANIMKEY_TYPE_MATRIX3X3					(3)				// �R�~�R�s��
#define MV1_ANIMKEY_TYPE_FLAT						(4)				// �t���b�g
#define MV1_ANIMKEY_TYPE_LINEAR						(5)				// ���`���
#define MV1_ANIMKEY_TYPE_BLEND						(6)				// ����
#define MV1_ANIMKEY_TYPE_QUATERNION_VMD				(7)				// �N�H�[�^�j�I��( VMD�^�C�v )

// �`����ʎw��p��`
#define DX_SCREEN_FRONT								(0xfffffffc)
#define DX_SCREEN_BACK								(0xfffffffe) 
#define DX_SCREEN_WORK 								(0xfffffffd)
#define DX_SCREEN_TEMPFRONT							(0xfffffff0)
#define DX_SCREEN_OTHER								(0xfffffffa)

#define DX_NONE_GRAPH								(0xfffffffb)	// �O���t�B�b�N�Ȃ��n���h��

// �O���t�B�b�N���F���̉摜�򉻊ɘa�������[�h
#define DX_SHAVEDMODE_NONE							(0)				// �摜�򉻊ɘa������s��Ȃ�
#define DX_SHAVEDMODE_DITHER						(1)				// �f�B�U�����O
#define DX_SHAVEDMODE_DIFFUS						(2)				// �덷�g�U

// �摜�̕ۑ��^�C�v
#define DX_IMAGESAVETYPE_BMP						(0)				// bitmap
#define DX_IMAGESAVETYPE_JPEG						(1)				// jpeg
#define DX_IMAGESAVETYPE_PNG						(2)				// Png
#define DX_IMAGESAVETYPE_DDS						(3)				// Direct Draw Surface

// �T�E���h�Đ��`�Ԏw��p��`
#define DX_PLAYTYPE_LOOPBIT							(0x0002)		// ���[�v�Đ��r�b�g
#define DX_PLAYTYPE_BACKBIT							(0x0001)		// �o�b�N�O���E���h�Đ��r�b�g

#define DX_PLAYTYPE_NORMAL							(0)												// �m�[�}���Đ�
#define DX_PLAYTYPE_BACK				  			( DX_PLAYTYPE_BACKBIT )							// �o�b�N�O���E���h�Đ�
#define DX_PLAYTYPE_LOOP							( DX_PLAYTYPE_LOOPBIT | DX_PLAYTYPE_BACKBIT )	// ���[�v�Đ�

// ����Đ��^�C�v��`
#define DX_MOVIEPLAYTYPE_BCANCEL					(0)				// �{�^���L�����Z������
#define DX_MOVIEPLAYTYPE_NORMAL						(1)				// �{�^���L�����Z���Ȃ�

// �T�E���h�̃^�C�v
#define DX_SOUNDTYPE_NORMAL							(0)				// �m�[�}���T�E���h�`��
#define DX_SOUNDTYPE_STREAMSTYLE					(1)				// �X�g���[�����T�E���h�`��

// �T�E���h�f�[�^�^�C�v�̃}�N��
#define DX_SOUNDDATATYPE_MEMNOPRESS					(0)				// ���k���ꂽ�S�f�[�^�͍Đ����n�܂�O�ɃT�E���h�������ɂ��ׂĉ𓀂���A�i�[�����
#define DX_SOUNDDATATYPE_MEMNOPRESS_PLUS			(1)				// ���k���ꂽ�S�f�[�^�̓V�X�e���������Ɋi�[����A�Đ����Ȃ��璀���𓀂���A�ŏI�I�ɂ��ׂăT�E���h�������Ɋi�[�����(���̌�V�X�e���������ɑ��݂��鈳�k�f�[�^�͔j�������)
#define DX_SOUNDDATATYPE_MEMPRESS					(2)				// ���k���ꂽ�S�f�[�^�̓V�X�e���������Ɋi�[����A�Đ����镔�����������𓀂��Ȃ���T�E���h�������Ɋi�[����(�炵�I���Ɖ𓀂����f�[�^�͔j�������̂ŉ��x��𓀏������s����)
#define DX_SOUNDDATATYPE_FILE						(3)				// ���k���ꂽ�f�[�^�̍Đ����镔�������t�@�C�����璀���ǂݍ��݉𓀂���A�T�E���h�������Ɋi�[�����(�炵�I���Ɖ𓀂����f�[�^�͔j�������̂ŉ��x��𓀏������s����)

// �T�E���h�̎擾����Đ����ԃ^�C�v
#define DX_SOUNDCURRENTTIME_TYPE_LOW_LEVEL			(0)				// �჌�x��API��g�p���Ă�萳�m�ȍĐ����Ԃ�擾����
#define DX_SOUNDCURRENTTIME_TYPE_SOFT				(1)				// API�͎g�p�����A�\�t�g�E�F�A�������x���ł̍Đ����Ԃ�擾����

// �ǂݍ��ݏ����̃^�C�v
#define DX_READSOUNDFUNCTION_PCM					(1 << 0)		// PCM �̓ǂݍ��ݏ���
#define DX_READSOUNDFUNCTION_OGG					(1 << 1)		// Ogg Vorbis �̓ǂݍ��ݏ���
#define DX_READSOUNDFUNCTION_OPUS					(1 << 2)		// Opus �̓ǂݍ��ݏ���
#define DX_READSOUNDFUNCTION_DEFAULT_NUM			(3)				// ����ˑ��̓ǂݍ��ݏ����^�C�v�̐�

// �R�c�T�E���h���o�[�u�G�t�F�N�g�̃v���Z�b�g
#define DX_REVERB_PRESET_DEFAULT					(0)				// �f�t�H���g
#define DX_REVERB_PRESET_GENERIC					(1)				// ��ʓI�ȋ��
#define DX_REVERB_PRESET_PADDEDCELL					(2)				// ���_�a���Ҏ�(�H)
#define DX_REVERB_PRESET_ROOM						(3)				// ����
#define DX_REVERB_PRESET_BATHROOM					(4)				// �o�X���[��
#define DX_REVERB_PRESET_LIVINGROOM					(5)				// ���r���O���[��
#define DX_REVERB_PRESET_STONEROOM					(6)				// �΂̕���
#define DX_REVERB_PRESET_AUDITORIUM					(7)				// �u��
#define DX_REVERB_PRESET_CONCERTHALL				(8)				// �R���T�[�g�z�[��
#define DX_REVERB_PRESET_CAVE						(9)				// ����
#define DX_REVERB_PRESET_ARENA						(10)			// ����
#define DX_REVERB_PRESET_HANGAR						(11)			// �i�[��
#define DX_REVERB_PRESET_CARPETEDHALLWAY			(12)			// �J�[�y�b�g���~���ꂽ����
#define DX_REVERB_PRESET_HALLWAY					(13)			// ����
#define DX_REVERB_PRESET_STONECORRIDOR				(14)			// �΂̘L��
#define DX_REVERB_PRESET_ALLEY						(15)			// ���ʂ�
#define DX_REVERB_PRESET_FOREST						(16)			// �X
#define DX_REVERB_PRESET_CITY						(17)			// �s�s
#define DX_REVERB_PRESET_MOUNTAINS					(18)			// �R
#define DX_REVERB_PRESET_QUARRY						(19)			// �̐Ώ�
#define DX_REVERB_PRESET_PLAIN						(20)			// ����
#define DX_REVERB_PRESET_PARKINGLOT					(21)			// ���ԏ�
#define DX_REVERB_PRESET_SEWERPIPE					(22)			// ������
#define DX_REVERB_PRESET_UNDERWATER					(23)			// ���ʉ�
#define DX_REVERB_PRESET_SMALLROOM					(24)			// ������
#define DX_REVERB_PRESET_MEDIUMROOM					(25)			// ������
#define DX_REVERB_PRESET_LARGEROOM					(26)			// �啔��
#define DX_REVERB_PRESET_MEDIUMHALL					(27)			// ���z�[��
#define DX_REVERB_PRESET_LARGEHALL					(28)			// ��z�[��
#define DX_REVERB_PRESET_PLATE						(29)			// ��

#define DX_REVERB_PRESET_NUM						(30)			// �v���Z�b�g�̐�

// �}�X�N���ߐF���[�h
#define DX_MASKTRANS_WHITE							(0)				// �}�X�N�摜�̔��������𓧉ߐF�Ƃ���
#define DX_MASKTRANS_BLACK							(1)				// �}�X�N�摜�̍��������𓧉ߐF�Ƃ���
#define DX_MASKTRANS_NONE							(2) 			// ���ߐF�Ȃ�

// �}�X�N�摜�`�����l��
#define DX_MASKGRAPH_CH_A							(0)				// �A���t�@
#define DX_MASKGRAPH_CH_R							(1)				// ��
#define DX_MASKGRAPH_CH_G							(2)				// ��
#define DX_MASKGRAPH_CH_B							(3)				// ��

// �y�o�b�t�@�������݃��[�h
#define DX_ZWRITE_MASK								(0)				// �������߂Ȃ��悤�Ƀ}�X�N����
#define DX_ZWRITE_CLEAR								(1)				// �������߂�悤�Ƀ}�X�N��N���A����

// ��r���[�h
#define DX_CMP_NEVER								(1)				// FALSE
#define DX_CMP_LESS									(2)				// Src <  Dest		DrawAlpha <  TestParam
#define DX_CMP_EQUAL								(3)				// Src == Dest		DrawAlpha == TestParam
#define DX_CMP_LESSEQUAL							(4)				// Src <= Dest		DrawAlpha <= TestParam
#define DX_CMP_GREATER								(5)				// Src >  Dest		DrawAlpha >  TestParam
#define DX_CMP_NOTEQUAL								(6)				// Src != Dest		DrawAlpha != TestParam
#define DX_CMP_GREATEREQUAL							(7)				// Src >= Dest		DrawAlpha >= TestParam
#define DX_CMP_ALWAYS								(8)				// TRUE
#define DX_ZCMP_DEFAULT								( DX_CMP_LESSEQUAL )
#define DX_ZCMP_REVERSE								( DX_CMP_GREATEREQUAL )

// �V�F�[�f�B���O���[�h
#define DX_SHADEMODE_FLAT							(1)				// D_D3DSHADE_FLAT
#define DX_SHADEMODE_GOURAUD						(2)				// D_D3DSHADE_GOURAUD

// �t�H�O���[�h
#define DX_FOGMODE_NONE								(0)				// D_D3DFOG_NONE
#define DX_FOGMODE_EXP								(1)				// D_D3DFOG_EXP
#define DX_FOGMODE_EXP2								(2)				// D_D3DFOG_EXP2
#define DX_FOGMODE_LINEAR							(3)				// D_D3DFOG_LINEAR

// �}�e���A���^�C�v
#define DX_MATERIAL_TYPE_NORMAL									(0)	// �W���}�e���A��
#define DX_MATERIAL_TYPE_TOON									(1)	// �g�D�[�������_�����O�p�}�e���A��
#define DX_MATERIAL_TYPE_TOON_2									(2)	// �g�D�[�������_�����O�p�}�e���A��_�^�C�v�Q( MMD�݊� )
#define DX_MATERIAL_TYPE_MAT_SPEC_LUMINANCE_UNORM				(3)	// �}�e���A���̃X�y�L�����F�̋P�x�̎w��͈̔͂̒l�� 0.0f �` 1.0f �̒l�ɐ��K�����ď������ރ}�e���A��
#define DX_MATERIAL_TYPE_MAT_SPEC_LUMINANCE_CLIP_UNORM			(4)	// DX_MATERIAL_TYPE_MAT_SPEC_LUMINANCE_UNORM �Ɂw�w��̒l�����̏ꍇ�͏������ޒl�� 0.0f �ɂ���x�Ƃ���������������}�e���A��
#define DX_MATERIAL_TYPE_MAT_SPEC_LUMINANCE_CMP_GREATEREQUAL	(5)	// �}�e���A���̃X�y�L�����F�̋P�x���w���臒l�ȏ� �̏ꍇ�� 1.0f ��A�����̏ꍇ�� 0.0f ��������ރ}�e���A��
#define DX_MATERIAL_TYPE_MAT_SPEC_POWER_UNORM					(6)	// �}�e���A���̃X�y�L�����n�C���C�g�̑N���x�̎w��͈̔͂̒l�� 0.0f �` 1.0f �̒l�ɐ��K�����ď������ރ}�e���A��
#define DX_MATERIAL_TYPE_MAT_SPEC_POWER_CLIP_UNORM				(7)	// DX_MATERIAL_TYPE_MAT_SPEC_POWER_UNORM �Ɂw�w��̒l�����̏ꍇ�͏������ޒl�� 0.0f �ɂ���x�Ƃ���������������}�e���A��
#define DX_MATERIAL_TYPE_MAT_SPEC_POWER_CMP_GREATEREQUAL		(8)	// �}�e���A���̃X�y�L�����n�C���C�g�̑N���x���w���臒l�ȏ� �̏ꍇ�� 1.0f ��A�����̏ꍇ�� 0.0f ��������ރ}�e���A��
#define DX_MATERIAL_TYPE_NUM									(9)

// �}�e���A���u�����h�^�C�v
#define DX_MATERIAL_BLENDTYPE_TRANSLUCENT			(0)				// �A���t�@����
#define DX_MATERIAL_BLENDTYPE_ADDITIVE				(1)				// ���Z
#define DX_MATERIAL_BLENDTYPE_MODULATE				(2)				// ��Z
#define DX_MATERIAL_BLENDTYPE_NONE					(3)				// ����

// �e�N�X�`���A�h���X�^�C�v
#define DX_TEXADDRESS_WRAP							(1)				// D_D3DTADDRESS_WRAP
#define DX_TEXADDRESS_MIRROR						(2)				// D_D3DTADDRESS_MIRROR
#define DX_TEXADDRESS_CLAMP							(3)				// D_D3DTADDRESS_CLAMP
#define DX_TEXADDRESS_BORDER						(4)				// D_D3DTADDRESS_BORDER
#define DX_TEXADDRESS_NUM							(5)				// �e�N�X�`���A�h���X�^�C�v�̐�

// �V�F�[�_�[�^�C�v
#define DX_SHADERTYPE_VERTEX						(0)				// ���_�V�F�[�_�[
#define DX_SHADERTYPE_PIXEL							(1)				// �s�N�Z���V�F�[�_�[
#define DX_SHADERTYPE_GEOMETRY						(2)				// �W�I���g���V�F�[�_�[
#define DX_SHADERTYPE_COMPUTE						(3)				// �R���s���[�g�V�F�[�_�[
#define DX_SHADERTYPE_DOMAIN						(4)				// �h���C���V�F�[�_�[
#define DX_SHADERTYPE_HULL							(5)				// �n���V�F�[�_�[

// ���_�f�[�^�^�C�v
#define DX_VERTEX_TYPE_NORMAL_3D					(0)				// VERTEX3D�\���̌`��
#define DX_VERTEX_TYPE_SHADER_3D					(1)				// VERTEX3DSHADER�\���̌`��
#define DX_VERTEX_TYPE_NUM							(2)

// �C���f�b�N�X�f�[�^�^�C�v
#define DX_INDEX_TYPE_16BIT							(0)				// 16bit�C���f�b�N�X
#define DX_INDEX_TYPE_32BIT							(1)				// 32bit�C���f�b�N�X

// ���f���t�@�C���ǂݍ��ݎ��̕������Z���[�h
#define DX_LOADMODEL_PHYSICS_DISABLE				(1)				// �������Z��g�p���Ȃ�
#define DX_LOADMODEL_PHYSICS_LOADCALC				(0)				// �ǂݍ��ݎ��Ɍv�Z
#define DX_LOADMODEL_PHYSICS_REALTIME				(2)				// ���s���v�Z

// ���f���t�@�C���ǂݍ��ݎ��̕������Z�������O���[�h�̃��[�h
#define DX_LOADMODEL_PHYSICS_DISABLENAMEWORD_ALWAYS	(0)						// �S�Ẵt�@�C���ɑ΂��Ė��������[�h��K�p����
#define DX_LOADMODEL_PHYSICS_DISABLENAMEWORD_DISABLEPHYSICSFILEONLY	(1)		// vmd�t�@�C������ NP ��܂߂��u�������Z�����v�̃t�@�C���ɑ΂��Ă̂ݖ��������[�h��K�p����( ���̏ꍇ�A���������[�h���K�p����Ȃ����̂ɂ��Ă͕������Z���s���� )
#define DX_LOADMODEL_PHYSICS_DISABLENAMEWORD_NUM	(2)

// PMD, PMX �t�@�C���ǂݍ��ݎ��̃A�j���[�V������ FPS ���[�h( ��� IK �����̐��x�ɉe�����܂� )
#define DX_LOADMODEL_PMD_PMX_ANIMATION_FPSMODE_30	(0)				// �A�j���[�V������ 30FPS �œǂݍ���( IK�����̐��x:��  �f�[�^�T�C�Y:�� )( �f�t�H���g )
#define DX_LOADMODEL_PMD_PMX_ANIMATION_FPSMODE_60	(1)				// �A�j���[�V������ 60FPS �œǂݍ���( IK�����̐��x:��  �f�[�^�T�C�Y:�� )

// ���f���̔������v�f������ӏ��Ɋւ���`�惂�[�h
#define DX_SEMITRANSDRAWMODE_ALWAYS					(0)				// ���������ǂ����֌W�Ȃ��`�悷��
#define DX_SEMITRANSDRAWMODE_SEMITRANS_ONLY			(1)				// �������̂�̂̂ݕ`�悷��
#define DX_SEMITRANSDRAWMODE_NOT_SEMITRANS_ONLY		(2)				// �������ł͂Ȃ���̂̂ݕ`�悷��

// �L���[�u�}�b�v�̖ʔԍ�
#define DX_CUBEMAP_FACE_POSITIVE_X					(0)
#define DX_CUBEMAP_FACE_NEGATIVE_X					(1)
#define DX_CUBEMAP_FACE_POSITIVE_Y					(2)
#define DX_CUBEMAP_FACE_NEGATIVE_Y					(3)
#define DX_CUBEMAP_FACE_POSITIVE_Z					(4)
#define DX_CUBEMAP_FACE_NEGATIVE_Z					(5)

// �|���S���`��^�C�v
#define DX_PRIMTYPE_POINTLIST						(1)				// D_D3DPT_POINTLIST
#define DX_PRIMTYPE_LINELIST						(2)				// D_D3DPT_LINELIST
#define DX_PRIMTYPE_LINESTRIP						(3)				// D_D3DPT_LINESTRIP
#define DX_PRIMTYPE_TRIANGLELIST					(4)				// D_D3DPT_TRIANGLELIST
#define DX_PRIMTYPE_TRIANGLESTRIP					(5)				// D_D3DPT_TRIANGLESTRIP
#define DX_PRIMTYPE_TRIANGLEFAN						(6)				// D_D3DPT_TRIANGLEFAN
#define DX_PRIMTYPE_MIN								(1)
#define DX_PRIMTYPE_MAX								(6)

// ���C�g�^�C�v
#define DX_LIGHTTYPE_D3DLIGHT_POINT					(1)				// D_D3DLIGHT_POINT
#define DX_LIGHTTYPE_D3DLIGHT_SPOT					(2)				// D_D3DLIGHT_SPOT
#define DX_LIGHTTYPE_D3DLIGHT_DIRECTIONAL			(3)				// D_D3DLIGHT_DIRECTIONAL
#define DX_LIGHTTYPE_POINT							(1)				// D_D3DLIGHT_POINT
#define DX_LIGHTTYPE_SPOT							(2)				// D_D3DLIGHT_SPOT
#define DX_LIGHTTYPE_DIRECTIONAL					(3)				// D_D3DLIGHT_DIRECTIONAL

// Live2D �̃V�F�[�_�[
#define DX_LIVE2D_SHADER_SETUP_MASK_VERTEX								(0)				// �}�X�N�摜�����p���_�V�F�[�_�[
#define DX_LIVE2D_SHADER_SETUP_MASK_PIXEL								(1)				// �}�X�N�摜�����p�s�N�Z���V�F�[�_�[
#define DX_LIVE2D_SHADER_NORMAL_VERTEX									(2)				// �W���̒��_�V�F�[�_�[
#define DX_LIVE2D_SHADER_NORMAL_VERTEX_MASKED							(3)				// �W���̒��_�V�F�[�_�[ + �}�X�N�摜
#define DX_LIVE2D_SHADER_NORMAL_PIXEL									(4)				// �W���̃s�N�Z���V�F�[�_�[
#define DX_LIVE2D_SHADER_NORMAL_PIXEL_MASKED							(5)				// �W���̃s�N�Z���V�F�[�_�[ + �}�X�N�摜
#define DX_LIVE2D_SHADER_NORMAL_PIXEL_MASKED_INVERTED					(6)				// �W���̃s�N�Z���V�F�[�_�[ + �}�X�N�摜( �}�X�N�摜�̒l�𔽓]���Ďg�p )
#define DX_LIVE2D_SHADER_NORMAL_PIXEL_PREMULALPHA						(7)				// �W���̃s�N�Z���V�F�[�_�[ + �e�N�X�`���摜����Z�ς݃A���t�@
#define DX_LIVE2D_SHADER_NORMAL_PIXEL_MASKED_PREMULALPHA				(8)				// �W���̃s�N�Z���V�F�[�_�[ + �e�N�X�`���摜����Z�ς݃A���t�@ + �}�X�N�摜
#define DX_LIVE2D_SHADER_NORMAL_PIXEL_MASKED_INVERTEX_PREMULALPHA		(9)				// �W���̃s�N�Z���V�F�[�_�[ + �e�N�X�`���摜����Z�ς݃A���t�@ + �}�X�N�摜( �}�X�N�摜�̒l�𔽓]���Ďg�p )
#define DX_LIVE2D_SHADER_NUM											(10)			// �V�F�[�_�[�̐�

// �O���t�B�b�N�C���[�W�t�H�[�}�b�g�̒�`
#define DX_GRAPHICSIMAGE_FORMAT_3D_PAL4						(0)		// �P�U�F�p���b�g�J���[�W��
#define DX_GRAPHICSIMAGE_FORMAT_3D_PAL8						(1)		// �Q�T�U�F�p���b�g�J���[�W��
#define DX_GRAPHICSIMAGE_FORMAT_3D_ALPHA_PAL4				(2)		// ���`�����l�����P�U�F�p���b�g�J���[�W��
#define DX_GRAPHICSIMAGE_FORMAT_3D_ALPHA_PAL8				(3)		// ���`�����l�����Q�T�U�F�p���b�g�J���[�W��
#define DX_GRAPHICSIMAGE_FORMAT_3D_ALPHATEST_PAL4			(4)		// ���e�X�g���P�U�F�p���b�g�J���[�W��
#define DX_GRAPHICSIMAGE_FORMAT_3D_ALPHATEST_PAL8			(5)		// ���e�X�g���Q�T�U�F�p���b�g�J���[�W��
#define DX_GRAPHICSIMAGE_FORMAT_3D_RGB16					(6)		// �P�U�r�b�g�J���[�W��
#define DX_GRAPHICSIMAGE_FORMAT_3D_RGB32					(7)		// �R�Q�r�b�g�J���[�W��
#define DX_GRAPHICSIMAGE_FORMAT_3D_ALPHA_RGB16				(8)		// ���`�����l���t���P�U�r�b�g�J���[
#define DX_GRAPHICSIMAGE_FORMAT_3D_ALPHA_RGB32				(9)		// ���`�����l���t���R�Q�r�b�g�J���[
#define DX_GRAPHICSIMAGE_FORMAT_3D_ALPHATEST_RGB16			(10)	// ���e�X�g�t���P�U�r�b�g�J���[
#define DX_GRAPHICSIMAGE_FORMAT_3D_ALPHATEST_RGB32			(11)	// ���e�X�g�t���R�Q�r�b�g�J���[
#define DX_GRAPHICSIMAGE_FORMAT_3D_DXT1						(12)	// DXT1
#define DX_GRAPHICSIMAGE_FORMAT_3D_DXT2						(13)	// DXT2
#define DX_GRAPHICSIMAGE_FORMAT_3D_DXT3						(14)	// DXT3
#define DX_GRAPHICSIMAGE_FORMAT_3D_DXT4						(15)	// DXT4
#define DX_GRAPHICSIMAGE_FORMAT_3D_DXT5 					(16)	// DXT5
#define DX_GRAPHICSIMAGE_FORMAT_3D_BC7_UNORM 				(17)	// BC7 UNORM
#define DX_GRAPHICSIMAGE_FORMAT_3D_BC7_UNORM_SRGB			(18)	// BC7 UNORM SRGB
#define DX_GRAPHICSIMAGE_FORMAT_3D_PLATFORM0				(19)	// �v���b�g�t�H�[���ˑ��t�H�[�}�b�g�O
#define DX_GRAPHICSIMAGE_FORMAT_3D_PLATFORM1				(20)	// �v���b�g�t�H�[���ˑ��t�H�[�}�b�g�P
#define DX_GRAPHICSIMAGE_FORMAT_3D_PLATFORM2				(21)	// �v���b�g�t�H�[���ˑ��t�H�[�}�b�g�Q
#define DX_GRAPHICSIMAGE_FORMAT_3D_PLATFORM3				(22)	// �v���b�g�t�H�[���ˑ��t�H�[�}�b�g�R
#define DX_GRAPHICSIMAGE_FORMAT_3D_YUV	 					(23)	// �x�t�u�t�H�[�}�b�g
#define DX_GRAPHICSIMAGE_FORMAT_3D_ABGR_I16					(24)	// ARGB����16�r�b�g�^�J���[
#define DX_GRAPHICSIMAGE_FORMAT_3D_ABGR_F16					(25)	// ARGB���������_16�r�b�g�^�J���[
#define DX_GRAPHICSIMAGE_FORMAT_3D_ABGR_F32					(26)	// ARGB���������_32�r�b�g�^�J���[
#define DX_GRAPHICSIMAGE_FORMAT_3D_ONE_I8					(27)	// �P�`�����l������8�r�b�g�^�J���[
#define DX_GRAPHICSIMAGE_FORMAT_3D_ONE_I16					(28)	// �P�`�����l������16�r�b�g�^�J���[
#define DX_GRAPHICSIMAGE_FORMAT_3D_ONE_F16					(29)	// �P�`�����l����������16�r�b�g�^�J���[
#define DX_GRAPHICSIMAGE_FORMAT_3D_ONE_F32					(30)	// �P�`�����l����������32�r�b�g�^�J���[
#define DX_GRAPHICSIMAGE_FORMAT_3D_TWO_I8					(31)	// �Q�`�����l������8�r�b�g�^�J���[
#define DX_GRAPHICSIMAGE_FORMAT_3D_TWO_I16					(32)	// �Q�`�����l������16�r�b�g�^�J���[
#define DX_GRAPHICSIMAGE_FORMAT_3D_TWO_F16					(33)	// �Q�`�����l����������16�r�b�g�^�J���[
#define DX_GRAPHICSIMAGE_FORMAT_3D_TWO_F32					(34)	// �Q�`�����l����������32�r�b�g�^�J���[
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_RGB16			(35)	// �`��\�P�U�r�b�g�J���[
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_RGB32			(36)	// �`��\�R�Q�r�b�g�J���[
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_ALPHA_RGB32	(37)	// �`��\���t���R�Q�r�b�g�J���[
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_ABGR_I16		(38)	// �`��\ARGB����16�r�b�g�^�J���[
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_ABGR_F16		(39)	// �`��\ARGB���������_16�r�b�g�^�J���[
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_ABGR_F32		(40)	// �`��\ARGB���������_32�r�b�g�^�J���[
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_ONE_I8			(41)	// �`��\�P�`�����l������8�r�b�g�^�J���[
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_ONE_I16		(42)	// �`��\�P�`�����l������16�r�b�g�^�J���[
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_ONE_F16		(43)	// �`��\�P�`�����l����������16�r�b�g�^�J���[
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_ONE_F32		(44)	// �`��\�P�`�����l����������32�r�b�g�^�J���[
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_TWO_I8			(45)	// �`��\�Q�`�����l������8�r�b�g�^�J���[
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_TWO_I16		(46)	// �`��\�Q�`�����l������16�r�b�g�^�J���[
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_TWO_F16		(47)	// �`��\�Q�`�����l����������16�r�b�g�^�J���[
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_TWO_F32		(48)	// �`��\�Q�`�����l����������32�r�b�g�^�J���[
#define DX_GRAPHICSIMAGE_FORMAT_3D_NUM						(49)
#define DX_GRAPHICSIMAGE_FORMAT_2D							(50)	// �W��( DirectDrawSurface �̏ꍇ�͂���̂� )
#define DX_GRAPHICSIMAGE_FORMAT_R5G6B5						(51)	// R5G6B5( MEMIMG �p )
#define DX_GRAPHICSIMAGE_FORMAT_X8A8R5G6B5					(52)	// X8A8R5G6B5( MEMIMG �p )
#define DX_GRAPHICSIMAGE_FORMAT_X8R8G8B8					(53)	// X8R8G8B8( MEMIMG �p )
#define DX_GRAPHICSIMAGE_FORMAT_A8R8G8B8					(54)	// A8R8G8B8( MEMIMG �p )

#define DX_GRAPHICSIMAGE_FORMAT_NUM							(55)	// �O���t�B�b�N�t�H�[�}�b�g�̎�ނ̐�

// ��{�C���[�W�̃s�N�Z���t�H�[�}�b�g
#define DX_BASEIMAGE_FORMAT_NORMAL					(0)				// ���ʂ̉摜
#define DX_BASEIMAGE_FORMAT_DXT1					(1)				// �c�w�s�P
#define DX_BASEIMAGE_FORMAT_DXT2					(2)				// �c�w�s�Q
#define DX_BASEIMAGE_FORMAT_DXT3					(3)				// �c�w�s�R
#define DX_BASEIMAGE_FORMAT_DXT4					(4)				// �c�w�s�S
#define DX_BASEIMAGE_FORMAT_DXT5					(5)				// �c�w�s�T
#define DX_BASEIMAGE_FORMAT_BC7_UNORM				(6)				// �a�b�V UNORM
#define DX_BASEIMAGE_FORMAT_BC7_UNORM_SRGB			(7)				// �a�b�V UNORM SRGB
#define DX_BASEIMAGE_FORMAT_PLATFORM0				(8)				// �v���b�g�t�H�[���ˑ��t�H�[�}�b�g�O
#define DX_BASEIMAGE_FORMAT_PLATFORM1				(9)				// �v���b�g�t�H�[���ˑ��t�H�[�}�b�g�P
#define DX_BASEIMAGE_FORMAT_PLATFORM2				(10)			// �v���b�g�t�H�[���ˑ��t�H�[�}�b�g�Q
#define DX_BASEIMAGE_FORMAT_PLATFORM3				(11)			// �v���b�g�t�H�[���ˑ��t�H�[�}�b�g�R
#define DX_BASEIMAGE_FORMAT_YUV						(12)			// �x�t�u

// ���[�r�[�̃T�[�t�F�X���[�h
#define DX_MOVIESURFACE_NORMAL						(0)
#define DX_MOVIESURFACE_OVERLAY						(1)
#define DX_MOVIESURFACE_FULLCOLOR					(2)

// SetUserScreenImage �œn����ʂ̃s�N�Z���t�H�[�}�b�g
#define DX_USER_SCREEN_PIXEL_FORMAT_R5G6B5			(0)				// R5G6B5( �c�w���C�u�����̕`��֐���g�p�ł��܂�( �\�t�g�E�F�A�����_�����O���[�h���� ) )
#define DX_USER_SCREEN_PIXEL_FORMAT_R5G5B5X1		(1)				// R5G5B5X1( �c�w���C�u�����̕`��֐��͎g�p�ł��Ȃ��Ȃ�܂� )
#define DX_USER_SCREEN_PIXEL_FORMAT_X1R5G5B5		(2)				// X1R5G5B5( �c�w���C�u�����̕`��֐��͎g�p�ł��Ȃ��Ȃ�܂� )
#define DX_USER_SCREEN_PIXEL_FORMAT_X8B8G8R8		(3)				// X8B8G8R8( �c�w���C�u�����̕`��֐��͎g�p�ł��Ȃ��Ȃ�܂� )
#define DX_USER_SCREEN_PIXEL_FORMAT_X8R8G8B8		(4)				// X8R8G8B8( �c�w���C�u�����̕`��֐���g�p�ł��܂�( �\�t�g�E�F�A�����_�����O���[�h���� ) )
#define DX_USER_SCREEN_PIXEL_FORMAT_NUM				(5)

// �E�C���h�E�̉��s���ʒu�ݒ�^�C�v
#define DX_WIN_ZTYPE_NORMAL							(0)				// �ʏ�ݒ�
#define DX_WIN_ZTYPE_BOTTOM							(1)				// �S�ẴE�C���h�E�̈�ԉ��ɔz�u����
#define DX_WIN_ZTYPE_TOP							(2)				// �S�ẴE�C���h�E�̈�Ԏ�O�ɔz�u����
#define DX_WIN_ZTYPE_TOPMOST						(3)				// �S�ẴE�C���h�E�̈�Ԏ�O�ɔz�u����( �E�C���h�E���A�N�e�B�u�ł͂Ȃ��Ƃ���őO�ʂɕ\������� )

// �c�[���o�[�̃{�^���̏��
#define TOOLBUTTON_STATE_ENABLE						(0)				// ���͉\�ȏ��
#define TOOLBUTTON_STATE_PRESSED					(1)				// ������Ă�����
#define TOOLBUTTON_STATE_DISABLE					(2)				// ���͕s�\�ȏ��
#define TOOLBUTTON_STATE_PRESSED_DISABLE			(3)				// ������Ă����ԂŁA���͕s�\�ȏ��
#define TOOLBUTTON_STATE_NUM						(4)				// �c�[���o�[�̃{�^���̏�Ԃ̐�

// �c�[���o�[�̃{�^���̃^�C�v
#define TOOLBUTTON_TYPE_NORMAL						(0)				// ���ʂ̃{�^��
#define TOOLBUTTON_TYPE_CHECK						(1)				// �������Ƃɂn�m�^�n�e�e���؂�ւ��{�^��
#define TOOLBUTTON_TYPE_GROUP						(2)				// �ʂ� TOOLBUTTON_TYPE_GROUP �^�C�v�̃{�^�����������Ƃn�e�e�ɂȂ�^�C�v�̃{�^��(�O���[�v�̋�؂�͌��Ԃ�)
#define TOOLBUTTON_TYPE_SEP							(3)				// ����(�{�^���ł͂���܂���)
#define TOOLBUTTON_TYPE_NUM							(4)				// �c�[���o�[�̃{�^���̃^�C�v�̐�

// �e���j���[�̂h�c
#define MENUITEM_IDTOP								(0xabababab)

// ���j���[�ɒǉ�����ۂ̃^�C�v
#define MENUITEM_ADD_CHILD							(0)				// �w��̍��ڂ̎q�Ƃ��Ēǉ�����
#define MENUITEM_ADD_INSERT							(1)				// �w��̍��ڂƎw��̍��ڂ����̍��ڂ̊Ԃɒǉ�����

// ���j���[�̉��ɕt���}�[�N�^�C�v
#define MENUITEM_MARK_NONE							(0)				// ����t������
#define MENUITEM_MARK_CHECK							(1)				// �`�F�b�N�}�[�N
#define MENUITEM_MARK_RADIO							(2)				// ���W�I�{�^��

// �����ϊ��^�C�v��`
#define DX_NUMMODE_10								(0)				// �P�O�i��
#define DX_NUMMODE_16								(1)				// �P�U�i��
#define DX_STRMODE_NOT0								(2)				// �󂫂�O�Ŗ��߂Ȃ�
#define DX_STRMODE_USE0								(3)				// �󂫂�O�Ŗ��߂�

// CheckHitKeyAll �Œ��ׂ���̓^�C�v
#define DX_CHECKINPUT_KEY							(0x0001)		// �L�[���͂𒲂ׂ�
#define DX_CHECKINPUT_PAD							(0x0002)		// �p�b�h���͂𒲂ׂ�
#define DX_CHECKINPUT_MOUSE							(0x0004)		// �}�E�X�{�^�����͂𒲂ׂ�
#define DX_CHECKINPUT_ALL							(DX_CHECKINPUT_KEY | DX_CHECKINPUT_PAD | DX_CHECKINPUT_MOUSE)	// ���ׂĂ̓��͂𒲂ׂ�

// �p�b�h���͎擾�p�����[�^
#define DX_INPUT_KEY_PAD1							(0x1001)		// �L�[���͂ƃp�b�h�P����
#define DX_INPUT_PAD1								(0x0001)		// �p�b�h�P����
#define DX_INPUT_PAD2								(0x0002)		// �p�b�h�Q����
#define DX_INPUT_PAD3								(0x0003)		// �p�b�h�R����
#define DX_INPUT_PAD4								(0x0004)		// �p�b�h�S����
#define DX_INPUT_PAD5								(0x0005)		// �p�b�h�T����
#define DX_INPUT_PAD6								(0x0006)		// �p�b�h�U����
#define DX_INPUT_PAD7								(0x0007)		// �p�b�h�V����
#define DX_INPUT_PAD8								(0x0008)		// �p�b�h�W����
#define DX_INPUT_PAD9								(0x0009)		// �p�b�h�X����
#define DX_INPUT_PAD10								(0x000a)		// �p�b�h�P�O����
#define DX_INPUT_PAD11								(0x000b)		// �p�b�h�P�P����
#define DX_INPUT_PAD12								(0x000c)		// �p�b�h�P�Q����
#define DX_INPUT_PAD13								(0x000d)		// �p�b�h�P�R����
#define DX_INPUT_PAD14								(0x000e)		// �p�b�h�P�S����
#define DX_INPUT_PAD15								(0x000f)		// �p�b�h�P�T����
#define DX_INPUT_PAD16								(0x0010)		// �p�b�h�P�U����
#define DX_INPUT_KEY								(0x1000)		// �L�[����

// �Q�[���R���g���[���[�^�C�v
#define DX_PADTYPE_OTHER							(0)
#define DX_PADTYPE_XBOX_360							(1)
#define DX_PADTYPE_XBOX_ONE							(2)
#define DX_PADTYPE_DUAL_SHOCK_3						(3)
#define DX_PADTYPE_DUAL_SHOCK_4						(4)
#define DX_PADTYPE_DUAL_SENSE						(5)
#define DX_PADTYPE_SWITCH_JOY_CON_L					(6)
#define DX_PADTYPE_SWITCH_JOY_CON_R					(7)
#define DX_PADTYPE_SWITCH_PRO_CTRL					(8)
#define DX_PADTYPE_SWITCH_HORI_PAD					(9)
#define DX_PADTYPE_NUM								(10)

// �^�b�`�̓����ڐG���o�Ή��ő吔
#define TOUCHINPUTPOINT_MAX							(16)

// �p�b�h���͒�`
#define PAD_INPUT_DOWN								(0x00000001)	// ���`�F�b�N�}�X�N
#define PAD_INPUT_LEFT								(0x00000002)	// ���`�F�b�N�}�X�N
#define PAD_INPUT_RIGHT								(0x00000004)	// ���`�F�b�N�}�X�N
#define PAD_INPUT_UP								(0x00000008)	// ���`�F�b�N�}�X�N
#define PAD_INPUT_A									(0x00000010)	// �`�{�^���`�F�b�N�}�X�N
#define PAD_INPUT_B									(0x00000020)	// �a�{�^���`�F�b�N�}�X�N
#define PAD_INPUT_C									(0x00000040)	// �b�{�^���`�F�b�N�}�X�N
#define PAD_INPUT_X									(0x00000080)	// �w�{�^���`�F�b�N�}�X�N
#define PAD_INPUT_Y									(0x00000100)	// �x�{�^���`�F�b�N�}�X�N
#define PAD_INPUT_Z									(0x00000200)	// �y�{�^���`�F�b�N�}�X�N
#define PAD_INPUT_L									(0x00000400)	// �k�{�^���`�F�b�N�}�X�N
#define PAD_INPUT_R									(0x00000800)	// �q�{�^���`�F�b�N�}�X�N
#define PAD_INPUT_START								(0x00001000)	// �r�s�`�q�s�{�^���`�F�b�N�}�X�N
#define PAD_INPUT_M									(0x00002000)	// �l�{�^���`�F�b�N�}�X�N
#define PAD_INPUT_D									(0x00004000)
#define PAD_INPUT_F									(0x00008000)
#define PAD_INPUT_G									(0x00010000)
#define PAD_INPUT_H									(0x00020000)
#define PAD_INPUT_I									(0x00040000)
#define PAD_INPUT_J									(0x00080000)
#define PAD_INPUT_K									(0x00100000)
#define PAD_INPUT_LL								(0x00200000)
#define PAD_INPUT_N									(0x00400000)
#define PAD_INPUT_O									(0x00800000)
#define PAD_INPUT_P									(0x01000000)
#define PAD_INPUT_RR								(0x02000000)
#define PAD_INPUT_S									(0x04000000)
#define PAD_INPUT_T									(0x08000000)
#define PAD_INPUT_U									(0x10000000)
#define PAD_INPUT_V									(0x20000000)
#define PAD_INPUT_W									(0x40000000)
#define PAD_INPUT_XX								(0x80000000)

#define PAD_INPUT_1									(0x00000010)
#define PAD_INPUT_2									(0x00000020)
#define PAD_INPUT_3									(0x00000040)
#define PAD_INPUT_4									(0x00000080)
#define PAD_INPUT_5									(0x00000100)
#define PAD_INPUT_6									(0x00000200)
#define PAD_INPUT_7									(0x00000400)
#define PAD_INPUT_8									(0x00000800)
#define PAD_INPUT_9									(0x00001000)
#define PAD_INPUT_10								(0x00002000)
#define PAD_INPUT_11								(0x00004000)
#define PAD_INPUT_12								(0x00008000)
#define PAD_INPUT_13								(0x00010000)
#define PAD_INPUT_14								(0x00020000)
#define PAD_INPUT_15								(0x00040000)
#define PAD_INPUT_16								(0x00080000)
#define PAD_INPUT_17								(0x00100000)
#define PAD_INPUT_18								(0x00200000)
#define PAD_INPUT_19								(0x00400000)
#define PAD_INPUT_20								(0x00800000)
#define PAD_INPUT_21								(0x01000000)
#define PAD_INPUT_22								(0x02000000)
#define PAD_INPUT_23								(0x04000000)
#define PAD_INPUT_24								(0x08000000)
#define PAD_INPUT_25								(0x10000000)
#define PAD_INPUT_26								(0x20000000)
#define PAD_INPUT_27								(0x40000000)
#define PAD_INPUT_28								(0x80000000)

// XInput�{�^�����͒�`
#define XINPUT_BUTTON_DPAD_UP						(0)				// �f�W�^�������{�^����
#define XINPUT_BUTTON_DPAD_DOWN						(1)				// �f�W�^�������{�^����
#define XINPUT_BUTTON_DPAD_LEFT						(2)				// �f�W�^�������{�^����
#define XINPUT_BUTTON_DPAD_RIGHT					(3)				// �f�W�^�������{�^���E
#define XINPUT_BUTTON_START							(4)				// START�{�^��
#define XINPUT_BUTTON_BACK							(5)				// BACK�{�^��
#define XINPUT_BUTTON_LEFT_THUMB					(6)				// ���X�e�B�b�N��������
#define XINPUT_BUTTON_RIGHT_THUMB					(7)				// �E�X�e�B�b�N��������
#define XINPUT_BUTTON_LEFT_SHOULDER					(8)				// LB�{�^��
#define XINPUT_BUTTON_RIGHT_SHOULDER				(9)				// RB�{�^��
#define XINPUT_BUTTON_A								(12)			// A�{�^��
#define XINPUT_BUTTON_B								(13)			// B�{�^��
#define XINPUT_BUTTON_X								(14)			// X�{�^��
#define XINPUT_BUTTON_Y								(15)			// Y�{�^��

// �}�E�X���͒�`
#define MOUSE_INPUT_LEFT							(0x0001)		// �}�E�X���{�^��
#define MOUSE_INPUT_RIGHT							(0x0002)		// �}�E�X�E�{�^��
#define MOUSE_INPUT_MIDDLE							(0x0004)		// �}�E�X�����{�^��
#define MOUSE_INPUT_1								(0x0001)		// �}�E�X�P�{�^��
#define MOUSE_INPUT_2								(0x0002)		// �}�E�X�Q�{�^��
#define MOUSE_INPUT_3								(0x0004)		// �}�E�X�R�{�^��
#define MOUSE_INPUT_4								(0x0008)		// �}�E�X�S�{�^��
#define MOUSE_INPUT_5								(0x0010)		// �}�E�X�T�{�^��
#define MOUSE_INPUT_6								(0x0020)		// �}�E�X�U�{�^��
#define MOUSE_INPUT_7								(0x0040)		// �}�E�X�V�{�^��
#define MOUSE_INPUT_8								(0x0080)		// �}�E�X�W�{�^��

// �}�E�X�̃��O���^�C�v
#define MOUSE_INPUT_LOG_DOWN						(0)				// �{�^���������
#define MOUSE_INPUT_LOG_UP							(1)				// �{�^���𗣂���

// �L�[��`
#define KEY_INPUT_BACK								(0x0E)			// BackSpace�L�[	D_DIK_BACK
#define KEY_INPUT_TAB								(0x0F)			// Tab�L�[			D_DIK_TAB
#define KEY_INPUT_RETURN							(0x1C)			// Enter�L�[		D_DIK_RETURN

#define KEY_INPUT_LSHIFT							(0x2A)			// ��Shift�L�[		D_DIK_LSHIFT
#define KEY_INPUT_RSHIFT							(0x36)			// �EShift�L�[		D_DIK_RSHIFT
#define KEY_INPUT_LCONTROL							(0x1D)			// ��Ctrl�L�[		D_DIK_LCONTROL
#define KEY_INPUT_RCONTROL							(0x9D)			// �ECtrl�L�[		D_DIK_RCONTROL
#define KEY_INPUT_ESCAPE							(0x01)			// Esc�L�[			D_DIK_ESCAPE
#define KEY_INPUT_SPACE								(0x39)			// �X�y�[�X�L�[		D_DIK_SPACE
#define KEY_INPUT_PGUP								(0xC9)			// PageUp�L�[		D_DIK_PGUP
#define KEY_INPUT_PGDN								(0xD1)			// PageDown�L�[		D_DIK_PGDN
#define KEY_INPUT_END								(0xCF)			// End�L�[			D_DIK_END
#define KEY_INPUT_HOME								(0xC7)			// Home�L�[			D_DIK_HOME
#define KEY_INPUT_LEFT								(0xCB)			// ���L�[			D_DIK_LEFT
#define KEY_INPUT_UP								(0xC8)			// ��L�[			D_DIK_UP
#define KEY_INPUT_RIGHT								(0xCD)			// �E�L�[			D_DIK_RIGHT
#define KEY_INPUT_DOWN								(0xD0)			// ���L�[			D_DIK_DOWN
#define KEY_INPUT_INSERT							(0xD2)			// Insert�L�[		D_DIK_INSERT
#define KEY_INPUT_DELETE							(0xD3)			// Delete�L�[		D_DIK_DELETE

#define KEY_INPUT_MINUS								(0x0C)			// �|�L�[			D_DIK_MINUS
#define KEY_INPUT_YEN								(0x7D)			// ���L�[			D_DIK_YEN
#define KEY_INPUT_PREVTRACK							(0x90)			// �O�L�[			D_DIK_PREVTRACK
#define KEY_INPUT_PERIOD							(0x34)			// �D�L�[			D_DIK_PERIOD
#define KEY_INPUT_SLASH								(0x35)			// �^�L�[			D_DIK_SLASH
#define KEY_INPUT_LALT								(0x38)			// ��Alt�L�[		D_DIK_LALT
#define KEY_INPUT_RALT								(0xB8)			// �EAlt�L�[		D_DIK_RALT
#define KEY_INPUT_SCROLL							(0x46)			// ScrollLock�L�[	D_DIK_SCROLL
#define KEY_INPUT_SEMICOLON							(0x27)			// �G�L�[			D_DIK_SEMICOLON
#define KEY_INPUT_COLON								(0x92)			// �F�L�[			D_DIK_COLON
#define KEY_INPUT_LBRACKET							(0x1A)			// �m�L�[			D_DIK_LBRACKET
#define KEY_INPUT_RBRACKET							(0x1B)			// �n�L�[			D_DIK_RBRACKET
#define KEY_INPUT_AT								(0x91)			// ���L�[			D_DIK_AT
#define KEY_INPUT_BACKSLASH							(0x2B)			// �_�L�[			D_DIK_BACKSLASH
#define KEY_INPUT_COMMA								(0x33)			// �C�L�[			D_DIK_COMMA
#define KEY_INPUT_KANJI								(0x94)			// �����L�[			D_DIK_KANJI
#define KEY_INPUT_CONVERT							(0x79)			// �ϊ��L�[			D_DIK_CONVERT
#define KEY_INPUT_NOCONVERT							(0x7B)			// ���ϊ��L�[		D_DIK_NOCONVERT
#define KEY_INPUT_KANA								(0x70)			// �J�i�L�[			D_DIK_KANA
#define KEY_INPUT_APPS								(0xDD)			// �A�v���P�[�V�������j���[�L�[		D_DIK_APPS
#define KEY_INPUT_CAPSLOCK							(0x3A)			// CaspLock�L�[		D_DIK_CAPSLOCK
#define KEY_INPUT_SYSRQ								(0xB7)			// PrintScreen�L�[	D_DIK_SYSRQ
#define KEY_INPUT_PAUSE								(0xC5)			// PauseBreak�L�[	D_DIK_PAUSE
#define KEY_INPUT_LWIN								(0xDB)			// ��Win�L�[		D_DIK_LWIN
#define KEY_INPUT_RWIN								(0xDC)			// �EWin�L�[		D_DIK_RWIN

#define KEY_INPUT_NUMLOCK							(0x45)			// �e���L�[NumLock�L�[		D_DIK_NUMLOCK
#define KEY_INPUT_NUMPAD0							(0x52)			// �e���L�[�O				D_DIK_NUMPAD0
#define KEY_INPUT_NUMPAD1							(0x4F)			// �e���L�[�P				D_DIK_NUMPAD1
#define KEY_INPUT_NUMPAD2							(0x50)			// �e���L�[�Q				D_DIK_NUMPAD2
#define KEY_INPUT_NUMPAD3							(0x51)			// �e���L�[�R				D_DIK_NUMPAD3
#define KEY_INPUT_NUMPAD4							(0x4B)			// �e���L�[�S				D_DIK_NUMPAD4
#define KEY_INPUT_NUMPAD5							(0x4C)			// �e���L�[�T				D_DIK_NUMPAD5
#define KEY_INPUT_NUMPAD6							(0x4D)			// �e���L�[�U				D_DIK_NUMPAD6
#define KEY_INPUT_NUMPAD7							(0x47)			// �e���L�[�V				D_DIK_NUMPAD7
#define KEY_INPUT_NUMPAD8							(0x48)			// �e���L�[�W				D_DIK_NUMPAD8
#define KEY_INPUT_NUMPAD9							(0x49)			// �e���L�[�X				D_DIK_NUMPAD9
#define KEY_INPUT_MULTIPLY							(0x37)			// �e���L�[���L�[			D_DIK_MULTIPLY
#define KEY_INPUT_ADD								(0x4E)			// �e���L�[�{�L�[			D_DIK_ADD
#define KEY_INPUT_SUBTRACT							(0x4A)			// �e���L�[�|�L�[			D_DIK_SUBTRACT
#define KEY_INPUT_DECIMAL							(0x53)			// �e���L�[�D�L�[			D_DIK_DECIMAL
#define KEY_INPUT_DIVIDE							(0xB5)			// �e���L�[�^�L�[			D_DIK_DIVIDE
#define KEY_INPUT_NUMPADENTER						(0x9C)			// �e���L�[�̃G���^�[�L�[	D_DIK_NUMPADENTER

#define KEY_INPUT_F1								(0x3B)			// �e�P�L�[			D_DIK_F1
#define KEY_INPUT_F2								(0x3C)			// �e�Q�L�[			D_DIK_F2
#define KEY_INPUT_F3								(0x3D)			// �e�R�L�[			D_DIK_F3
#define KEY_INPUT_F4								(0x3E)			// �e�S�L�[			D_DIK_F4
#define KEY_INPUT_F5								(0x3F)			// �e�T�L�[			D_DIK_F5
#define KEY_INPUT_F6								(0x40)			// �e�U�L�[			D_DIK_F6
#define KEY_INPUT_F7								(0x41)			// �e�V�L�[			D_DIK_F7
#define KEY_INPUT_F8								(0x42)			// �e�W�L�[			D_DIK_F8
#define KEY_INPUT_F9								(0x43)			// �e�X�L�[			D_DIK_F9
#define KEY_INPUT_F10								(0x44)			// �e�P�O�L�[		D_DIK_F10
#define KEY_INPUT_F11								(0x57)			// �e�P�P�L�[		D_DIK_F11
#define KEY_INPUT_F12								(0x58)			// �e�P�Q�L�[		D_DIK_F12

#define KEY_INPUT_A									(0x1E)			// �`�L�[			D_DIK_A
#define KEY_INPUT_B									(0x30)			// �a�L�[			D_DIK_B
#define KEY_INPUT_C									(0x2E)			// �b�L�[			D_DIK_C
#define KEY_INPUT_D									(0x20)			// �c�L�[			D_DIK_D
#define KEY_INPUT_E									(0x12)			// �d�L�[			D_DIK_E
#define KEY_INPUT_F									(0x21)			// �e�L�[			D_DIK_F
#define KEY_INPUT_G									(0x22)			// �f�L�[			D_DIK_G
#define KEY_INPUT_H									(0x23)			// �g�L�[			D_DIK_H
#define KEY_INPUT_I									(0x17)			// �h�L�[			D_DIK_I
#define KEY_INPUT_J									(0x24)			// �i�L�[			D_DIK_J
#define KEY_INPUT_K									(0x25)			// �j�L�[			D_DIK_K
#define KEY_INPUT_L									(0x26)			// �k�L�[			D_DIK_L
#define KEY_INPUT_M									(0x32)			// �l�L�[			D_DIK_M
#define KEY_INPUT_N									(0x31)			// �m�L�[			D_DIK_N
#define KEY_INPUT_O									(0x18)			// �n�L�[			D_DIK_O
#define KEY_INPUT_P									(0x19)			// �o�L�[			D_DIK_P
#define KEY_INPUT_Q									(0x10)			// �p�L�[			D_DIK_Q
#define KEY_INPUT_R									(0x13)			// �q�L�[			D_DIK_R
#define KEY_INPUT_S									(0x1F)			// �r�L�[			D_DIK_S
#define KEY_INPUT_T									(0x14)			// �s�L�[			D_DIK_T
#define KEY_INPUT_U									(0x16)			// �t�L�[			D_DIK_U
#define KEY_INPUT_V									(0x2F)			// �u�L�[			D_DIK_V
#define KEY_INPUT_W									(0x11)			// �v�L�[			D_DIK_W
#define KEY_INPUT_X									(0x2D)			// �w�L�[			D_DIK_X
#define KEY_INPUT_Y									(0x15)			// �x�L�[			D_DIK_Y
#define KEY_INPUT_Z									(0x2C)			// �y�L�[			D_DIK_Z

#define KEY_INPUT_0 								(0x0B)			// �O�L�[			D_DIK_0
#define KEY_INPUT_1									(0x02)			// �P�L�[			D_DIK_1
#define KEY_INPUT_2									(0x03)			// �Q�L�[			D_DIK_2
#define KEY_INPUT_3									(0x04)			// �R�L�[			D_DIK_3
#define KEY_INPUT_4									(0x05)			// �S�L�[			D_DIK_4
#define KEY_INPUT_5									(0x06)			// �T�L�[			D_DIK_5
#define KEY_INPUT_6									(0x07)			// �U�L�[			D_DIK_6
#define KEY_INPUT_7									(0x08)			// �V�L�[			D_DIK_7
#define KEY_INPUT_8									(0x09)			// �W�L�[			D_DIK_8
#define KEY_INPUT_9									(0x0A)			// �X�L�[			D_DIK_9

// �A�X�L�[�R���g���[���L�[�R�[�h
#define CTRL_CODE_BS								(0x08)			// �o�b�N�X�y�[�X
#define CTRL_CODE_TAB								(0x09)			// �^�u
#define CTRL_CODE_CR								(0x0d)			// ���s
#define CTRL_CODE_DEL								(0x10)			// �c�d�k�L�[

#define CTRL_CODE_COPY								(0x03)			// �R�s�[
#define CTRL_CODE_PASTE								(0x16)			// �y�[�X�g
#define CTRL_CODE_CUT								(0x18)			// �J�b�g
#define CTRL_CODE_ALL								(0x01)			// �S�đI��

#define CTRL_CODE_LEFT								(0x1d)			// ���L�[
#define CTRL_CODE_RIGHT								(0x1c)			// ���L�[
#define CTRL_CODE_UP								(0x1e)			// ���L�[
#define CTRL_CODE_DOWN								(0x1f)			// ���L�[

#define CTRL_CODE_HOME								(0x1a)			// �g�n�l�d�{�^��
#define CTRL_CODE_END								(0x19)			// �d�m�c�{�^��
#define CTRL_CODE_PAGE_UP							(0x17)			// �o�`�f�d �t�o
#define CTRL_CODE_PAGE_DOWN							(0x15)			// �o�`�f�d �c�n�v�m

#define CTRL_CODE_ESC								(0x1b)			// �d�r�b�L�[
#define CTRL_CODE_CMP								(0x20)			// ����R�[�h�~���l

// SetKeyInputStringColor2 �ɓn���F�ύX�Ώۂ�w�肷�邽�߂̎��ʎq
#define DX_KEYINPSTRCOLOR_NORMAL_STR					(0)			// ���͕�����̐F
#define DX_KEYINPSTRCOLOR_NORMAL_STR_EDGE				(1)			// ���͕�����̉��̐F
#define DX_KEYINPSTRCOLOR_NORMAL_CURSOR					(2)			// �h�l�d��g�p���̃J�[�\���̐F
#define DX_KEYINPSTRCOLOR_SELECT_STR					(3)			// ���͕�����̑I�𕔕�( SHIFT�L�[������Ȃ��獶�E�L�[�őI�� )�̐F
#define DX_KEYINPSTRCOLOR_SELECT_STR_EDGE				(4)			// ���͕�����̑I�𕔕�( SHIFT�L�[������Ȃ��獶�E�L�[�őI�� )�̉��̐F
#define DX_KEYINPSTRCOLOR_SELECT_STR_BACK				(5)			// ���͕�����̑I�𕔕�( SHIFT�L�[������Ȃ��獶�E�L�[�őI�� )�̎���̐F
#define DX_KEYINPSTRCOLOR_IME_STR						(6)			// �h�l�d�g�p���̓��͕�����̐F
#define DX_KEYINPSTRCOLOR_IME_STR_EDGE					(7)			// �h�l�d�g�p���̓��͕�����̉��̐F
#define DX_KEYINPSTRCOLOR_IME_STR_BACK					(8)			// �h�l�d�g�p���̓��͕�����̎���̐F
#define DX_KEYINPSTRCOLOR_IME_CURSOR					(9)			// �h�l�d�g�p���̃J�[�\���̐F
#define DX_KEYINPSTRCOLOR_IME_LINE						(10)		// �h�l�d�g�p���̕ϊ�������̉����̐F
#define DX_KEYINPSTRCOLOR_IME_SELECT_STR				(11)		// �h�l�d�g�p���̑I��Ώۂ̕ϊ���╶����̐F
#define DX_KEYINPSTRCOLOR_IME_SELECT_STR_EDGE			(12)		// �h�l�d�g�p���̑I��Ώۂ̕ϊ���╶����̉��̐F
#define DX_KEYINPSTRCOLOR_IME_SELECT_STR_BACK			(13)		// �h�l�d�g�p���̑I��Ώۂ̕ϊ���╶����̎���̐F
#define DX_KEYINPSTRCOLOR_IME_CONV_WIN_STR				(14)		// �h�l�d�g�p���̕ϊ����E�C���h�E��̕�����̐F
#define DX_KEYINPSTRCOLOR_IME_CONV_WIN_STR_EDGE			(15)		// �h�l�d�g�p���̕ϊ����E�C���h�E��̕�����̉��̐F
#define DX_KEYINPSTRCOLOR_IME_CONV_WIN_SELECT_STR		(16)		// �h�l�d�g�p���̕ϊ����E�C���h�E��őI����Ă��镶����̐F
#define DX_KEYINPSTRCOLOR_IME_CONV_WIN_SELECT_STR_EDGE	(17)		// �h�l�d�g�p���̕ϊ����E�C���h�E��őI����Ă��镶����̉��̐F
#define DX_KEYINPSTRCOLOR_IME_CONV_WIN_SELECT_STR_BACK	(18)		// �h�l�d�g�p���̕ϊ����E�C���h�E��őI����Ă��镶����̎���̐F
#define DX_KEYINPSTRCOLOR_IME_CONV_WIN_EDGE				(19)		// �h�l�d�g�p���̕ϊ����E�C���h�E�̉��̐F
#define DX_KEYINPSTRCOLOR_IME_CONV_WIN_BACK				(20)		// �h�l�d�g�p���̕ϊ����E�C���h�E�̉��n�̐F
#define DX_KEYINPSTRCOLOR_IME_MODE_STR					(21)		// �h�l�d�g�p���̓��̓��[�h������̐F(�w�S�p�Ђ炪�ȁx��)
#define DX_KEYINPSTRCOLOR_IME_MODE_STR_EDGE				(22)		// �h�l�d�g�p���̓��̓��[�h������̉��̐F
#define DX_KEYINPSTRCOLOR_NUM							(23)

// ��������͏����̓��͕����������E�ɒB���Ă����ԂŁA������̖��[�����œ��͂��s��ꂽ�ꍇ�̏������[�h
#define DX_KEYINPSTR_ENDCHARAMODE_OVERWRITE				(0)			// �����������E�ɒB���Ă����Ԃŕ�����̖��[�ŕ��������͂��ꂽ�ꍇ�́A�Ō�̕�����㏑��( �f�t�H���g )
#define DX_KEYINPSTR_ENDCHARAMODE_NOTCHANGE				(1)			// �����������E�ɒB���Ă����Ԃŕ�����̖��[�ŕ��������͂��ꂽ�ꍇ�́A����ω����Ȃ�

// �^�b�`�p�l���f�[�^�̃c�[���^�C�v
#define DX_TOUCHINPUT_TOOL_TYPE_UNKNOWN					(0)			// �s��
#define DX_TOUCHINPUT_TOOL_TYPE_FINGER					(1)			// �w
#define DX_TOUCHINPUT_TOOL_TYPE_STYLUS					(2)			// �X�^�C���X�y��
#define DX_TOUCHINPUT_TOOL_TYPE_MOUSE					(3)			// �}�E�X
#define DX_TOUCHINPUT_TOOL_TYPE_ERASER					(4)			// �����S��

// �t���X�N���[���𑜓x���[�h��`
#define DX_FSRESOLUTIONMODE_BORDERLESS_WINDOW		(0)				// ���z�t���X�N���[�����[�h( ���ۂɂ̓t���X�N���[�����[�h�ɂ����A�{�[�_�[���X�E�B���h�E��f�X�N�g�b�v��ʂ����ς��Ɋg�債�ĉ��z�I�Ƀt���X�N���[�����[�h��������郂�[�h )
#define DX_FSRESOLUTIONMODE_DESKTOP					(1)				// ���j�^�[�̉�ʃ��[�h��f�X�N�g�b�v��ʂƓ����ɂ��Ăc�w���C�u������ʂ�g�債�ĕ\�����郂�[�h
#define DX_FSRESOLUTIONMODE_NATIVE					(2)				// ���j�^�[�̉𑜓x��c�w���C�u������ʂ̉𑜓x�ɍ��킹�郂�[�h
#define DX_FSRESOLUTIONMODE_MAXIMUM					(3)				// ���j�^�[�̉𑜓x��ő�ɂ��Ăc�w���C�u������ʂ�g�債�ĕ\�����郂�[�h

// �t���X�N���[���g�僂�[�h��`
#define DX_FSSCALINGMODE_BILINEAR					(0)				// �o�C���j�A���[�h( �s�N�Z��������Ńs�N�Z���ƃs�N�Z���̋�؂肪�͂����肵�Ȃ� )
#define DX_FSSCALINGMODE_NEAREST					(1)				// �ŋߓ_���[�h( �s�N�Z�����l�p����������\������� )

// SetGraphMode �߂�l��`
#define DX_CHANGESCREEN_OK							(0)				// ��ʕύX�͐�������
#define DX_CHANGESCREEN_RETURN						(-1)			// ��ʂ̕ύX�͎��s���A���̉�ʃ��[�h�ɖ߂��ꂽ
#define DX_CHANGESCREEN_DEFAULT						(-2)			// ��ʂ̕ύX�͎��s���f�t�H���g�̉�ʃ��[�h�ɕύX���ꂽ
#define DX_CHANGESCREEN_REFRESHNORMAL				(-3)			// ��ʂ̕ύX�͐����������A���t���b�V�����[�g�̕ύX�͎��s����

// �X�g���[���f�[�^�ǂݍ��ݏ����R�[�h�ȗ����֘A
#define STTELL( st )								((st)->ReadShred.Tell( (st)->DataPoint ))
#define STSEEK( st, pos, type )						((st)->ReadShred.Seek( (st)->DataPoint, (pos), (type) ))
#define STREAD( buf, length, num, st )				((st)->ReadShred.Read( (buf), (length), (num), (st)->DataPoint ))
#define STWRITE( buf, length, num, st )				((st)->ReadShred.Write( (buf), (length), (num), (st)->DataPoint ))
#define STEOF( st )									((st)->ReadShred.Eof( (st)->DataPoint ))
#define STCLOSE( st )								((st)->ReadShred.Close( (st)->DataPoint ))

// �X�g���[���f�[�^����̃V�[�N�^�C�v��`
#define STREAM_SEEKTYPE_SET							(SEEK_SET)
#define STREAM_SEEKTYPE_END							(SEEK_END)
#define STREAM_SEEKTYPE_CUR							(SEEK_CUR)

// �O���t�B�b�N���[�h���̃C���[�W�^�C�v
#define LOADIMAGE_TYPE_FILE							(0)				// �C���[�W�̓t�@�C���ł���
#define LOADIMAGE_TYPE_MEM							(1)				// �C���[�W�̓������ł���
#define LOADIMAGE_TYPE_NONE							(-1)			// �C���[�W�͖���



#ifndef DX_NON_NETWORK

// HTTP �G���[
#define HTTP_ERR_SERVER								(0)				// �T�[�o�[�G���[
#define HTTP_ERR_NOTFOUND							(1)				// �t�@�C����������Ȃ�����
#define HTTP_ERR_MEMORY								(2)				// �������m�ۂ̎��s
#define HTTP_ERR_LOST								(3)				// �r���Őؒf���ꂽ
#define HTTP_ERR_NONE								(-1)			// �G���[�͕񍐂���Ă��Ȃ�

// HTTP �����̌���
#define HTTP_RES_COMPLETE							(0)				// ��������
#define HTTP_RES_STOP								(1)				// �������~
#define HTTP_RES_ERROR								(2)				// �G���[�I��
#define HTTP_RES_NOW								(-1)			// ���ݐi�s��

#endif // DX_NON_NETWORK

#define DX_DEFINE_END

// �f�[�^�^��`-------------------------------------------------------------------

#if defined( __cplusplus ) && defined( DX_COMPILE_TYPE_C_LANGUAGE )
extern "C" {
#endif

// WAVEFORMATEX �̒�`
#ifndef _WAVEFORMATEX_
#define _WAVEFORMATEX_

typedef struct tWAVEFORMATEX
{
	WORD					wFormatTag ;					// �t�H�[�}�b�g( WAVE_FORMAT_PCM( �l�� 1 ) �� )
	WORD					nChannels ;						// �`�����l����
	DWORD					nSamplesPerSec ;				// �P�b�ӂ�̃T���v����
	DWORD					nAvgBytesPerSec ;				// �P�b�ӂ�̃o�C�g��( PCM�̏ꍇ nSamplesPerSec * nBlockAlign )
	WORD					nBlockAlign ;					// �S�`�����l���̂P�T���v������킹���o�C�g��( wBitsPerSample / 8 * nChannels )
	WORD					wBitsPerSample ;				// �P�T���v���ӂ�̃r�b�g��
	WORD					cbSize ;						// �g�����̃o�C�g��( �g����񂪖����ꍇ�� 0 )
} WAVEFORMATEX, *PWAVEFORMATEX, NEAR *NPWAVEFORMATEX, FAR *LPWAVEFORMATEX ;

#endif // _WAVEFORMATEX_

// WAVEFORMAT �̒�`
#ifndef WAVE_FORMAT_PCM

typedef struct waveformat_tag
{
	WORD					wFormatTag ;					// �t�H�[�}�b�g( WAVE_FORMAT_PCM( �l�� 1 ) �� )
	WORD					nChannels ;						// �`�����l����
	DWORD					nSamplesPerSec ;				// �P�b�ӂ�̃T���v����
	DWORD					nAvgBytesPerSec ;				// �P�b�ӂ�̃o�C�g��( PCM�̏ꍇ nSamplesPerSec * nBlockAlign )
	WORD					nBlockAlign ;					// �S�`�����l���̂P�T���v������킹���o�C�g��( wBitsPerSample / 8 * nChannels )
} WAVEFORMAT, *PWAVEFORMAT, NEAR *NPWAVEFORMAT, FAR *LPWAVEFORMAT ;

#define WAVE_FORMAT_PCM		1

#endif // WAVE_FORMAT_PCM

#ifndef DX_NON_NAMESPACE

namespace DxLib
{

#endif // DX_NON_NAMESPACE

#define DX_STRUCT_START

// �h�l�d���͕�����̕`��ɕK�v�ȏ��̓�̕��ߏ��
typedef struct tagIMEINPUTCLAUSEDATA
{
	int						Position ;						// �������ڂ���
	int						Length ;						// ��������
} IMEINPUTCLAUSEDATA, *LPIMEINPUTCLAUSEDATA ;

// �h�l�d���͕�����̕`��ɕK�v�ȏ��
typedef struct tagIMEINPUTDATA
{
	const TCHAR *				InputString ;				// ���͒��̕�����

	int							CursorPosition ;			// �J�[�\���̓��͕����񒆂̈ʒu(�o�C�g�P��)

	const IMEINPUTCLAUSEDATA *	ClauseData ;				// ���ߏ��
	int							ClauseNum ;					// ���ߏ��̐�
	int							SelectClause ;				// �I�𒆂̕���( -1 �̏ꍇ�͂ǂ̕��߂ɂ�����Ă��Ȃ�( �����ɃJ�[�\�������� ) )

	int							CandidateNum ;				// �ϊ����̐�( 0�̏ꍇ�͕ϊ����ł͂Ȃ� )
	const TCHAR **				CandidateList ;				// �ϊ���╶���񃊃X�g( ��F���Ԗڂ̌���`�悷��ꍇ  DrawString( 0, 0, data.CandidateList[ n ], GetColor(255,255,255) ); )
	int							SelectCandidate ;			// �I�𒆂̕ϊ����

	int							ConvertFlag ;				// �����ϊ������ǂ���( TRUE:�ϊ���  FALSE:�ϊ����ł͂Ȃ�( �����P�ʂŃJ�[�\�����ړ��ł����� ) )
} IMEINPUTDATA, *LPIMEINPUTDATA ;

// �`�敶����ꕶ���̏��
typedef struct tagDRAWCHARINFO
{
	TCHAR					Char[ 14 ] ;					// ����
	WORD					Bytes ;							// �����̃o�C�g��
	float					DrawX, DrawY ;					// �`��ʒu
	float					SizeX, SizeY ;					// �`��T�C�Y
} DRAWCHARINFO, *LPDRAWCHARINFO ;

// ��ʃ��[�h���f�[�^�^
typedef struct tagDISPLAYMODEDATA
{
	int						Width ;							// �����𑜓x
	int						Height ;						// �����𑜓x
	int						ColorBitDepth ;					// �F�r�b�g�[�x
	int						RefreshRate ;					// ���t���b�V�����[�g( -1 �̏ꍇ�͋K��l )
} DISPLAYMODEDATA, *LPDISPLAYMODEDATA ;

// �^�C���f�[�^�^
typedef struct tagDATEDATA
{
	int						Year ;							// �N
	int						Mon ;							// ��
	int						Day ;							// ��
	int						Hour ;							// ����
	int						Min ;							// ��
	int						Sec ;							// �b
} DATEDATA, *LPDATEDATA ;

// �t�@�C�����\����
typedef struct tagFILEINFO
{
	TCHAR					Name[ 260 ] ;					// �I�u�W�F�N�g��
	int						DirFlag ;						// �f�B���N�g�����ǂ���( TRUE:�f�B���N�g��  FALSE:�t�@�C�� )
	LONGLONG				Size ;							// �T�C�Y
	DATEDATA				CreationTime ;					// �쐬����
	DATEDATA				LastWriteTime ;					// �ŏI�X�V����
} FILEINFO, *LPFILEINFO ;

// �t�@�C�����\���́i wchar_t �� �j
typedef struct tagFILEINFOW
{
	wchar_t					Name[ 260 ] ;					// �I�u�W�F�N�g��
	int						DirFlag ;						// �f�B���N�g�����ǂ���( TRUE:�f�B���N�g��  FALSE:�t�@�C�� )
	LONGLONG				Size ;							// �T�C�Y
	DATEDATA				CreationTime ;					// �쐬����
	DATEDATA				LastWriteTime ;					// �ŏI�X�V����
} FILEINFOW, *LPFILEINFOW ;

// �s��\����
typedef struct tagMATRIX
{
	float					m[4][4] ;
} MATRIX, *LPMATRIX ;

typedef struct tagMATRIX_D
{
	double					m[4][4] ;
} MATRIX_D, *LPMATRIX_D ;

// �x�N�g���f�[�^�^
typedef struct tagVECTOR
{
	float					x, y, z ;
} VECTOR, *LPVECTOR, FLOAT3, *LPFLOAT3 ;

typedef struct tagVECTOR_D
{
	double					x, y, z ;
} VECTOR_D, *LPVECTOR_D, DOUBLE3, *LPDOUBLE3 ;

// FLOAT2�f�[�^�^
typedef struct tagFLOAT2
{
	float					u, v ;
} FLOAT2 ;

// float �^�̃J���[�l
typedef struct tagCOLOR_F
{
	float					r, g, b, a ;
} COLOR_F, *LPCOLOR_F ;

// unsigned char �^�̃J���[�l
typedef struct tagCOLOR_U8
{
	BYTE					b, g, r, a ;
} COLOR_U8 ;

// FLOAT4�f�[�^�^
typedef struct tagFLOAT4
{
	float					x, y, z, w ;
} FLOAT4, *LPFLOAT4 ;

// DOUBLE4�f�[�^�^
typedef struct tagDOUBLE4
{
	double					x, y, z, w ;
} DOUBLE4, *LPDOUBLE4 ;

// INT4�f�[�^�^
typedef struct tagINT4
{
	int						x, y, z, w ;
} INT4 ;

#ifndef DX_NOTUSE_DRAWFUNCTION

// �Q�c�`��Ɏg�p���钸�_�f�[�^�^(DrawPrimitive2D�p)
typedef struct tagVERTEX2D
{
	VECTOR					pos ;
	float					rhw ;
	COLOR_U8				dif ;
	float					u, v ;
} VERTEX2D, *LPVERTEX2D ; 

// �Q�c�`��Ɏg�p���钸�_�f�[�^�^(DrawPrimitive2DToShader�p)
typedef struct tagVERTEX2DSHADER
{
	VECTOR					pos ;
	float					rhw ;
	COLOR_U8				dif ;
	COLOR_U8				spc ;
	float					u, v ;
	float					su, sv ;
} VERTEX2DSHADER, *LPVERTEX2DSHADER ; 

// �Q�c�`��Ɏg�p���钸�_�f�[�^�^(���J�p)
typedef struct tagVERTEX
{
	float					x, y ;
	float					u, v ;
	unsigned char			b, g, r, a ;
} VERTEX ;

// �R�c�`��Ɏg�p���钸�_�f�[�^�^( ���o�[�W�����̂�� )
typedef struct tagVERTEX_3D
{
	VECTOR					pos ;
	unsigned char			b, g, r, a ;
	float					u, v ;
} VERTEX_3D, *LPVERTEX_3D ;

// �R�c�`��Ɏg�p���钸�_�f�[�^�^
typedef struct tagVERTEX3D
{
	VECTOR					pos ;							// ���W
	VECTOR					norm ;							// �@��
	COLOR_U8				dif ;							// �f�B�t���[�Y�J���[
	COLOR_U8				spc ;							// �X�y�L�����J���[
	float					u, v ;							// �e�N�X�`�����W
	float					su, sv ;						// �⏕�e�N�X�`�����W
} VERTEX3D, *LPVERTEX3D ;

// �R�c�`��Ɏg�p���钸�_�f�[�^�^( DrawPrimitive3DToShader�p )
// ���Ӂc�����o�ϐ��ɒǉ������邩�����܂���̂ŁA�錾���̏�����( VERTEX3DSHADER Vertex = { 0.0f, 0.0f, ... �Ƃ����悤�Ȃ�� )�͂��Ȃ������ǂ��ł�
typedef struct tagVERTEX3DSHADER
{
	VECTOR					pos ;							// ���W
	FLOAT4					spos ;							// �⏕���W
	VECTOR					norm ;							// �@��
	VECTOR					tan ;							// �ڐ�
	VECTOR					binorm ;						// �]�@��
	COLOR_U8				dif ;							// �f�B�t���[�Y�J���[
	COLOR_U8				spc ;							// �X�y�L�����J���[
	float					u, v ;							// �e�N�X�`�����W
	float					su, sv ;						// �⏕�e�N�X�`�����W
} VERTEX3DSHADER, *LPVERTEX3DSHADER ;

// ���C�g�p�����[�^
typedef struct tagLIGHTPARAM
{
	int						LightType ;						// ���C�g�̃^�C�v( DX_LIGHTTYPE_D3DLIGHT_POINT �� )
	COLOR_F					Diffuse ;						// �f�B�t���[�Y�J���[
	COLOR_F					Specular ;						// �X�y�L�����J���[
	COLOR_F					Ambient ;						// �A���r�G���g�F
	VECTOR					Position ;						// �ʒu
	VECTOR					Direction ;						// ����
	float					Range ;							// �L������
	float					Falloff ;						// �t�H�[���I�t 1.0f �ɂ��Ă����̂��D�܂���
	float					Attenuation0 ;					// �����ɂ�錸���W���O
	float					Attenuation1 ;					// �����ɂ�錸���W���P
	float					Attenuation2 ;					// �����ɂ�錸���W���Q
	float					Theta ;							// �X�|�b�g���C�g�̓���R�[���̏Ɩ��p�x( ���W�A�� )
	float					Phi ;							// �X�|�b�g���C�g�̊O���R�[���̏Ɩ��p�x
} LIGHTPARAM ;

// �}�e���A���p�����[�^
typedef struct tagMATERIALPARAM
{
	COLOR_F					Diffuse ;						// �f�B�t���[�Y�J���[
	COLOR_F					Ambient ;						// �A���r�G���g�J���[
	COLOR_F					Specular ;						// �X�y�L�����J���[
	COLOR_F					Emissive ;						// �G�~�b�V�u�J���[
	float					Power ;							// �X�y�L�����n�C���C�g�̑N���x
} MATERIALPARAM ;

#endif // DX_NOTUSE_DRAWFUNCTION

// ���C���q�b�g�`�F�b�N���ʊi�[�p�\����
typedef struct tagHITRESULT_LINE
{
	int						HitFlag ;						// �����������ǂ���( 1:��������  0:������Ȃ����� )
	VECTOR					Position ;						// �����������W
} HITRESULT_LINE ;

// ���C���q�b�g�`�F�b�N���ʊi�[�p�\����
typedef struct tagHITRESULT_LINE_D
{
	int						HitFlag ;						// �����������ǂ���( 1:��������  0:������Ȃ����� )
	VECTOR_D				Position ;						// �����������W
} HITRESULT_LINE_D ;

// �֐� Segment_Segment_Analyse �̌��ʂ�󂯎��ׂ̍\����
typedef struct tagSEGMENT_SEGMENT_RESULT
{
	float					SegA_SegB_MinDist_Square ;		// �����`�Ɛ����a���ł�ڋ߂�����W�Ԃ̋����̓��

	float					SegA_MinDist_Pos1_Pos2_t ;		// �����`�Ɛ����a�ɍł�ڋ߂�����W�̐����`�� t ( 0.0f �` 1.0f �A�ŋߓ_���W = ( SegAPos2 - SegAPos1 ) * t + SegAPos1 )
	float					SegB_MinDist_Pos1_Pos2_t ;		// �����a�������`�ɍł�ڋ߂�����W�̐����a�� t ( 0.0f �` 1.0f �A�ŋߓ_���W = ( SegBPos2 - SegBPos1 ) * t + SegBPos1 )

	VECTOR					SegA_MinDist_Pos ;				// �����`�������a�ɍł�ڋ߂�������`��̍��W
	VECTOR					SegB_MinDist_Pos ;				// �����a�������`�ɍł�ڋ߂�������a��̍��W
} SEGMENT_SEGMENT_RESULT ;

// �֐� Segment_Segment_Analyse �̌��ʂ�󂯎��ׂ̍\����
typedef struct tagSEGMENT_SEGMENT_RESULT_D
{
	double					SegA_SegB_MinDist_Square ;		// �����`�Ɛ����a���ł�ڋ߂�����W�Ԃ̋����̓��

	double					SegA_MinDist_Pos1_Pos2_t ;		// �����`�Ɛ����a�ɍł�ڋ߂�����W�̐����`�� t ( 0.0 �` 1.0 �A�ŋߓ_���W = ( SegAPos2 - SegAPos1 ) * t + SegAPos1 )
	double					SegB_MinDist_Pos1_Pos2_t ;		// �����a�������`�ɍł�ڋ߂�����W�̐����a�� t ( 0.0 �` 1.0 �A�ŋߓ_���W = ( SegBPos2 - SegBPos1 ) * t + SegBPos1 )

	VECTOR_D				SegA_MinDist_Pos ;				// �����`�������a�ɍł�ڋ߂�������`��̍��W
	VECTOR_D				SegB_MinDist_Pos ;				// �����a�������`�ɍł�ڋ߂�������a��̍��W
} SEGMENT_SEGMENT_RESULT_D ;

// �֐� Segment_Point_Analyse �̌��ʂ�󂯎��ׂ̍\����
typedef struct tagSEGMENT_POINT_RESULT
{
	float					Seg_Point_MinDist_Square ;		// �����Ɠ_���ł�ڋ߂�����W�Ԃ̋����̓��
	float					Seg_MinDist_Pos1_Pos2_t ;		// �������_�ɍł�ڋ߂�����W�̐����� t ( 0.0f �` 1.0f �A�ŋߓ_���W = ( SegPos2 - SegPos1 ) * t + SegPos1 )
	VECTOR					Seg_MinDist_Pos ;				// �������_�ɍł�ڋ߂��������̍��W
} SEGMENT_POINT_RESULT ;

// �֐� Segment_Point_Analyse �̌��ʂ�󂯎��ׂ̍\����
typedef struct tagSEGMENT_POINT_RESULT_D
{
	double					Seg_Point_MinDist_Square ;		// �����Ɠ_���ł�ڋ߂�����W�Ԃ̋����̓��
	double					Seg_MinDist_Pos1_Pos2_t ;		// �������_�ɍł�ڋ߂�����W�̐����� t ( 0.0 �` 1.0 �A�ŋߓ_���W = ( SegPos2 - SegPos1 ) * t + SegPos1 )
	VECTOR_D				Seg_MinDist_Pos ;				// �������_�ɍł�ڋ߂��������̍��W
} SEGMENT_POINT_RESULT_D ;

// �֐� Segment_Triangle_Analyse �̌��ʂ�󂯎��ׂ̍\����
typedef struct tagSEGMENT_TRIANGLE_RESULT
{
	float					Seg_Tri_MinDist_Square ;		// �����ƎO�p�`���ł�ڋ߂�����W�Ԃ̋����̓��

	float					Seg_MinDist_Pos1_Pos2_t ;		// �������O�p�`�ɍł�ڋ߂�����W�̐����� t ( 0.0f �` 1.0f �A�ŋߓ_���W = ( SegPos2 - SegPos1 ) * t + SegPos1 )
	VECTOR					Seg_MinDist_Pos ;				// �������O�p�`�ɍł�ڋ߂��������̍��W

	float					Tri_MinDist_Pos1_w ;			// �O�p�`�������ɍł�ڋ߂�����W�̎O�p�`���W�P�̏d��( �ŋߓ_���W = TriPos1 * TriPos1_w + TriPos2 * TriPos2_w + TriPos3 * TriPos3_w )
	float					Tri_MinDist_Pos2_w ;			// �O�p�`�������ɍł�ڋ߂�����W�̎O�p�`���W�Q�̏d��
	float					Tri_MinDist_Pos3_w ;			// �O�p�`�������ɍł�ڋ߂�����W�̎O�p�`���W�R�̏d��
	VECTOR					Tri_MinDist_Pos ;				// �O�p�`�������ɍł�ڋ߂���O�p�`��̍��W
} SEGMENT_TRIANGLE_RESULT ;

// �֐� Segment_Triangle_Analyse �̌��ʂ�󂯎��ׂ̍\����
typedef struct tagSEGMENT_TRIANGLE_RESULT_D
{
	double					Seg_Tri_MinDist_Square ;		// �����ƎO�p�`���ł�ڋ߂�����W�Ԃ̋����̓��

	double					Seg_MinDist_Pos1_Pos2_t ;		// �������O�p�`�ɍł�ڋ߂�����W�̐����� t ( 0.0 �` 1.0 �A�ŋߓ_���W = ( SegPos2 - SegPos1 ) * t + SegPos1 )
	VECTOR_D				Seg_MinDist_Pos ;				// �������O�p�`�ɍł�ڋ߂��������̍��W

	double					Tri_MinDist_Pos1_w ;			// �O�p�`�������ɍł�ڋ߂�����W�̎O�p�`���W�P�̏d��( �ŋߓ_���W = TriPos1 * TriPos1_w + TriPos2 * TriPos2_w + TriPos3 * TriPos3_w )
	double					Tri_MinDist_Pos2_w ;			// �O�p�`�������ɍł�ڋ߂�����W�̎O�p�`���W�Q�̏d��
	double					Tri_MinDist_Pos3_w ;			// �O�p�`�������ɍł�ڋ߂�����W�̎O�p�`���W�R�̏d��
	VECTOR_D				Tri_MinDist_Pos ;				// �O�p�`�������ɍł�ڋ߂���O�p�`��̍��W
} SEGMENT_TRIANGLE_RESULT_D ;

// �֐� Triangle_Point_Analyse �̌��ʂ�󂯎��ׂ̍\����
typedef struct tagTRIANGLE_POINT_RESULT
{
	float					Tri_Pnt_MinDist_Square ;		// �O�p�`�Ɠ_���ł�ڋ߂�����W�Ԃ̋����̓��

	float					Tri_MinDist_Pos1_w ;			// �O�p�`���_�ɍł�ڋ߂�����W�̎O�p�`���W�P�̏d��( �ŋߓ_���W = TriPos1 * TriPos1_w + TriPos2 * TriPos2_w + TriPos3 * TriPos3_w )
	float					Tri_MinDist_Pos2_w ;			// �O�p�`���_�ɍł�ڋ߂�����W�̎O�p�`���W�Q�̏d��
	float					Tri_MinDist_Pos3_w ;			// �O�p�`���_�ɍł�ڋ߂�����W�̎O�p�`���W�R�̏d��
	VECTOR					Tri_MinDist_Pos ;				// �O�p�`���_�ɍł�ڋ߂���O�p�`��̍��W
} TRIANGLE_POINT_RESULT ;

// �֐� Triangle_Point_Analyse �̌��ʂ�󂯎��ׂ̍\����
typedef struct tagTRIANGLE_POINT_RESULT_D
{
	double					Tri_Pnt_MinDist_Square ;		// �O�p�`�Ɠ_���ł�ڋ߂�����W�Ԃ̋����̓��

	double					Tri_MinDist_Pos1_w ;			// �O�p�`���_�ɍł�ڋ߂�����W�̎O�p�`���W�P�̏d��( �ŋߓ_���W = TriPos1 * TriPos1_w + TriPos2 * TriPos2_w + TriPos3 * TriPos3_w )
	double					Tri_MinDist_Pos2_w ;			// �O�p�`���_�ɍł�ڋ߂�����W�̎O�p�`���W�Q�̏d��
	double					Tri_MinDist_Pos3_w ;			// �O�p�`���_�ɍł�ڋ߂�����W�̎O�p�`���W�R�̏d��
	VECTOR_D				Tri_MinDist_Pos ;				// �O�p�`���_�ɍł�ڋ߂���O�p�`��̍��W
} TRIANGLE_POINT_RESULT_D ;

// �֐� Plane_Point_Analyse �̌��ʂ�󂯎��ׂ̍\����
typedef struct tagPLANE_POINT_RESULT
{
	int						Pnt_Plane_Normal_Side ;			// �_�����ʂ̖@���̑��ɂ��邩�ǂ���( 1:�@���̑��ɂ���  0:�@���Ɣ��Α��ɂ��� )
	float					Plane_Pnt_MinDist_Square ;		// ���ʂƓ_�̋���
	VECTOR					Plane_MinDist_Pos ;				// ���ʏ�̓_�Ƃ̍ŋߓ_���W
} PLANE_POINT_RESULT ;

// �֐� Plane_Point_Analyse �̌��ʂ�󂯎��ׂ̍\����
typedef struct tagPLANE_POINT_RESULT_D
{
	int						Pnt_Plane_Normal_Side ;			// �_�����ʂ̖@���̑��ɂ��邩�ǂ���( 1:�@���̑��ɂ���  0:�@���Ɣ��Α��ɂ��� )
	double					Plane_Pnt_MinDist_Square ;		// ���ʂƓ_�̋���
	VECTOR_D				Plane_MinDist_Pos ;				// ���ʏ�̓_�Ƃ̍ŋߓ_���W
} PLANE_POINT_RESULT_D ;

#ifndef DX_NOTUSE_DRAWFUNCTION

// �R���W�������ʑ���p�|���S��
typedef struct tagMV1_COLL_RESULT_POLY
{
	int						HitFlag ;						// ( MV1CollCheck_Line �ł̂ݗL�� )�q�b�g�t���O( 1:�q�b�g����  0:�q�b�g���Ȃ����� )
	VECTOR					HitPosition ;					// ( MV1CollCheck_Line �ł̂ݗL�� )�q�b�g���W

	int						FrameIndex ;					// ���������|���S�����܂܂��t���[���̔ԍ�
	int						MeshIndex ;						// ���������|���S�����܂܂�郁�b�V���̔ԍ�( ���b�V���P�ʂŔ��肵���ꍇ�̂ݗL�� )
	int						PolygonIndex ;					// ���������|���S���̔ԍ�
	int						MaterialIndex ;					// ���������|���S�����g�p���Ă���}�e���A���̔ԍ�
	VECTOR					Position[ 3 ] ;					// ���������|���S����`������O�_�̍��W
	VECTOR					Normal ;						// ���������|���S���̖@��
	float					PositionWeight[ 3 ] ;			// �����������W�́A���������|���S���̎O�_���ꂼ��ǂ̊����ŉe�����Ă��邩�A�̒l( �����������W = Position[ 0 ] * PositionWeight[ 0 ] + Position[ 1 ] * PositionWeight[ 1 ] + Position[ 2 ] * PositionWeight[ 2 ] )
	int						PosMaxWeightFrameIndex[ 3 ] ;	// ���������|���S���̍��W�����ꂼ��ł�e����󂯂Ă���t���[���̔ԍ�
} MV1_COLL_RESULT_POLY ;

// �R���W�������ʑ���p�|���S���z��
typedef struct tagMV1_COLL_RESULT_POLY_DIM
{
	int						HitNum ;						// �q�b�g�����|���S���̐�
	MV1_COLL_RESULT_POLY *	Dim ;							// �q�b�g�����|���S���̔z��( HitNum�����݂��� )
} MV1_COLL_RESULT_POLY_DIM ;

// �Q�Ɨp���_�\����
typedef struct tagMV1_REF_VERTEX
{
	VECTOR					Position ;						// �ʒu
	VECTOR					Normal ;						// �@��
	FLOAT2					TexCoord[ 2 ] ;					// �e�N�X�`�����W
	COLOR_U8				DiffuseColor ;					// �f�B�t���[�Y�J���[
	COLOR_U8				SpecularColor ;					// �X�y�L�����J���[
	int						MaxWeightFrameIndex ;			// �ł�傫�ȉe����^���Ă���t���[��( �X�L�j���O���b�V���p )
} MV1_REF_VERTEX ;

// �Q�Ɨp�|���S���\����
typedef struct tagMV1_REF_POLYGON
{
	unsigned short			FrameIndex ;					// ���̃|���S���������Ă���t���[��
	unsigned short			MeshIndex ;						// ���̃|���S���������Ă��郁�b�V��
	unsigned short			MaterialIndex ;					// �g�p���Ă���}�e���A��
	unsigned short			VIndexTarget ;					// VIndex ���w���C���f�b�N�X�̎Q�Ɛ�( 1:�t���[��  0:���f���S�� )
	int						VIndex[ 3 ] ;					// �R�p�`�|���S���𐬂��Q�ƒ��_�̃C���f�b�N�X
	VECTOR					MinPosition ;					// �|���S���𐬂����_���W�̍ŏ��l
	VECTOR					MaxPosition ;					// �|���S���𐬂����_���W�̍ő�l
} MV1_REF_POLYGON ;

// �Q�Ɨp�|���S���f�[�^�\����
typedef struct tagMV1_REF_POLYGONLIST
{
	int						PolygonNum ;					// �Q�Ɨp�|���S���̐�
	int						VertexNum ;						// ���_�̐�
	VECTOR					MinPosition ;					// ���_���W�̍ŏ��l
	VECTOR					MaxPosition ;					// ���_���W�̍ő�l
	MV1_REF_POLYGON	*		Polygons ;						// �Q�Ɨp�|���S���z��
	MV1_REF_VERTEX *		Vertexs ;						// �Q�Ɨp���_�z��
} MV1_REF_POLYGONLIST ;

#endif // DX_NOTUSE_DRAWFUNCTION




// �R�c�T�E���h���o�[�u�G�t�F�N�g�p�����[�^�\����
// ( ���߂� MSDN �� XAUDIO2FX_REVERB_PARAMETERS �\���̂̉���قڈ��p���Ă��܂� )
typedef struct tagSOUND3D_REVERB_PARAM
{
	float					WetDryMix ;						// ���o�[�u�ƂȂ�o�͂̊���( �w��\�͈� 0.0f �` 100.0f )

	unsigned int			ReflectionsDelay ;				// �_�C���N�g �p�X�ɑ΂��鏉�����˂̒x�����ԁA�P�ʂ̓~���b( �w��\�͈� 0 �` 300 )
	BYTE					ReverbDelay ;					// �������˂ɑ΂��郊�o�[�u�̒x�����ԁA�P�ʂ̓~���b( �w��\�͈� 0 �` 85 )
	BYTE					RearDelay ;						// ������o�͂���щE����o�͂̒x�����ԁA�P�ʂ̓~���b( �w��\�͈� 0 �` 5 )

	BYTE					PositionLeft ;					// �V�~�����[�V������Ԃɂ����鎋���҂ɑ΂��鍶���͂̈ʒu( �w��\�͈� 0 �` 30 )
															// PositionLeft ��ŏ��l�ɐݒ肵���ꍇ�A�����͎͂����҂̋߂��ɔz�u����܂��B
															// ���̈ʒu�ł́A�T�E���h �t�B�[���h�ɂ����ď������˂��D���ɂȂ�A�c�������͎�܂��āA�U�����������Ȃ�܂��B
															// PositionLeft ��ő�l�ɐݒ肵���ꍇ�A�����͂̓V�~�����[�V��������Ŏ����҂���ő�������ʒu�ɔz�u����܂��B
															// PositionLeft �͎c���������� (�����̎c������) �ɉe�������A�����҂ɑ΂��鉹���̌������̈ʒu�݂̂ɉe�����܂��B
	BYTE					PositionRight ;					// PositionLeft �Ɠ����ʂ̉E���͒l( �w��\�͈� 0 �` 30 )�A�E���͂ɂ̂݉e����^����
	BYTE					PositionMatrixLeft ;			// �������王���҂܂ł̋����ɂ��C���v���b�V�����𑝌�������l( �w��\�͈� 0 �` 30 )
	BYTE					PositionMatrixRight ;			// �������王���҂܂ł̋����ɂ��C���v���b�V�����𑝌������ܒl( �w��\�͈� 0 �` 30 )
	BYTE					EarlyDiffusion ;				// �X�̕ǂ̔��˓����l( �w��\�͈� 0 �` 15 )�A( ��������ȕ\�ʂ�V�~�����[�g����ɂ͏����Ȓl��ݒ肵�A�U�����̕\�ʂ�V�~�����[�g����ɂ͑傫�Ȓl��ݒ肵�܂��B)
	BYTE					LateDiffusion ;					// �X�̕ǂ̃��o�[�u�����l( �w��\�͈� 0 �` 15 )�A( ��������ȕ\�ʂ�V�~�����[�g����ɂ͏����Ȓl��ݒ肵�A�U�����̕\�ʂ�V�~�����[�g����ɂ͑傫�Ȓl��ݒ肵�܂��B)
	BYTE					LowEQGain ;						// 1 kHz �ɂ����錸�����Ԃ��ɂ��Ē���g���̌������Ԓ����l( �w��\�͈� 0 �` 12 )
															// �l�ƃQ�C�� (dB) �̊֌W
															// �l          0  1  2  3  4  5  6  7  8  9 10 11 12
															// �Q�C��(dB) -8 -7 -6 -5 -4 -3 -2 -1  0 +1 +2 +3 +4
															// LowEQGain �̒l�� 8 �̏ꍇ�A����g���̌������Ԃ� 1 kHz �ɂ����錸�����Ԃ��������Ȃ邱�Ƃɒ��ӂ��Ă�������
	BYTE					LowEQCutoff ;					// LowEQGain �p�����[�^�[�ɂ�萧�䂳��郍�[�p�X �t�B���^�[�̐ܓ_���g���̐ݒ�l( �w��\�͈� 0 �` 9 )
															// �l�Ǝ��g�� (Hz) �̊֌W
															// �l          0   1   2   3   4   5   6   7   8   9
															// ���g��(Hz) 50 100 150 200 250 300 350 400 450 500
	BYTE					HighEQGain ;					// 1 kHz �ɂ����錸�����Ԃ��ɂ��č����g���̌������Ԓ����l( �w��\�͈� 0 �` 8 )
															// �l�ƃQ�C�� (dB) �̊֌W
															// �l          0  1  2  3  4  5  6  7 8
															// �Q�C��(dB) -8 -7 -6 -5 -4 -3 -2 -1 0
															// 0 �ɐݒ肷��ƁA�����g���̉��� 1 kHz �̏ꍇ�Ɠ��������Ō������܂��B�ő�l�ɐݒ肷��ƁA�����g���̉��� 1 kHz �̏ꍇ����͂邩�ɍ��������Ō������܂��B
	BYTE					HighEQCutoff ;					// HighEQGain �p�����[�^�[�ɂ�萧�䂳���n�C�p�X �t�B���^�[�̐ܓ_���g���ݒ�l( �w��\�͈� 0 �` 14 )
															// �l�Ǝ��g�� (kHz) �̊֌W
															// �l          0    1    2     3    4     5    6     7    8     9   10    11   12    13   14
															// ���g��(kHz) 1  1.5    2   2.5    3   3.5    4   4.5    5   5.5    6   6.5    7   7.5    8

	float					RoomFilterFreq ;				// ����G�t�F�N�g�̃��[�p�X �t�B���^�[�̐ܓ_���g���A�P�ʂ� Hz ( �w��\�͈� 20.0f �` 20000.0f )
	float					RoomFilterMain ;				// �������˂ƌ���t�B�[���h�c���̗����ɓK�p����郍�[�p�X �t�B���^�[�̃p�X �o���h���x���x���A�P�ʂ� dB ( �w��\�͈� -100.0f �` 0.0f )
	float					RoomFilterHF ;					// �ܓ_���g�� (RoomFilterFreq) �ł̏������˂ƌ���t�B�[���h�c���̗����ɓK�p����郍�[�p�X �t�B���^�[�̃p�X �o���h���x���x���A�P�ʂ� dB ( �w��\�͈� -100.0f �` 0.0f )
	float					ReflectionsGain ;				// �������˂̋��x/���x���𒲐��l�A�P�ʂ� dB ( �w��\�͈� -100.0f �` 20.0f )
	float					ReverbGain ;					// ���o�[�u�̋��x/���x���𒲐��l�A�P�ʂ� dB ( �w��\�͈� -100.0f �` 20.0f )
	float					DecayTime ;						// 1 kHz �ɂ�����c���������ԁA�P�ʂ͕b ( �w��\�͈� 0.1f �` ����l���ɂȂ� )�A����́A�t�� �X�P�[���̓��͐M���� 60 dB ��������܂ł̎��Ԃł��B
	float					Density ;						// ����t�B�[���h�c���̃��[�h���x�𐧌�l�A�P�ʂ̓p�[�Z���g( �w��\�͈� 0.0f �` 100.0f )
															// ���F (colorless) �̋�Ԃł́ADensity ��ő�l (100.0f ) �ɐݒ肷��K�v������܂��B
															// Density �����������ƁA�T�E���h�͂���������� (�����`�t�B���^�[���K�p���ꂽ��) �ɂȂ�܂��B
															// ����̓T�C����V�~�����[�V��������Ƃ��ɗL���ȃG�t�F�N�g�ł��B
	float					RoomSize ;						// ������Ԃ̌�������̃T�C�Y�A�P�ʂ̓t�B�[�g( �w��\�͈� 1.0f (30.48 cm) �` 100.0f (30.48 m) )
} SOUND3D_REVERB_PARAM ;





// �X�g���[���f�[�^����p�֐��|�C���^�\���̃^�C�v�Q
typedef struct tagSTREAMDATASHREDTYPE2
{
	DWORD_PTR				(*Open		)( const TCHAR *Path, int UseCacheFlag, int BlockReadFlag, int UseASyncReadFlag ) ;
	int						(*Close		)( DWORD_PTR Handle ) ;
	LONGLONG				(*Tell		)( DWORD_PTR Handle ) ;
	int						(*Seek		)( DWORD_PTR Handle, LONGLONG SeekPoint, int SeekType ) ;
	size_t					(*Read		)( void *Buffer, size_t BlockSize, size_t DataNum, DWORD_PTR Handle ) ;
	int						(*Eof		)( DWORD_PTR Handle ) ;
	int						(*IdleCheck	)( DWORD_PTR Handle ) ;
	int						(*ChDir		)( const TCHAR *Path ) ;
	int						(*GetDir	)( TCHAR *Buffer ) ;
	int						(*GetDirS	)( TCHAR *Buffer, size_t BufferSize ) ;
	DWORD_PTR				(*FindFirst	)( const TCHAR *FilePath, FILEINFO *Buffer ) ;		// �߂�l: -1=�G���[  -1�ȊO=FindHandle
	int						(*FindNext	)( DWORD_PTR FindHandle, FILEINFO *Buffer ) ;		// �߂�l: -1=�G���[  0=����
	int						(*FindClose	)( DWORD_PTR FindHandle ) ;							// �߂�l: -1=�G���[  0=����
} STREAMDATASHREDTYPE2 ;

// �X�g���[���f�[�^����p�֐��|�C���^�\���̃^�C�v�Q�� wchar_t �g�p��
typedef struct tagSTREAMDATASHREDTYPE2W
{
	DWORD_PTR				(*Open		)( const wchar_t *Path, int UseCacheFlag, int BlockReadFlag, int UseASyncReadFlag ) ;
	int						(*Close		)( DWORD_PTR Handle ) ;
	LONGLONG				(*Tell		)( DWORD_PTR Handle ) ;
	int						(*Seek		)( DWORD_PTR Handle, LONGLONG SeekPoint, int SeekType ) ;
	size_t					(*Read		)( void *Buffer, size_t BlockSize, size_t DataNum, DWORD_PTR Handle ) ;
	int						(*Eof		)( DWORD_PTR Handle ) ;
	int						(*IdleCheck	)( DWORD_PTR Handle ) ;
	int						(*IsDXA		)( DWORD_PTR Handle ) ;									// �߂�l: -1=�G���[  0=�c�w�A�[�J�C�u�t�@�C����̃t�@�C���ł͂Ȃ�  1=�c�w�A�[�J�C�u�t�@�C����̃t�@�C��
	int						(*ChDir		)( const wchar_t *Path ) ;
	int						(*GetDir	)( wchar_t *Buffer ) ;
	int						(*GetDirS	)( wchar_t *Buffer, size_t BufferSize ) ;
	DWORD_PTR				(*FindFirst	)( const wchar_t *FilePath, FILEINFOW *Buffer ) ;		// �߂�l: -1=�G���[  -1�ȊO=FindHandle
	int						(*FindNext	)( DWORD_PTR FindHandle, FILEINFOW *Buffer ) ;			// �߂�l: -1=�G���[  0=����
	int						(*FindClose	)( DWORD_PTR FindHandle ) ;								// �߂�l: -1=�G���[  0=����
} STREAMDATASHREDTYPE2W ;

// �X�g���[���f�[�^����p�֐��|�C���^�\����
typedef struct tagSTREAMDATASHRED
{
	LONGLONG				(*Tell		)( DWORD_PTR StreamDataPoint ) ;
	int						(*Seek		)( DWORD_PTR StreamDataPoint, LONGLONG SeekPoint, int SeekType ) ;
	size_t					(*Read		)( void *Buffer, size_t BlockSize, size_t DataNum, DWORD_PTR StreamDataPoint ) ;
//	size_t					(*Write		)( void *Buffer, size_t BlockSize, size_t DataNum, DWORD_PTR StreamDataPoint ) ;
	int						(*Eof		)( DWORD_PTR StreamDataPoint ) ;
	int						(*IdleCheck	)( DWORD_PTR StreamDataPoint ) ;
	int						(*Close		)( DWORD_PTR StreamDataPoint ) ;
} STREAMDATASHRED, *LPSTREAMDATASHRED ;

// �X�g���[���f�[�^����p�f�[�^�\����
typedef struct tagSTREAMDATA
{
	STREAMDATASHRED			ReadShred ;
	DWORD_PTR				DataPoint ;
} STREAMDATA ;





// �p���b�g���\����
typedef struct tagCOLORPALETTEDATA
{
	unsigned char			Blue ;
	unsigned char			Green ;
	unsigned char			Red ;
	unsigned char			Alpha ;
} COLORPALETTEDATA ;

// �J���[�\�����\����
typedef struct tagCOLORDATA
{
	unsigned char			Format ;										// �t�H�[�}�b�g( DX_BASEIMAGE_FORMAT_NORMAL �� )

	unsigned char			ChannelNum ;									// �`�����l����
	unsigned char			ChannelBitDepth ;								// �P�`�����l���ӂ�̃r�b�g�[�x
	unsigned char			FloatTypeFlag ;									// ���������_�^���ǂ���( TRUE:���������_�^  FALSE:�����^ )
	unsigned char			PixelByte ;										// �P�s�N�Z��������̃o�C�g��

	// �ȉ��� ChannelNum ���� ChannelBitDepth �� 0 �̎��̂ݗL��
	unsigned char			ColorBitDepth ;									// �r�b�g�[�x
	unsigned char			NoneLoc, NoneWidth ;							// �g���Ă��Ȃ��r�b�g�̃A�h���X�ƕ�
	unsigned char			RedWidth, GreenWidth, BlueWidth, AlphaWidth ;	// �e�F�̃r�b�g��
	unsigned char			RedLoc	, GreenLoc  , BlueLoc  , AlphaLoc   ;	// �e�F�̔z�u����Ă���r�b�g�A�h���X
	unsigned int			RedMask , GreenMask , BlueMask , AlphaMask  ;	// �e�F�̃r�b�g�}�X�N
	unsigned int			NoneMask ;										// �g���Ă��Ȃ��r�b�g�̃}�X�N
	int						MaxPaletteNo ;									// �g�p���Ă���p���b�g�ԍ��̍ő�l( 0 �̏ꍇ�� 255 �Ƃ݂Ȃ� )

	// memo : ��������Ƀ����o�[�ϐ���ǉ������� DxBaseImage.cpp �� NS_GraphColorMatchBltVer2 �̃A�Z���u���ł̃p���b�g�f�[�^�Q�Ƃ̃��e�����l��C������K�v����
	COLORPALETTEDATA		Palette[ 256 ] ;								// �p���b�g( ColorBitDepth ���W�ȉ��̏ꍇ�̂ݗL�� )
} COLORDATA, *LPCOLORDATA ;

// ��{�C���[�W�f�[�^�\����
typedef struct tagBASEIMAGE
{
	COLORDATA				ColorData ;						// �F���
	int						Width, Height, Pitch ;			// ���A�����A�s�b�`
	void					*GraphData ;					// �O���t�B�b�N�C���[�W
	int						MipMapCount ;					// �~�b�v�}�b�v�̐�
	int						GraphDataCount ;				// �O���t�B�b�N�C���[�W�̐�
} BASEIMAGE, GRAPHIMAGE, *LPGRAPHIMAGE ;

// ��`�f�[�^�^
typedef struct tagRECTDATA
{
	int						x1, y1, x2, y2 ;				// ���W
	unsigned int			color ;							// �F
	int						pal ;							// �p�����[�^
} RECTDATA, *LPRECTDATA ;

// ���C���f�[�^�^
typedef struct tagLINEDATA
{
	int						x1, y1, x2, y2 ;				// ���W
	unsigned int			color ;							// �F
	int						pal ;							// �p�����[�^
} LINEDATA, *LPLINEDATA ;

// ���W�f�[�^�^
typedef struct tagPOINTDATA
{
	int						x, y ;							// ���W
	unsigned int			color ;							// �F
	int						pal ;							// �p�����[�^
} POINTDATA, *LPPOINTDATA ;

// �����̃f�[�^�^
typedef struct tagCUBEDATA
{
	VECTOR					Pos1 ;							// ���W1
	VECTOR					Pos2 ;							// ���W2
	COLOR_U8				DifColor ;						// �f�B�t���[�Y�J���[
	COLOR_U8				SpcColor ;						// �X�y�L�����J���[
} CUBEDATA, *LPCUBEDATA ;

#ifndef DX_NOTUSE_DRAWFUNCTION

// �C���[�W�t�H�[�}�b�g�f�[�^
typedef struct tagIMAGEFORMATDESC
{
	unsigned char			TextureFlag ;					// �e�N�X�`�����A�t���O( TRUE:�e�N�X�`��  FALSE:�W���T�[�t�F�X )
	unsigned char			CubeMapTextureFlag ;			// �L���[�u�}�b�v�e�N�X�`�����A�t���O( TRUE:�L���[�u�}�b�v�e�N�X�`���@FALSE:����ȊO )
	unsigned char			AlphaChFlag ;					// ���`�����l���͂��邩�A�t���O	( TRUE:����  FALSE:�Ȃ� )
	unsigned char			DrawValidFlag ;					// �`��\���A�t���O( TRUE:�\  FALSE:�s�\ )
	unsigned char			SystemMemFlag ;					// �V�X�e����������ɑ��݂��Ă��邩�A�t���O( TRUE:�V�X�e����������  FALSE:�u�q�`�l�� )( �W���T�[�t�F�X�̎��̂ݗL�� )
	unsigned char			UseManagedTextureFlag ;			// �}�l�[�W�h�e�N�X�`����g�p���邩�A�t���O
	unsigned char			UseLinearMapTextureFlag ;		// �e�N�X�`���̃������f�[�^�z�u�Ƀ��j�A���I��ł���ꍇ�̓f�[�^�z�u��������j�A�ɂ��邩�ǂ���( TRUE:���j�A���\�ȏꍇ�̓��j�A�ɂ���  FALSE:���j�A���\�ȏꍇ����Ƀ��j�A��w�肵�Ȃ� )
	unsigned char			PlatformTextureFormat ;			// ���ˑ��̃e�N�X�`���t�H�[�}�b�g�𒼐ڎw�肷�邽�߂Ɏg�p���邽�߂̕ϐ�( DX_TEXTUREFORMAT_DIRECT3D9_R8G8B8 �Ȃ� )

	unsigned char			BaseFormat ;					// ��{�t�H�[�}�b�g( DX_BASEIMAGE_FORMAT_NORMAL �� )
	unsigned char			MipMapCount ;					// �~�b�v�}�b�v�̐�
	unsigned char			AlphaTestFlag ;					// ���e�X�g�`�����l���͂��邩�A�t���O( TRUE:����  FALSE:�Ȃ� )( �e�N�X�`���̏ꍇ�̂ݗL�� )
	unsigned char			FloatTypeFlag ;					// ���������_�^���ǂ���
	unsigned char			ColorBitDepth ;					// �F�[�x( �e�N�X�`���̏ꍇ�̂ݗL�� )
	unsigned char			ChannelNum ;					// �`�����l���̐�
	unsigned char			ChannelBitDepth ;				// �P�`�����l���ӂ�̃r�b�g�[�x( �e�N�X�`���̏ꍇ�̂ݗL���A0 �̏ꍇ�� ColorBitDepth ���g�p����� )
	unsigned char			BlendGraphFlag ;				// �u�����h�p�摜���A�t���O
	unsigned char			UsePaletteFlag ;				// �p���b�g��g�p���Ă��邩�A�t���O( SystemMemFlag �� TRUE �̏ꍇ�̂ݗL�� )

	unsigned char			MSSamples ;						// �}���`�T���v�����O��( �`��Ώۂ̏ꍇ�g�p )
	unsigned char			MSQuality ;						// �}���`�T���v�����O�N�I���e�B( �`��Ώۂ̏ꍇ�g�p )
} IMAGEFORMATDESC ;

#endif // DX_NOTUSE_DRAWFUNCTION

// DirectInput �̃W���C�p�b�h���͏��
typedef struct tagDINPUT_JOYSTATE
{
	int						X ;								// �X�e�B�b�N�̂w���p�����[�^( -1000�`1000 )
	int						Y ;								// �X�e�B�b�N�̂x���p�����[�^( -1000�`1000 )
	int						Z ;								// �X�e�B�b�N�̂y���p�����[�^( -1000�`1000 )
	int						Rx ;							// �X�e�B�b�N�̂w����]�p�����[�^( -1000�`1000 )
	int						Ry ;							// �X�e�B�b�N�̂x����]�p�����[�^( -1000�`1000 )
	int						Rz ;							// �X�e�B�b�N�̂y����]�p�����[�^( -1000�`1000 )
	int						Slider[ 2 ] ;					// �X���C�_�[���( 0�`65535 )
	unsigned int			POV[ 4 ] ;						// �n�b�g�X�C�b�`�S��( 0xffffffff:���͂Ȃ� 0:�� 4500:�E�� 9000:�E 13500:�E�� 18000:�� 22500:���� 27000:�� 31500:���� )
	unsigned char			Buttons[ 32 ] ;					// �{�^���R�Q��( �����ꂽ�{�^���� 128 �ɂȂ� )
} DINPUT_JOYSTATE ;

// XInput �̃W���C�p�b�h���͏��
typedef struct tagXINPUT_STATE
{
	unsigned char			Buttons[ 16 ] ;					// �{�^���P�U��( �Y���ɂ� XINPUT_BUTTON_DPAD_UP ����g�p����A0:������Ă��Ȃ�  1:������Ă��� )
	unsigned char			LeftTrigger ;					// ���g���K�[( 0�`255 )
	unsigned char			RightTrigger ;					// �E�g���K�[( 0�`255 )
	short					ThumbLX ;						// ���X�e�B�b�N�̉����l( -32768 �` 32767 )
	short					ThumbLY ;						// ���X�e�B�b�N�̏c���l( -32768 �` 32767 )
	short					ThumbRX ;						// �E�X�e�B�b�N�̉����l( -32768 �` 32767 )
	short					ThumbRY ;						// �E�X�e�B�b�N�̏c���l( -32768 �` 32767 )
} XINPUT_STATE ;

// �^�b�`�p�l���̂P�ӏ����̃^�b�`�̏��
typedef struct tagTOUCHINPUTPOINT
{
	DWORD					Device ;						// �^�b�`���ꂽ�f�o�C�X
	DWORD					ID ;							// �^�b�`�𔻕ʂ��邽�߂̂h�c
	int						PositionX ;						// �^�b�`���ꂽ���WX
	int						PositionY ;						// �^�b�`���ꂽ���WY
	float					Pressure ;						// ����
	float					Orientation ;					// ��ʂ̏�[�ɑ΂���ړ_�̕��ʊp
	float					Tilt ;							// ��ʂ̐����ɑ΂���ړ_�̍��x�p
	int						ToolType ;						// �c�[���^�C�v( DX_TOUCHINPUT_TOOL_TYPE_UNKNOWN �Ȃ� )
} TOUCHINPUTPOINT ;

// �^�b�`�p�l���̃^�b�`�̏��
typedef struct tagTOUCHINPUTDATA
{
	LONGLONG				Time ;							// ���̎���

	unsigned int			Source ;
	int						PointNum ;						// �L���ȃ^�b�`���̐�
	TOUCHINPUTPOINT			Point[ TOUCHINPUTPOINT_MAX ] ;	// �^�b�`���
} TOUCHINPUTDATA ;






// WinSockets�g�p���̃A�h���X�w��p�\����
typedef struct tagIPDATA
{
	unsigned char			d1, d2, d3, d4 ;				// �A�h���X�l
} IPDATA, *LPIPDATA ;

typedef struct tagIPDATA_IPv6
{
	union
	{
		unsigned char			Byte[ 16 ] ;
		unsigned short			Word[ 8 ] ;
	} ;
	unsigned long				ScopeID ;
} IPDATA_IPv6 ;

#define DX_STRUCT_END


#ifndef DX_NON_NAMESPACE

}

#endif // DX_NON_NAMESPACE

// �֐��v���g�^�C�v�錾------------------------------------------------------------------

#ifdef WINDOWS_DESKTOP_OS
#include "DxFunctionWin.h"
#endif // WINDOWS_DESKTOP_OS

#ifdef __ANDROID__
#include "DxFunctionAndroid.h"
#endif // __ANDROID__

#ifdef __APPLE__
    #include "TargetConditionals.h"
    #if TARGET_OS_IPHONE
		#include "DxFunctioniOS.h"
	#endif
#endif // __APPLE__





#ifndef DX_NON_NAMESPACE

namespace DxLib
{

#endif // DX_NON_NAMESPACE

#define DX_FUNCTION_START

// DxSystem.cpp�֐��v���g�^�C�v�錾

// �������I���n�֐�
extern	int			DxLib_Init( void ) ;													// ���C�u������������s��
extern	int			DxLib_End( void ) ;														// ���C�u�����g�p�̌�n����s��

extern	int			DxLib_GlobalStructInitialize( void ) ;									// ���C�u�����̓���Ŏg�p���Ă���\���̂�[�����������āADxLib_Init �̑O�ɍs�����ݒ�𖳌�������( DxLib_Init �̑O�ł̂ݗL�� )
extern	int			DxLib_IsInit( void ) ;													// ���C�u����������������Ă��邩�ǂ�����擾����( �߂�l: TRUE=����������Ă���  FALSE=����Ă��Ȃ� )

// �G���[�֌W�֐�
extern	int			GetLastErrorCode( void ) ;												// �Ō�ɔ��������G���[�̃G���[�R�[�h��擾����( �߂�l�@0:�G���[���������Ă��Ȃ��A���̓G���[�R�[�h�o�͂ɑΉ������G���[���������Ă��Ȃ��@�@0�ȊO�F�G���[�R�[�h�ADX_ERRORCODE_WIN_DESKTOP_24BIT_COLOR �Ȃ� )
extern	int			GetLastErrorMessage( TCHAR *StringBuffer, int StringBufferBytes ) ;		// �Ō�ɔ��������G���[�̃G���[���b�Z�[�W��w��̕�����o�b�t�@�Ɏ擾����

// ���b�Z�[�W�����֐�
extern	int			ProcessMessage( void ) ;												// �E�C���h�E�Y�̃��b�Z�[�W���[�v�ɑ��鏈����s��

// �ݒ�n�֐�
extern	int			SetAlwaysRunFlag( int Flag ) ;											// �A�v������A�N�e�B�u��Ԃł��������s���邩�ǂ�����ݒ肷��( TRUE:���s����  FALSE:��~����( �f�t�H���g ) )

// �E�G�C�g�n�֐�
extern	int			WaitTimer( int WaitTime ) ;												// �w��̎��Ԃ���������Ƃ߂�
#ifndef DX_NON_INPUT
extern	int			WaitKey( void ) ;														// �L�[�̓��͑҂���s��
#endif // DX_NON_INPUT
extern	int			SleepThread( int WaitTime ) ;											// �w��̎��Ԃ����X���b�h�𖰂点��

// �J�E���^�y�ю����擾�n�֐�
extern	int			GetNowCount(							int UseRDTSCFlag DEFAULTPARAM( = FALSE ) ) ;	// �~���b�P�ʂ̐��x����J�E���^�̌��݂̒l�𓾂�
extern	LONGLONG	GetNowHiPerformanceCount(				int UseRDTSCFlag DEFAULTPARAM( = FALSE ) ) ;	// GetNowCount�̍����x�o�[�W����( �ʕb�P�ʂ̐��x����J�E���^�̌��݂̒l�𓾂� )
extern	ULONGLONG	GetNowSysPerformanceCount(				void ) ;						// OS���񋟂��鍂���x�J�E���^�̌��݂̒l�𓾂�
extern	ULONGLONG	GetSysPerformanceFrequency(				void ) ;						// OS���񋟂��鍂���x�J�E���^�̎��g��( 1�b�ӂ�̃J�E���g�� )�𓾂�
extern	ULONGLONG	ConvSysPerformanceCountToSeconds(		ULONGLONG Count ) ;				// OS���񋟂��鍂���x�J�E���^�̒l��b�̒l�ɕϊ�����
extern	ULONGLONG	ConvSysPerformanceCountToMilliSeconds(	ULONGLONG Count ) ;				// OS���񋟂��鍂���x�J�E���^�̒l��~���b�̒l�ɕϊ�����
extern	ULONGLONG	ConvSysPerformanceCountToMicroSeconds(	ULONGLONG Count ) ;				// OS���񋟂��鍂���x�J�E���^�̒l��}�C�N���b�̒l�ɕϊ�����
extern	ULONGLONG	ConvSysPerformanceCountToNanoSeconds(	ULONGLONG Count ) ;				// OS���񋟂��鍂���x�J�E���^�̒l��i�m�b�̒l�ɕϊ�����
extern	ULONGLONG	ConvSecondsToSysPerformanceCount(		ULONGLONG Seconds ) ;			// �b�̒l��OS���񋟂��鍂���x�J�E���^�̒l�ɕϊ�����
extern	ULONGLONG	ConvMilliSecondsToSysPerformanceCount(	ULONGLONG MilliSeconds ) ;		// �~���b�̒l��OS���񋟂��鍂���x�J�E���^�̒l�ɕϊ�����
extern	ULONGLONG	ConvMicroSecondsToSysPerformanceCount(	ULONGLONG MicroSeconds ) ;		// �}�C�N���b�̒l��OS���񋟂��鍂���x�J�E���^�̒l�ɕϊ�����
extern	ULONGLONG	ConvNanoSecondsToSysPerformanceCount(	ULONGLONG NanoSeconds ) ;		// �i�m�b�̒l��OS���񋟂��鍂���x�J�E���^�̒l�ɕϊ�����
extern	int			GetDateTime(							DATEDATA *DateBuf ) ;			// ���ݎ�����擾���� 

// �����擾
extern	int			GetRand( int RandMax ) ;												// ������擾����( RandMax : �Ԃ��ė���l�̍ő�l )
extern	int			SRand(	 int Seed ) ;													// �����̏����l��ݒ肷��

#ifndef DX_NON_MERSENNE_TWISTER
extern	DWORD		GetMersenneTwisterRand( void ) ;										// �����Z���k�E�c�C�X�^�[�A���S���Y���Ő������ꂽ�����l�𖳉��H�Ŏ擾����

extern	DWORD_PTR	CreateRandHandle( int Seed DEFAULTPARAM( = -1 ) ) ;						// �����n���h����쐬����( �߂�l�@0�ȊO:�����n���h���@0:�G���[ )
extern	int			DeleteRandHandle( DWORD_PTR RandHandle ) ;								// �����n���h����폜����
extern	int			SRandHandle( DWORD_PTR RandHandle, int Seed ) ;							// �����n���h���̏����l��Đݒ肷��
extern	int			GetRandHandle( DWORD_PTR RandHandle, int RandMax ) ;					// �����n���h����g�p���ė�����擾����( RandMax : �Ԃ��ė���l�̍ő�l )
extern	DWORD		GetMersenneTwisterRandHandle( DWORD_PTR RandHandle ) ;					// �����n���h����g�p���ă����Z���k�E�c�C�X�^�[�A���S���Y���Ő������ꂽ�����l�𖳉��H�Ŏ擾����

#endif // DX_NON_MERSENNE_TWISTER

// �o�b�e���[�֘A
extern	int			GetBatteryLifePercent( void ) ;											// �d�r�̎c�ʂ� % �Ŏ擾����( �߂�l�F 100=�t���[�d���  0=�[�d�c�ʖ��� )

// �N���b�v�{�[�h�֌W
extern	int			GetClipboardText(			TCHAR *DestBuffer, int DestBufferBytes DEFAULTPARAM( = -1 ) ) ;		// �N���b�v�{�[�h�Ɋi�[����Ă���e�L�X�g�f�[�^��ǂݏo��( DestBuffer:�������i�[����o�b�t�@�̐擪�A�h���X   �߂�l  -1:�N���b�v�{�[�h�Ƀe�L�X�g�f�[�^������  -1�ȊO:�N���b�v�{�[�h�Ɋi�[����Ă��镶����f�[�^�̃T�C�Y( �P��:byte ) ) 
extern	int			SetClipboardText(			const TCHAR *Text                    ) ;	// �N���b�v�{�[�h�Ƀe�L�X�g�f�[�^��i�[����
extern	int			SetClipboardTextWithStrLen(	const TCHAR *Text, size_t TextLength ) ;	// �N���b�v�{�[�h�Ƀe�L�X�g�f�[�^��i�[����

// ini�t�@�C���֌W
extern	int			GetPrivateProfileStringDx(                 const TCHAR *AppName,                       const TCHAR *KeyName,                       const TCHAR *Default,                       TCHAR *ReturnedStringBuffer, size_t ReturnedStringBufferBytes, const TCHAR *IniFilePath,                           int IniFileCharCodeFormat DEFAULTPARAM( = -1 ) /* DX_CHARCODEFORMAT_SHIFTJIS ���A-1 �Ńf�t�H���g */ ) ;		// GetPrivateProfileString �̂c�w���C�u������
extern	int			GetPrivateProfileStringDxWithStrLen(       const TCHAR *AppName, size_t AppNameLength, const TCHAR *KeyName, size_t KeyNameLength, const TCHAR *Default, size_t DefaultLength, TCHAR *ReturnedStringBuffer, size_t ReturnedStringBufferBytes, const TCHAR *IniFilePath, size_t IniFilePathLength, int IniFileCharCodeFormat DEFAULTPARAM( = -1 ) /* DX_CHARCODEFORMAT_SHIFTJIS ���A-1 �Ńf�t�H���g */ ) ;		// GetPrivateProfileString �̂c�w���C�u������
extern	int			GetPrivateProfileIntDx(                    const TCHAR *AppName,                       const TCHAR *KeyName,                       int          Default,                                                                                      const TCHAR *IniFilePath,                           int IniFileCharCodeFormat DEFAULTPARAM( = -1 ) /* DX_CHARCODEFORMAT_SHIFTJIS ���A-1 �Ńf�t�H���g */ ) ;		// GetPrivateProfileInt �̂c�w���C�u������
extern	int			GetPrivateProfileIntDxWithStrLen(          const TCHAR *AppName, size_t AppNameLength, const TCHAR *KeyName, size_t KeyNameLength, int          Default,                                                                                      const TCHAR *IniFilePath, size_t IniFilePathLength, int IniFileCharCodeFormat DEFAULTPARAM( = -1 ) /* DX_CHARCODEFORMAT_SHIFTJIS ���A-1 �Ńf�t�H���g */ ) ;		// GetPrivateProfileInt �̂c�w���C�u������
extern	int			GetPrivateProfileStringDxForMem(           const TCHAR *AppName,                       const TCHAR *KeyName,                       const TCHAR *Default,                       TCHAR *ReturnedStringBuffer, size_t ReturnedStringBufferBytes, const void *IniFileImage, size_t IniFileImageBytes, int IniFileCharCodeFormat DEFAULTPARAM( = -1 ) /* DX_CHARCODEFORMAT_SHIFTJIS ���A-1 �Ńf�t�H���g */ ) ;		// GetPrivateProfileStringDx �̃���������ǂݍ��ޔ�
extern	int			GetPrivateProfileStringDxForMemWithStrLen( const TCHAR *AppName, size_t AppNameLength, const TCHAR *KeyName, size_t KeyNameLength, const TCHAR *Default, size_t DefaultLength, TCHAR *ReturnedStringBuffer, size_t ReturnedStringBufferBytes, const void *IniFileImage, size_t IniFileImageBytes, int IniFileCharCodeFormat DEFAULTPARAM( = -1 ) /* DX_CHARCODEFORMAT_SHIFTJIS ���A-1 �Ńf�t�H���g */ ) ;		// GetPrivateProfileStringDx �̃���������ǂݍ��ޔ�
extern	int			GetPrivateProfileIntDxForMem(              const TCHAR *AppName,                       const TCHAR *KeyName,                       int          Default,                                                                                      const void *IniFileImage, size_t IniFileImageBytes, int IniFileCharCodeFormat DEFAULTPARAM( = -1 ) /* DX_CHARCODEFORMAT_SHIFTJIS ���A-1 �Ńf�t�H���g */ ) ;		// GetPrivateProfileIntDx �̃���������ǂݍ��ޔ�
extern	int			GetPrivateProfileIntDxForMemWithStrLen(    const TCHAR *AppName, size_t AppNameLength, const TCHAR *KeyName, size_t KeyNameLength, int          Default,                                                                                      const void *IniFileImage, size_t IniFileImageBytes, int IniFileCharCodeFormat DEFAULTPARAM( = -1 ) /* DX_CHARCODEFORMAT_SHIFTJIS ���A-1 �Ńf�t�H���g */ ) ;		// GetPrivateProfileIntDx �̃���������ǂݍ��ޔ�

#if defined( __APPLE__ ) || defined( __ANDROID__ )

// ���[���A�v���𑗐M���[���ҏW��ԂŋN������
// MailAddr    : ����( NULL �Ŗ��� )�A���[���A�h���X����������ꍇ�̓J���}�w,�x�ŋ�؂��Ă�������
// MailCCAddr  : CC �̈���( NULL �Ŗ��� )�A���[���A�h���X����������ꍇ�̓J���}�w,�x�ŋ�؂��Ă�������
// MailBCCAddr : BCC �̈���( NULL �Ŗ��� )�A���[���A�h���X����������ꍇ�̓J���}�w,�x�ŋ�؂��Ă�������
// Subject     : �^�C�g��( NULL �Ŗ��� )�A���[���A�h���X����������ꍇ�̓J���}�w,�x�ŋ�؂��Ă�������
// Text        : �{��( NULL �Ŗ��� )�A���[���A�h���X����������ꍇ�̓J���}�w,�x�ŋ�؂��Ă�������
extern	int			MailApp_Send(           const TCHAR *MailAddr DEFAULTPARAM( = NULL ) ,                                             const TCHAR *MailCCAddr DEFAULTPARAM( = NULL ) ,                                               const TCHAR *MailBCCAddr DEFAULTPARAM( = NULL ) ,                                                const TCHAR *Subject DEFAULTPARAM( = NULL ) ,                                            const TCHAR *Text DEFAULTPARAM( = NULL )                                         ) ;
extern	int			MailApp_SendWithStrLen( const TCHAR *MailAddr DEFAULTPARAM( = NULL ) , size_t MailAddrLength DEFAULTPARAM( = 0 ) , const TCHAR *MailCCAddr DEFAULTPARAM( = NULL ) , size_t MailCCAddrLength DEFAULTPARAM( = 0 ) , const TCHAR *MailBCCAddr DEFAULTPARAM( = NULL ) , size_t MailBCCAddrLength DEFAULTPARAM( = 0 ) , const TCHAR *Subject DEFAULTPARAM( = NULL ) , size_t SubjectLength DEFAULTPARAM( = 0 ) , const TCHAR *Text DEFAULTPARAM( = NULL ) , size_t TextLength DEFAULTPARAM( = 0 ) ) ;

#endif // defined( __APPLE__ ) || defined( __ANDROID__ )











// DxLog.cpp�֐��v���g�^�C�v�錾

#ifndef DX_NON_LOG
// ���O�t�@�C���֐�
extern	int			LogFileAdd(				const TCHAR *String ) ;							// ���O�t�@�C��( Log.txt ) �ɕ������o�͂���
extern	int			LogFileAddWithStrLen(	const TCHAR *String, size_t StringLength ) ;	// ���O�t�@�C��( Log.txt ) �ɕ������o�͂���
extern 	int			LogFileFmtAdd(			const TCHAR *FormatString , ... ) ;				// �����t���� ���O�t�@�C��( Log.txt ) �ɕ������o�͂���( ������ printf �Ɠ��� )
extern	int			LogFileTabAdd(			void ) ;										// ���O�t�@�C��( Log.txt ) �ɏo�͂��镶����̑O�ɕt����^�u�̐������₷
extern	int			LogFileTabSub(			void ) ;										// ���O�t�@�C��( Log.txt ) �ɏo�͂��镶����̑O�ɕt����^�u�̐������炷
extern	int			ErrorLogAdd(			const TCHAR *String ) ;							// LogFileAdd �̋����̊֐�
extern 	int			ErrorLogFmtAdd(			const TCHAR *FormatString , ... ) ;				// LogFileFmtAdd �̋����̊֐�
extern	int			ErrorLogTabAdd(			void ) ;										// LogFileTabAdd �̋����̊֐�
extern	int			ErrorLogTabSub(			void ) ;										// LogFileTabSub �̋����̊֐�
extern	int			SetUseTimeStampFlag(	int UseFlag ) ;									// ���O�t�@�C��( Log.txt ) �ɏo�͂��镶����̑O�ɋN�����Ă���̎��Ԃ�t���邩�ǂ�����ݒ肷��( TRUE:�t����( �f�t�H���g)  FALSE:�t���Ȃ� )
extern 	int			AppLogAdd(				const TCHAR *String , ... ) ;					// LogFileFmtAdd �Ɠ����@�\�̊֐�

// ���O�o�͐ݒ�֐�
extern	int			SetOutApplicationLogValidFlag(	          int Flag ) ;													// ���O�t�@�C��( Log.txt ) ��쐬���邩�ǂ�����ݒ肷��( TRUE:�쐬����( �f�t�H���g )  FALSE:�쐬���Ȃ� )�ADxLib_Init �̑O�ł̂ݎg�p�\�@
extern	int			SetOutApplicationSystemLogValidFlag(      int Flag ) ;													// ���O�t�@�C��( Log.txt ) �ɂc�w���C�u��������̃��O�o�͂�s�����ǂ����ݒ肷��( TRUE:�c�w���C�u��������̃��O�o�͂�s��( �f�t�H���g )  FALSE:�c�w���C�u��������̃��O�o�͂�s��Ȃ� )
extern	int			SetApplicationLogFileName(                const TCHAR *FileName ) ;										// ���O�t�@�C���̖��O��ݒ肷��( Log.txt �ȊO�ɂ������ꍇ�Ɏg�p )
extern	int			SetApplicationLogFileNameWithStrLen(      const TCHAR *FileName, size_t FileNameLength ) ;				// ���O�t�@�C���̖��O��ݒ肷��( Log.txt �ȊO�ɂ������ꍇ�Ɏg�p )
extern	int			SetApplicationLogSaveDirectory(	          const TCHAR *DirectoryPath ) ;								// ���O�t�@�C��( Log.txt ) ��ۑ�����f�B���N�g���p�X��ݒ肷��
extern	int			SetApplicationLogSaveDirectoryWithStrLen( const TCHAR *DirectoryPath, size_t DirectoryPathLength ) ;	// ���O�t�@�C��( Log.txt ) ��ۑ�����f�B���N�g���p�X��ݒ肷��
extern	int			SetUseDateNameLogFile(			          int Flag ) ;													// ���O�t�@�C�����ɓ��t����邩�ǂ�����Z�b�g����( TRUE:�t����  FALSE:�t���Ȃ�( �f�t�H���g ) )

#ifndef DX_NON_PRINTF_DX

// ���O�o�͋@�\�֐�
extern	int			SetLogDrawOutFlag(	 int DrawFlag ) ;									// printfDx �̌��ʂ��ʂɏo�͂��邩�ǂ�����ݒ肷��ATRUE:�o�͂�s��  FALSE:�o�͂�s��Ȃ�( printfDx ����s����Ɠ���� SetLogDrawOutFlag( TRUE ) ; ���Ă΂�܂� )
extern 	int			GetLogDrawFlag(		 void ) ;											// printfDx �̌��ʂ��ʂɏo�͂��邩�ǂ����̐ݒ��擾����( �߂�l  TRUE:�o�͂�s��  FALSE:�o�͂�s��Ȃ� )
extern	int			SetLogFontSize(		 int Size ) ;										// printfDx �̌��ʂ��ʂɏo�͂���ۂɎg�p����t�H���g�̃T�C�Y��ݒ肷��
extern	int			SetLogFontHandle(	 int FontHandle ) ;									// printfDx �̌��ʂ��ʂɏo�͂���ۂɎg�p����t�H���g�̃n���h����ύX����
extern	int			SetLogDrawArea(		 int x1, int y1, int x2, int y2 ) ;					// printfDx �̌��ʂ��ʂɏo�͂���ۂ̕`�悷��̈��ݒ肷��

// �ȈՉ�ʏo�͊֐�
extern 	int			printfDx(			 const TCHAR *FormatString , ... ) ;												// printf �Ɠ��������ŉ�ʂɕ������\�����邽�߂̊֐�
extern	int			putsDx(				 const TCHAR *String, int NewLine DEFAULTPARAM( = TRUE ) ) ;						// puts �Ɠ��������ŉ�ʂɕ������\�����邽�߂̊֐�
extern	int			putsDxWithStrLen(	 const TCHAR *String, size_t StringLength, int NewLine DEFAULTPARAM( = TRUE ) ) ;	// puts �Ɠ��������ŉ�ʂɕ������\�����邽�߂̊֐�
extern	int			clsDx(				 void ) ;																			// printfDx �̌��ʂ���Z�b�g���邽�߂̊֐�
extern	int			setPrintColorDx(     int Color, int EdgeColor DEFAULTPARAM( = 0 ) ) ;													// printf �� puts �ŕ\�����镶����̐F��w�肷��
#endif // DX_NON_PRINTF_DX

#endif // DX_NON_LOG












#ifndef DX_NON_ASYNCLOAD

// DxASyncLoad.cpp�֐��v���g�^�C�v�錾

// �񓯊��ǂݍ��݊֌W
extern	int			SetUseASyncLoadFlag(			int Flag ) ;										// �ǂݍ��ݏ����n�̊֐��Ŕ񓯊��ǂݍ��݂�s�����ǂ�����ݒ肷��( �񓯊��ǂݍ��݂ɑΉ����Ă���֐��̂ݗL�� )( TRUE:�񓯊��ǂݍ��݂�s��  FALSE:�񓯊��ǂݍ��݂�s��Ȃ�( �f�t�H���g ) )
extern	int			GetUseASyncLoadFlag(			void ) ;											// �ǂݍ��ݏ����n�̊֐��Ŕ񓯊��ǂݍ��݂�s�����ǂ�����擾����( �񓯊��ǂݍ��݂ɑΉ����Ă���֐��̂ݗL�� )( TRUE:�񓯊��ǂݍ��݂�s��  FALSE:�񓯊��ǂݍ��݂�s��Ȃ�( �f�t�H���g ) )
extern	int			CheckHandleASyncLoad(			int Handle ) ;										// �n���h���̔񓯊��ǂݍ��݂��������Ă��邩�ǂ�����擾����( TRUE:�܂��������Ă��Ȃ�  FALSE:�������Ă���  -1:�G���[ )
extern	int			GetHandleASyncLoadResult(		int Handle ) ;										// �n���h���̔񓯊��ǂݍ��ݏ����̖߂�l��擾����( �񓯊��ǂݍ��ݒ��̏ꍇ�͈�O�̔񓯊��ǂݍ��ݏ����̖߂�l���Ԃ��Ă��܂� )
extern	int			SetASyncLoadFinishDeleteFlag(	int Handle ) ;										// �n���h���̔񓯊��ǂݍ��ݏ���������������n���h����폜����t���O�𗧂Ă�
extern	int			SetASyncLoadFinishCallback(		int Handle, void ( *Callback )( int Handle, void *Data ), void *Data ) ;	// �n���h���̔񓯊��ǂݍ��ݏ���������������Ă΂��֐���Z�b�g����
extern	int			WaitHandleASyncLoad(			int Handle ) ;										// �w��̃n���h���̔񓯊��ǂݍ��ݏ������I������܂ő҂�
extern	int			WaitHandleASyncLoadAll(			void ) ;											// �S�Ă̔񓯊��ǂݍ��݃f�[�^���ǂݍ��ݏI���܂ő҂�
extern	int			GetASyncLoadNum(				void ) ;											// �񓯊��ǂݍ��ݒ��̏����̐���擾����
extern	int			SetASyncLoadThreadNum(			int ThreadNum ) ;									// �񓯊��ǂݍ��ݏ�����s���X���b�h�̐���ݒ肷��( ThreadNum �Ɏw��ł��鐔�� 1 �` 32 )

#endif // DX_NON_ASYNCLOAD











// DxHandle.cpp�֐��v���g�^�C�v�錾

extern	int			SetDeleteHandleFlag(		int Handle, int *DeleteFlag ) ;							// �n���h�����폜���ꂽ�Ƃ��Ɂ|�P���ݒ肳���ϐ���o�^����
extern	int			GetHandleNum(				int HandleType /* DX_HANDLETYPE_GRAPH�� */ ) ;			// �w��̃^�C�v�̃n���h���̐���擾����
extern	int			GetMaxHandleNum(			int HandleType /* DX_HANDLETYPE_GRAPH�� */ ) ;			// �w��̃^�C�v�̃n���h�����ő�Ŋ�쐬�ł��邩��擾����
extern	int			DumpHandleInfo(				int HandleType /* DX_HANDLETYPE_GRAPH�� */ ) ;			// �w��̃^�C�v�̑S�n���h���̏�����O�ɏo�͂���














// �}�E�X�֌W�֐�
extern	int			SetMouseDispFlag(		int DispFlag ) ;												// �}�E�X�|�C���^�̕\����Ԃ�ݒ肷��( DispFlag:�}�E�X�|�C���^��\�����邩�ǂ���( TRUE:�\������  FALSE:�\�����Ȃ� )
extern	int			SetMouseDispIgnoreMenuFlag(	int IgnoreMenuFlag ) ;										// �}�E�X�|�C���^�̕\����Ԃɂ��ă��j���[�̕\����Ԃ𖳎����邩�ǂ�����ݒ肷��( TRUE:���j���[�̕\����Ԃ𖳎�����  FALSE:���j���[�̕\����Ԃ�l������( �f�t�H���g ) )
#ifndef DX_NON_INPUT
extern	int			GetMousePoint(			int *XBuf, int *YBuf ) ;										// �}�E�X�|�C���^�̈ʒu��擾����
extern	int			SetMousePoint(			int PointX, int PointY ) ;										// �}�E�X�|�C���^�̈ʒu��ݒ肷��
extern	int			GetMouseInput(			void ) ;														// �}�E�X�̃{�^���̉�����Ԃ�擾����
extern	int			GetMouseWheelRotVol(	int CounterReset DEFAULTPARAM( = TRUE ) ) ;						// �����}�E�X�z�C�[���̉�]�ʂ�擾����
extern	int			GetMouseHWheelRotVol(	int CounterReset DEFAULTPARAM( = TRUE ) ) ;						// �����}�E�X�z�C�[���̉�]�ʂ�擾����
extern	float		GetMouseWheelRotVolF(	int CounterReset DEFAULTPARAM( = TRUE ) ) ;						// �����}�E�X�z�C�[���̉�]�ʂ�擾����( �߂�l�� float �^ )
extern	float		GetMouseHWheelRotVolF(	int CounterReset DEFAULTPARAM( = TRUE ) ) ;						// �����}�E�X�z�C�[���̉�]�ʂ�擾����( �߂�l�� float �^ )
extern	int			GetMouseInputLog(		int *Button, int *ClickX, int *ClickY, int LogDelete DEFAULTPARAM( = TRUE ) ) ;					// �}�E�X�̃{�^��������������擾����( Button:�����ꂽ�{�^��( MOUSE_INPUT_LEFT �� )��i�[����ϐ��̃A�h���X  ClickX:�����ꂽ���̂w���W��i�[����ϐ��̃A�h���X  ClickY:�����ꂽ���̂x���W��i�[����ϐ��̃A�h���X   LogDelete:�擾�����������������O����폜���邩�ǂ���( TRUE:�폜����  FALSE:�폜���Ȃ��A�܂莟�ɂ��̊֐����Ă΂ꂽ�Ƃ��ɓ����l��擾���邱�ƂɂȂ� )�@�@�߂�l  0:�����ꂽ���擾�ł����@-1:�����ꂽ��񂪖��������A�܂�O��̌Ăяo��( �܂��͋N��������ŏ��̌Ăяo�� )�̊ԂɈ�x��}�E�X�̃{�^����������Ȃ����� )
extern	int			GetMouseInputLog2(		int *Button, int *ClickX, int *ClickY, int *LogType, int LogDelete DEFAULTPARAM( = TRUE ) ) ;	// �}�E�X�̃{�^����������藣�����肵�������擾����( Button:�����ꂽ�藣���ꂽ�肵���{�^��( MOUSE_INPUT_LEFT �� )��i�[����ϐ��̃A�h���X  ClickX:�����ꂽ�藣���ꂽ�肵�����̂w���W��i�[����ϐ��̃A�h���X  ClickY:�����ꂽ�藣���ꂽ�肵�����̂x���W��i�[����ϐ��̃A�h���X  LogType�F�����ꂽ�̂�( MOUSE_INPUT_LOG_DOWN )�����ꂽ�̂�( MOUSE_INPUT_LOG_UP )�A���̏���i�[����ϐ��̃A�h���X  LogDelete:�擾���������ꂽ�藣���ꂽ�肵�����������O����폜���邩�ǂ���( TRUE:�폜����  FALSE:�폜���Ȃ��A�܂莟�ɂ��̊֐����Ă΂ꂽ�Ƃ��ɓ����l��擾���邱�ƂɂȂ� )�@�@�߂�l  0:�����ꂽ�藣���ꂽ�肵�����擾�ł����@-1:�����ꂽ�藣���ꂽ�肵����񂪖��������A�܂�O��̌Ăяo��( �܂��͋N��������ŏ��̌Ăяo�� )�̊ԂɈ�x��}�E�X�̃{�^���������ꂽ�藣���ꂽ�肵�Ȃ����� )
#endif // DX_NON_INPUT












// �^�b�`�p�l�����͊֌W�֐�
#ifndef DX_NON_INPUT
extern	int				GetTouchInputNum( void ) ;																				// �^�b�`����Ă��鐔��擾����
extern	int				GetTouchInput( int InputNo, int *PositionX, int *PositionY, int *ID DEFAULTPARAM( = NULL ) , int *Device DEFAULTPARAM( = NULL ) , float *Pressure DEFAULTPARAM( = NULL ) ) ;		// �^�b�`�̏���擾����

extern	int				GetTouchInputLogNum( void ) ;																			// �X�g�b�N����Ă���^�b�`���̐���擾����
extern	int				ClearTouchInputLog( void ) ;																			// �X�g�b�N����Ă���^�b�`����N���A����
extern	TOUCHINPUTDATA	GetTouchInputLogOne( int PeekFlag DEFAULTPARAM( = FALSE ) ) ;											// �X�g�b�N����Ă���^�b�`��񂩂��ԌÂ�����ЂƂ擾����
extern	int				GetTouchInputLog( TOUCHINPUTDATA *TouchData, int GetNum, int PeekFlag DEFAULTPARAM( = FALSE ) ) ;		// �X�g�b�N����Ă���^�b�`��񂩂�Â����Ɏw�萔�o�b�t�@�Ɏ擾����( �߂�l  -1:�G���[  0�ȏ�:�擾�������̐� )

extern	int				GetTouchInputDownLogNum( void ) ;																		// �X�g�b�N����Ă���^�b�`����n�߂����̐���擾����
extern	int				ClearTouchInputDownLog( void ) ;																		// �X�g�b�N����Ă���^�b�`����n�߂�����N���A����
extern	TOUCHINPUTPOINT	GetTouchInputDownLogOne( int PeekFlag DEFAULTPARAM( = FALSE ) ) ;										// �X�g�b�N����Ă���^�b�`����n�߂���񂩂��ԌÂ�����ЂƂ擾����
extern	int				GetTouchInputDownLog( TOUCHINPUTPOINT *PointData, int GetNum, int PeekFlag DEFAULTPARAM( = FALSE ) ) ;	// �X�g�b�N����Ă���^�b�`����n�߂���񂩂�Â����Ɏw�萔�o�b�t�@�Ɏ擾����( �߂�l  -1:�G���[  0�ȏ�:�擾�������̐� )

extern	int				GetTouchInputUpLogNum( void ) ;																			// �X�g�b�N����Ă���^�b�`�������ꂽ���̐���擾����
extern	int				ClearTouchInputUpLog( void ) ;																			// �X�g�b�N����Ă���^�b�`�������ꂽ����N���A����
extern	TOUCHINPUTPOINT	GetTouchInputUpLogOne( int PeekFlag DEFAULTPARAM( = FALSE ) ) ;											// �X�g�b�N����Ă���^�b�`�������ꂽ��񂩂��ԌÂ�����ЂƂ擾����
extern	int				GetTouchInputUpLog( TOUCHINPUTPOINT *PointData, int GetNum, int PeekFlag DEFAULTPARAM( = FALSE ) ) ;	// �X�g�b�N����Ă���^�b�`�������ꂽ��񂩂�Â����Ɏw�萔�o�b�t�@�Ɏ擾����( �߂�l  -1:�G���[  0�ȏ�:�擾�������̐� )

#endif // DX_NON_INPUT















// DxMemory.cpp�֐��v���g�^�C�v�錾

// �������m�یn�֐�
extern	void*		DxAlloc(						               size_t AllocSize ,                    const char *File DEFAULTPARAM( = NULL ) , int Line DEFAULTPARAM( = -1 ) ) ;	// �w��̃T�C�Y�̃�������m�ۂ���( AllocSize:�m�ۂ��郁�����̃T�C�Y( �P��:byte )  File:DxAlloc��Ă񂾃\�[�X�t�@�C����( �f�o�b�O�p )  Line:DxAlloc��Ă񂾃\�[�X�t�@�C�����̍s�ԍ�( �f�o�b�O�p )�@�@�߂�l  NULL:�������̊m�ێ��s   NULL�ȊO:�m�ۂ����������̈�̐擪�A�h���X )
extern	void*		DxAllocAligned(					               size_t AllocSize , size_t Alignment , const char *File DEFAULTPARAM( = NULL ) , int Line DEFAULTPARAM( = -1 ) ) ;	// �w��̃T�C�Y�̃�������m�ۂ���( �A���C���w��� )( AllocSize:�m�ۂ��郁�����̃T�C�Y( �P��:byte )  Alignment:�m�ۂ��郁�����̈�̃A�h���X�l�̔{��  File:DxAlloc��Ă񂾃\�[�X�t�@�C����( �f�o�b�O�p )  Line:DxAlloc��Ă񂾃\�[�X�t�@�C�����̍s�ԍ�( �f�o�b�O�p )�@�@�߂�l  NULL:�������̊m�ێ��s   NULL�ȊO:�m�ۂ����������̈�̐擪�A�h���X )
extern	void*		DxCalloc(						               size_t AllocSize ,                    const char *File DEFAULTPARAM( = NULL ) , int Line DEFAULTPARAM( = -1 ) ) ;	// �w��̃T�C�Y�̃�������m�ۂ��āA�O�Ŗ��߂�A��������ɂO�Ŗ��߂�ȊO�� DxAlloc �Ɠ���͓���
extern	void*		DxCallocAligned(				               size_t AllocSize , size_t Alignment , const char *File DEFAULTPARAM( = NULL ) , int Line DEFAULTPARAM( = -1 ) ) ;	// �w��̃T�C�Y�̃�������m�ۂ��āA�O�Ŗ��߂�A��������ɂO�Ŗ��߂�ȊO�� DxAllocAligned �Ɠ���͓���
extern	void*		DxRealloc(						void *Memory , size_t AllocSize ,                    const char *File DEFAULTPARAM( = NULL ) , int Line DEFAULTPARAM( = -1 ) ) ;	// �������̍Ċm�ۂ�s��( Memory:�Ċm�ۂ�s���������̈�̐擪�A�h���X( DxAlloc �̖߂�l )  AllocSize:�V�����m�ۃT�C�Y�@File��Line �̐���� DxAlloc �̒��߂̒ʂ� �@�߂�l NULL:�������̍Ċm�ێ��s�@NULL�ȊO:�Ċm�ۂ����V�����������̈�̐擪�A�h���X�@)
extern	void*		DxReallocAligned(				void *Memory , size_t AllocSize , size_t Alignment , const char *File DEFAULTPARAM( = NULL ) , int Line DEFAULTPARAM( = -1 ) ) ;	// �������̍Ċm�ۂ�s��( �A���C���w��� )( Memory:�Ċm�ۂ�s���������̈�̐擪�A�h���X( DxAlloc �̖߂�l )  AllocSize:�V�����m�ۃT�C�Y   Alignment:�V�����m�ۂ��郁�����̈�̃A�h���X�l�̔{���@File��Line �̐���� DxAlloc �̒��߂̒ʂ� �@�߂�l NULL:�������̍Ċm�ێ��s�@NULL�ȊO:�Ċm�ۂ����V�����������̈�̐擪�A�h���X�@)
extern	void		DxFree(							void *Memory ) ;																				// ��������������( Memory:������郁�����̈�̐擪�A�h���X( DxAlloc �̖߂�l ) )
extern	size_t		DxSetAllocSizeTrap(				size_t Size ) ;																					// �񋓑Ώۂɂ��郁�����̊m�ۗe�ʂ�Z�b�g����
extern	int			DxSetAllocPrintFlag(			int Flag ) ;																					// �c�w���C�u������Ń������m�ۂ��s���鎞�ɏ���o�͂��邩�ǂ�����Z�b�g����
extern	size_t		DxGetAllocSize(					void ) ;																						// DxAlloc �� DxCalloc �Ŋm�ۂ��Ă��郁�����T�C�Y��擾����
extern	int			DxGetAllocNum(					void ) ;																						// DxAlloc �� DxCalloc �Ŋm�ۂ��Ă��郁�����̐���擾����
extern	void		DxDumpAlloc(					void ) ;																						// DxAlloc �� DxCalloc �Ŋm�ۂ��Ă��郁������񋓂���
extern	void		DxDrawAlloc(					int x, int y, int Width, int Height ) ;															// DxAlloc �� DxCalloc �Ŋm�ۂ��Ă��郁�����̏󋵂�`�悷��
extern	int			DxErrorCheckAlloc(				void ) ;																						// �m�ۂ�����������񂪔j�󂳂�Ă��Ȃ������ׂ�( -1:�j�󂠂�  0:�Ȃ� )
extern	int			DxSetAllocSizeOutFlag(			int Flag ) ;																					// ���������m�ہA������s����x�Ɋm�ۂ��Ă��郁�����̗e�ʂ�o�͂��邩�ǂ����̃t���O��Z�b�g����
extern	int			DxSetAllocMemoryErrorCheckFlag(	int Flag ) ;																					// �������̊m�ہA������s����x�Ɋm�ۂ��Ă��郁�����m�ۏ�񂪔j�����Ă��Ȃ������ׂ邩�ǂ����̃t���O��Z�b�g����














// DxBaseFunc.cpp �֐��v���g�^�C�v�錾

// �����R�[�h�֌W
extern	int				GetCharBytes( int CharCodeFormat /* DX_CHARCODEFORMAT_SHIFTJIS �� */ , const void *String ) ;	// ������̐擪�̕����̃o�C�g����擾����
extern	int				ConvertStringCharCodeFormat( int SrcCharCodeFormat /* DX_CHARCODEFORMAT_SHIFTJIS �� */ , const void *SrcString, int DestCharCodeFormat /* DX_CHARCODEFORMAT_SHIFTJIS �� */ , void *DestStringBuffer ) ;		// ������̕����R�[�h�`����ʂ̕����R�[�h�`���ɕϊ�����
extern	int				SetUseCharCodeFormat( int CharCodeFormat /* DX_CHARCODEFORMAT_SHIFTJIS �� */ ) ;		// ������̈����̕����R�[�h�`����ݒ肷��( ������`��n�֐��Ƃ��̑��ꕔ�֐������ )( UNICODE�łł͖��� )
extern	int				GetUseCharCodeFormat( void ) ;															// ������̈����̕����R�[�h�`����擾����( �߂�l�F�����R�[�h�`��( DX_CHARCODEFORMAT_SHIFTJIS �� ) )( UNICODE�łł͖��� )
extern	int				Get_wchar_t_CharCodeFormat( void ) ;													// wchar_t�^�̕����R�[�h�`����擾����( �߂�l�F DX_CHARCODEFORMAT_UTF16LE �Ȃ� )

// ������֌W
extern	void			strcpyDx(      TCHAR *Dest,                   const TCHAR *Src ) ;						// strcpy �Ɠ����̋@�\( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	void			strcpy_sDx(    TCHAR *Dest, size_t DestBytes, const TCHAR *Src ) ;						// strcpy_s �Ɠ����̋@�\( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	void			strpcpyDx(     TCHAR *Dest,                   const TCHAR *Src, int Pos ) ;				// �ʒu�w��t�� strcpy�APos �̓R�s�[�J�n�ʒu�@( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	void			strpcpy_sDx(   TCHAR *Dest, size_t DestBytes, const TCHAR *Src, int Pos ) ;				// �ʒu�w��t�� strcpy_s�APos �̓R�s�[�J�n�ʒu�@( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	void			strpcpy2Dx(    TCHAR *Dest,                   const TCHAR *Src, int Pos ) ;				// �ʒu�w��t�� strcpy�APos �̓R�s�[�J�n�ʒu( �S�p������ 1 ���� )�@( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	void			strpcpy2_sDx(  TCHAR *Dest, size_t DestBytes, const TCHAR *Src, int Pos ) ;				// �ʒu�w��t�� strcpy_s�APos �̓R�s�[�J�n�ʒu( �S�p������ 1 ���� )�@( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	void			strncpyDx(     TCHAR *Dest,                   const TCHAR *Src, int Num ) ;				// strncpy �Ɠ����̋@�\( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	void			strncpy_sDx(   TCHAR *Dest, size_t DestBytes, const TCHAR *Src, int Num ) ;				// strncpy_s �Ɠ����̋@�\( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	void			strncpy2Dx(    TCHAR *Dest,                   const TCHAR *Src, int Num ) ;				// strncpy �� Num ��������( �S�p������ 1 ���� )�ɂȂ�����́A�I�[�ɕK���k����������������( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	void			strncpy2_sDx(  TCHAR *Dest, size_t DestBytes, const TCHAR *Src, int Num ) ;				// strncpy_s �� Num ��������( �S�p������ 1 ���� )�ɂȂ�����́A�I�[�ɕK���k����������������( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	void			strrncpyDx(    TCHAR *Dest,                   const TCHAR *Src, int Num ) ;				// strncpy �̕�����̏I�[����̕������w���( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	void			strrncpy_sDx(  TCHAR *Dest, size_t DestBytes, const TCHAR *Src, int Num ) ;				// strncpy_s �̕�����̏I�[����̕������w���( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	void			strrncpy2Dx(   TCHAR *Dest,                   const TCHAR *Src, int Num ) ;				// strncpy �̕�����̏I�[����̕�����( �S�p������ 1 ���� )�w��ŁA�I�[�ɕK���k����������������( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	void			strrncpy2_sDx( TCHAR *Dest, size_t DestBytes, const TCHAR *Src, int Num ) ;				// strncpy_s �̕�����̏I�[����̕�����( �S�p������ 1 ���� )�w��ŁA�I�[�ɕK���k����������������( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	void			strpncpyDx(    TCHAR *Dest,                   const TCHAR *Src, int Pos, int Num ) ;	// strncpy �̃R�s�[�J�n�ʒu�w��ŁAPos �̓R�s�[�J�n�ʒu�ANum �͕�����( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	void			strpncpy_sDx(  TCHAR *Dest, size_t DestBytes, const TCHAR *Src, int Pos, int Num ) ;	// strncpy_s �̃R�s�[�J�n�ʒu�w��ŁAPos �̓R�s�[�J�n�ʒu�ANum �͕�����( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	void			strpncpy2Dx(   TCHAR *Dest,                   const TCHAR *Src, int Pos, int Num ) ;	// strncpy �̃R�s�[�J�n�ʒu�w��ŁAPos �̓R�s�[�J�n�ʒu( �S�p������ 1 ���� )�ANum �͕�����( �S�p������ 1 ���� )�A�I�[�ɕK���k����������������( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	void			strpncpy2_sDx( TCHAR *Dest, size_t DestBytes, const TCHAR *Src, int Pos, int Num ) ;	// strncpy_s �̃R�s�[�J�n�ʒu�w��ŁAPos �̓R�s�[�J�n�ʒu( �S�p������ 1 ���� )�ANum �͕�����( �S�p������ 1 ���� )�A�I�[�ɕK���k����������������( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	void			strcatDx(      TCHAR *Dest,                   const TCHAR *Src ) ;						// strcat �Ɠ����̋@�\( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	void			strcat_sDx(    TCHAR *Dest, size_t DestBytes, const TCHAR *Src ) ;						// strcat_s �Ɠ����̋@�\( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	size_t			strlenDx(      const TCHAR *Str ) ;												// strlen �Ɠ����̋@�\( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	size_t			strlen2Dx(     const TCHAR *Str ) ;												// strlen �̖߂�l��������( �S�p������ 1 ���� )�ɂȂ������( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	int				strcmpDx(      const TCHAR *Str1, const TCHAR *Str2 ) ;							// strcmp �Ɠ����̋@�\( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	int				stricmpDx(     const TCHAR *Str1, const TCHAR *Str2 ) ;							// stricmp �Ɠ����̋@�\( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	int				strncmpDx(     const TCHAR *Str1, const TCHAR *Str2, int Num ) ;				// strncmp �Ɠ����̋@�\( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	int				strncmp2Dx(    const TCHAR *Str1, const TCHAR *Str2, int Num ) ;				// strncmp �� Num ��������( �S�p������ 1 ���� )�ɂȂ������( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	int				strpncmpDx(    const TCHAR *Str1, const TCHAR *Str2, int Pos, int Num ) ;		// strncmp �̔�r�J�n�ʒu�w��ŁAPos �� Str1 �̔�r�J�n�ʒu�ANum ��������( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	int				strpncmp2Dx(   const TCHAR *Str1, const TCHAR *Str2, int Pos, int Num ) ;		// strncmp �̔�r�J�n�ʒu�w��ŁAPos �� Str1 �̔�r�J�n�ʒu( �S�p������ 1 ���� )�ANum ��������( �S�p������ 1 ���� )( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	DWORD			strgetchrDx(   const TCHAR *Str, int Pos, int *CharNums DEFAULTPARAM( = NULL ) ) ;	// ������̎w��̈ʒu�̕����R�[�h��擾����APos �͎擾����ʒu�ACharNums �͕�������������ϐ��̃A�h���X�A�߂�l�͕����R�[�h( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	DWORD			strgetchr2Dx(  const TCHAR *Str, int Pos, int *CharNums DEFAULTPARAM( = NULL ) ) ;	// ������̎w��̈ʒu�̕����R�[�h��擾����APos �͎擾����ʒu( �S�p������ 1 ���� )�ACharNums �͕�������������ϐ��̃A�h���X�A�߂�l�͕����R�[�h( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	int				strputchrDx(   TCHAR *Str, int Pos, DWORD CharCode ) ;							// ������̎w��̈ʒu�ɕ����R�[�h��������ށAPos �͏������ވʒu�ACharCode �͕����R�[�h�A�߂�l�͏������񂾕�����( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	int				strputchr2Dx(  TCHAR *Str, int Pos, DWORD CharCode ) ;							// ������̎w��̈ʒu�ɕ����R�[�h��������ށAPos �͏������ވʒu( �S�p������ 1 ���� )�ACharCode �͕����R�[�h�A�߂�l�͏������񂾕�����( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	const TCHAR *	strposDx(      const TCHAR *Str, int Pos ) ;									// ������̎w��̈ʒu�̃A�h���X��擾����APos �͎擾����ʒu�@( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	const TCHAR *	strpos2Dx(     const TCHAR *Str, int Pos ) ;									// ������̎w��̈ʒu�̃A�h���X��擾����APos �͎擾����ʒu( �S�p������ 1 ���� )�@( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	const TCHAR *	strstrDx(      const TCHAR *Str1, const TCHAR *Str2 ) ;							// strstr �Ɠ����̋@�\( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	int				strstr2Dx(     const TCHAR *Str1, const TCHAR *Str2 ) ;							// strstr �̖߂�l��������擪����̕�����( �S�p������ 1 ���� ) �ɂȂ������( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	const TCHAR *	strrstrDx(     const TCHAR *Str1, const TCHAR *Str2 ) ;							// strrstr �Ɠ����̋@�\( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	int				strrstr2Dx(    const TCHAR *Str1, const TCHAR *Str2 ) ;							// strrstr �̖߂�l��������擪����̕�����( �S�p������ 1 ���� ) �ɂȂ������( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	const TCHAR *	strchrDx(      const TCHAR *Str, DWORD CharCode ) ;								// strchr �Ɠ����̋@�\( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	int				strchr2Dx(     const TCHAR *Str, DWORD CharCode ) ;								// strchr �̖߂�l��������擪����̕�����( �S�p������ 1 ���� ) �ɂȂ������( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	const TCHAR *	strrchrDx(     const TCHAR *Str, DWORD CharCode ) ;								// strrchr �Ɠ����̋@�\( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	int				strrchr2Dx(    const TCHAR *Str, DWORD CharCode ) ;								// strrchr �̖߂�l��������擪����̕�����( �S�p������ 1 ���� ) �ɂȂ������( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	TCHAR *			struprDx(      TCHAR *Str ) ;													// strupr �Ɠ����̋@�\( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	int				vsprintfDx(    TCHAR *Buffer,                    const TCHAR *FormatString, va_list Arg ) ;	// vsprintf �Ɠ����̋@�\( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	int				vsnprintfDx(   TCHAR *Buffer, size_t BufferSize, const TCHAR *FormatString, va_list Arg ) ;	// vsnprintf �Ɠ����̋@�\( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	int				sprintfDx(     TCHAR *Buffer,                    const TCHAR *FormatString, ... ) ;			// sprintf �Ɠ����̋@�\( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	int				snprintfDx(    TCHAR *Buffer, size_t BufferSize, const TCHAR *FormatString, ... ) ;			// snprintf �Ɠ����̋@�\( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	TCHAR *			itoaDx(        int Value, TCHAR *Buffer,                     int Radix ) ;		// itoa �Ɠ����̋@�\( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	TCHAR *			itoa_sDx(      int Value, TCHAR *Buffer, size_t BufferBytes, int Radix ) ;		// itoa_s �Ɠ����̋@�\( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	int				atoiDx(        const TCHAR *Str ) ;												// atoi �Ɠ����̋@�\( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� ) 
extern	double			atofDx(        const TCHAR *Str ) ;												// atof �Ɠ����̋@�\( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	int				vsscanfDx(     const TCHAR *String, const TCHAR *FormatString, va_list Arg ) ;	// vsscanf �Ɠ����̋@�\( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )
extern	int				sscanfDx(      const TCHAR *String, const TCHAR *FormatString, ... ) ;			// sscanf �Ɠ����̋@�\( �}���`�o�C�g������łł͕����R�[�h�`���Ƃ��� SetUseCharCodeFormat �Őݒ肵���`�����g�p����܂� )


















// DxNetwork.cpp�֐��v���g�^�C�v�錾

#ifndef DX_NON_NETWORK

// �ʐM�֌W
extern	int			ProcessNetMessage(				int RunReleaseProcess DEFAULTPARAM( = FALSE ) ) ;										// �ʐM���b�Z�[�W�̏��������֐�

extern	int			GetHostIPbyName(				const TCHAR *HostName,							IPDATA      *IPDataBuf, int IPDataBufLength DEFAULTPARAM( = 1 ) , int *IPDataGetNum DEFAULTPARAM( = NULL ) ) ;		// �c�m�r�T�[�o�[��g���ăz�X�g������h�o�A�h���X��擾����( IPv4�� )
extern	int			GetHostIPbyNameWithStrLen(		const TCHAR *HostName, size_t HostNameLength,	IPDATA      *IPDataBuf, int IPDataBufLength DEFAULTPARAM( = 1 ) , int *IPDataGetNum DEFAULTPARAM( = NULL ) ) ;		// �c�m�r�T�[�o�[��g���ăz�X�g������h�o�A�h���X��擾����( IPv4�� )
extern	int			GetHostIPbyName_IPv6(			const TCHAR *HostName,							IPDATA_IPv6 *IPDataBuf, int IPDataBufLength DEFAULTPARAM( = 1 ) , int *IPDataGetNum DEFAULTPARAM( = NULL ) ) ;		// �c�m�r�T�[�o�[��g���ăz�X�g������h�o�A�h���X��擾����( IPv6�� )
extern	int			GetHostIPbyName_IPv6WithStrLen(	const TCHAR *HostName, size_t HostNameLength,	IPDATA_IPv6 *IPDataBuf, int IPDataBufLength DEFAULTPARAM( = 1 ) , int *IPDataGetNum DEFAULTPARAM( = NULL ) ) ;		// �c�m�r�T�[�o�[��g���ăz�X�g������h�o�A�h���X��擾����( IPv6�� )
extern 	int			ConnectNetWork(					IPDATA      IPData, int Port DEFAULTPARAM( = -1 ) ) ;									// ���}�V���ɐڑ�����( IPv4�� )
extern	int			ConnectNetWork_IPv6(			IPDATA_IPv6 IPData, int Port DEFAULTPARAM( = -1 ) ) ;									// ���}�V���ɐڑ�����( IPv6�� )
extern 	int			ConnectNetWork_ASync(			IPDATA      IPData, int Port DEFAULTPARAM( = -1 ) ) ;									// ���}�V���ɐڑ�����( IPv4�� )�A�񓯊���
extern	int			ConnectNetWork_IPv6_ASync(		IPDATA_IPv6 IPData, int Port DEFAULTPARAM( = -1 ) ) ;									// ���}�V���ɐڑ�����( IPv6�� )�A�񓯊���
extern 	int			PreparationListenNetWork(		int Port DEFAULTPARAM( = -1 ) ) ;														// �ڑ���󂯂����Ԃɂ���( IPv4�� )
extern 	int			PreparationListenNetWork_IPv6(	int Port DEFAULTPARAM( = -1 ) ) ;														// �ڑ���󂯂����Ԃɂ���( IPv6�� )
extern 	int			StopListenNetWork(				void ) ;																				// �ڑ���󂯂���Ԃ̉��
extern 	int			CloseNetWork(					int NetHandle ) ;																		// �ڑ���I������

extern 	int			GetNetWorkAcceptState(			int NetHandle ) ;																		// �ڑ���Ԃ�擾����
extern 	int			GetNetWorkDataLength(			int NetHandle ) ;																		// ��M�f�[�^�̗ʂ𓾂�
extern	int			GetNetWorkSendDataLength(		int NetHandle ) ;																		// �����M�̃f�[�^�̗ʂ𓾂� 
extern 	int			GetNewAcceptNetWork(			void ) ;																				// �V���ɐڑ������ʐM����𓾂�
extern 	int			GetLostNetWork(					void ) ;																				// �ڑ���ؒf���ꂽ�ʐM����𓾂�
extern 	int			GetNetWorkIP(					int NetHandle, IPDATA      *IpBuf ) ;													// �ڑ���̂h�o�𓾂�( IPv4�� )
extern 	int			GetNetWorkIP_IPv6(				int NetHandle, IPDATA_IPv6 *IpBuf ) ;													// �ڑ���̂h�o�𓾂�( IPv6�� )
extern	int			GetMyIPAddress(					IPDATA      *IpBuf, int IpBufLength DEFAULTPARAM( = 1 ) , int *IpNum DEFAULTPARAM( = NULL ) ) ;			// ������IPv4�𓾂�
extern	int			GetMyIPAddress_IPv6(			IPDATA_IPv6 *IpBuf, int IpBufLength DEFAULTPARAM( = 1 ) , int *IpNum DEFAULTPARAM( = NULL ) ) ;			// ������IPv6�𓾂�
extern	int			SetConnectTimeOutWait(			int Time ) ;																			// �ڑ��̃^�C���A�E�g�܂ł̎��Ԃ�ݒ肷��
extern	int			SetUseDXNetWorkProtocol(		int Flag ) ;																			// �c�w���C�u�����̒ʐM�`�Ԃ�g�����ǂ�����Z�b�g����
extern	int			GetUseDXNetWorkProtocol(		void ) ; 																				// �c�w���C�u�����̒ʐM�`�Ԃ�g�����ǂ�����擾����
extern	int			SetUseDXProtocol(				int Flag ) ;																			// SetUseDXNetWorkProtocol �̕ʖ�
extern	int			GetUseDXProtocol(				void ) ; 																				// GetUseDXNetWorkProtocol �̕ʖ�
extern	int			SetNetWorkCloseAfterLostFlag(	int Flag ) ;																			// �ڑ����ؒf���ꂽ����ɐڑ��n���h���������邩�ǂ����̃t���O��Z�b�g����
extern	int			GetNetWorkCloseAfterLostFlag(	void ) ;																				// �ڑ����ؒf���ꂽ����ɐڑ��n���h���������邩�ǂ����̃t���O��擾����
//extern	int			SetProxySetting( int UseFlag, const char *Address, int Port ) ;														// �g�s�s�o�ʐM�Ŏg�p����v���L�V�ݒ��s��
//extern	int			GetProxySetting( int *UseFlagBuffer, char *AddressBuffer, int *PortBuffer ) ;										// �g�s�s�o�ʐM�Ŏg�p����v���L�V�ݒ��擾����
//extern	int			SetIEProxySetting( void ) ;																							// �h�d�̃v���L�V�ݒ��K������

extern 	int			NetWorkRecv(			int NetHandle, void *Buffer, int Length ) ;														// ��M�����f�[�^��ǂݍ���
extern	int			NetWorkRecvToPeek(		int NetHandle, void *Buffer, int Length ) ;														// ��M�����f�[�^��ǂݍ��ށA�ǂݍ��񂾃f�[�^�̓o�b�t�@����폜����Ȃ�
extern	int			NetWorkRecvBufferClear(	int NetHandle ) ;																				// ��M�����f�[�^��N���A����
extern 	int			NetWorkSend(			int NetHandle, const void *Buffer, int Length ) ;												// �f�[�^�𑗐M����

extern	int			MakeUDPSocket(			int RecvPort DEFAULTPARAM( = -1 ) ) ;															// UDP��g�p�����ʐM��s���\�P�b�g�n���h����쐬����( RecvPort �� -1 �ɂ���Ƒ��M��p�̃\�P�b�g�n���h���ɂȂ�܂� )
extern	int			MakeUDPSocket_IPv6(		int RecvPort DEFAULTPARAM( = -1 ) ) ;															// UDP��g�p�����ʐM��s���\�P�b�g�n���h����쐬����( RecvPort �� -1 �ɂ���Ƒ��M��p�̃\�P�b�g�n���h���ɂȂ�܂� )( IPv6�� )
extern	int			DeleteUDPSocket(		int NetUDPHandle ) ;																			// UDP��g�p�����ʐM��s���\�P�b�g�n���h����폜����
extern	int			NetWorkSendUDP(			int NetUDPHandle, IPDATA       SendIP, int SendPort,  const void *Buffer, int Length ) ;			// UDP��g�p�����ʐM�Ŏw��̂h�o�Ƀf�[�^�𑗐M����ALength �͍ő�65507�ASendPort �� -1 �ɂ���� MakeUDPSocket �� RecvPort �œn�����|�[�g���g�p����܂�( �߂�l  0�ȏ�;���M�ł����f�[�^�T�C�Y  -1:�G���[  -2:���M�f�[�^���傫������  -3:���M�������ł��Ă��Ȃ�  )
extern	int			NetWorkSendUDP_IPv6(	int NetUDPHandle, IPDATA_IPv6  SendIP, int SendPort,  const void *Buffer, int Length ) ;			// UDP��g�p�����ʐM�Ŏw��̂h�o�Ƀf�[�^�𑗐M����ALength �͍ő�65507�ASendPort �� -1 �ɂ���� MakeUDPSocket �� RecvPort �œn�����|�[�g���g�p����܂�( �߂�l  0�ȏ�;���M�ł����f�[�^�T�C�Y  -1:�G���[  -2:���M�f�[�^���傫������  -3:���M�������ł��Ă��Ȃ�  )( IPv6�� )
extern	int			NetWorkRecvUDP(			int NetUDPHandle, IPDATA      *RecvIP, int *RecvPort,       void *Buffer, int Length, int Peek ) ;	// UDP��g�p�����ʐM�Ńf�[�^���M����APeek �� TRUE ��n���Ǝ�M�ɐ������Ă�f�[�^���M�L���[����폜���܂���( �߂�l  0�ȏ�:��M�����f�[�^�̃T�C�Y  -1:�G���[  -2:�o�b�t�@�̃T�C�Y������Ȃ�  -3:��M�f�[�^���Ȃ� )
extern	int			NetWorkRecvUDP_IPv6(	int NetUDPHandle, IPDATA_IPv6 *RecvIP, int *RecvPort,       void *Buffer, int Length, int Peek ) ;	// UDP��g�p�����ʐM�Ńf�[�^���M����APeek �� TRUE ��n���Ǝ�M�ɐ������Ă�f�[�^���M�L���[����폜���܂���( �߂�l  0�ȏ�:��M�����f�[�^�̃T�C�Y  -1:�G���[  -2:�o�b�t�@�̃T�C�Y������Ȃ�  -3:��M�f�[�^���Ȃ� )( IPv6�� )
//extern int		CheckNetWorkSendUDP(	int NetUDPHandle ) ;																			// UDP��g�p�����ʐM�Ńf�[�^�����M�ł����Ԃ��ǂ����𒲂ׂ�( �߂�l  -1:�G���[  TRUE:���M�\  FALSE:���M�s�\ )
extern	int			CheckNetWorkRecvUDP(	int NetUDPHandle ) ;																			// UDP��g�p�����ʐM�ŐV���Ȏ�M�f�[�^�����݂��邩�ǂ����𒲂ׂ�( �߂�l  -1:�G���[  TRUE:��M�f�[�^����  FALSE:��M�f�[�^�Ȃ� )

/*	�g�p�s��
extern	int			HTTP_FileDownload(			const char *FileURL, const char *SavePath DEFAULTPARAM( = NULL ) , void **SaveBufferP DEFAULTPARAM( = NULL ) , int *FileSize DEFAULTPARAM( = NULL ) , char **ParamList DEFAULTPARAM( = NULL ) ) ;						// HTTP ��g�p���ăl�b�g���[�N��̃t�@�C����_�E�����[�h����
extern	int			HTTP_GetFileSize(			const char *FileURL ) ;																		// HTTP ��g�p���ăl�b�g���[�N��̃t�@�C���̃T�C�Y�𓾂�

extern	int			HTTP_StartFileDownload(		const char *FileURL, const char *SavePath, void **SaveBufferP DEFAULTPARAM( = NULL ) , char **ParamList DEFAULTPARAM( = NULL ) ) ;	// HTTP ��g�p�����l�b�g���[�N��̃t�@�C����_�E�����[�h���鏈����J�n����
extern	int			HTTP_StartGetFileSize(		const char *FileURL ) ;																		// HTTP ��g�p�����l�b�g���[�N��̃t�@�C���̃T�C�Y�𓾂鏈����J�n����
extern	int			HTTP_Close(					int HttpHandle ) ;																			// HTTP �̏�����I�����A�n���h����������
extern	int			HTTP_CloseAll(				void ) ;																					// �S�Ẵn���h���ɑ΂��� HTTP_Close ��s��
extern	int			HTTP_GetState(				int HttpHandle ) ;																			// HTTP �����̌��݂̏�Ԃ𓾂�( NET_RES_COMPLETE �� )
extern	int			HTTP_GetError(				int HttpHandle ) ;																			// HTTP �����ŃG���[�����������ꍇ�A�G���[�̓�e�𓾂�( HTTP_ERR_NONE �� )
extern	int			HTTP_GetDownloadFileSize(	int HttpHandle ) ;																			// HTTP �����őΏۂƂȂ��Ă���t�@�C���̃T�C�Y�𓾂�( �߂�l: -1 = �G���[�E�Ⴕ���͂܂��t�@�C���̃T�C�Y��擾���Ă��Ȃ�  0�ȏ� = �t�@�C���̃T�C�Y )
extern	int			HTTP_GetDownloadedFileSize( int HttpHandle ) ;																			// HTTP �����Ŋ��Ƀ_�E�����[�h�����t�@�C���̃T�C�Y��擾����

extern	int			fgetsForNetHandle(			int NetHandle, char *strbuffer ) ;															// fgets �̃l�b�g���[�N�n���h����( -1:�擾�ł��� 0:�擾�ł��� )
extern	int			URLAnalys(					const char *URL, char *HostBuf DEFAULTPARAM( = NULL ) , char *PathBuf DEFAULTPARAM( = NULL ) , char *FileNameBuf DEFAULTPARAM( = NULL ) , int *PortBuf DEFAULTPARAM( = NULL ) ) ;	// �t�q�k���͂���
extern	int			URLConvert(					char *URL, int ParamConvert DEFAULTPARAM( = TRUE ) , int NonConvert DEFAULTPARAM( = FALSE ) ) ;				// HTTP �ɓn���Ȃ��L�����g��ꂽ�������n����悤�ȕ�����ɕϊ�����( �߂�l: -1 = �G���[  0�ȏ� = �ϊ���̕�����̃T�C�Y )
extern	int			URLParamAnalysis(			char **ParamList, char **ParamStringP ) ;													// HTTP �p�p�����[�^���X�g�����̃p�����[�^�������쐬����( �߂�l:  -1 = �G���[  0�ȏ� = �p�����[�^�̕�����̒��� )
*/

#endif // DX_NON_NETWORK
















// DxInputString.cpp�֐��v���g�^�C�v�錾

#ifndef DX_NON_INPUTSTRING

// �����R�[�h�o�b�t�@����֌W
extern	int			StockInputChar(		TCHAR CharCode ) ;								// �����R�[�h�o�b�t�@�ɕ����R�[�h��X�g�b�N����
extern	int			ClearInputCharBuf(	void ) ;										// �����R�[�h�o�b�t�@��N���A����
extern	TCHAR		GetInputChar(		int DeleteFlag ) ;								// �����R�[�h�o�b�t�@�ɗ��܂����f�[�^���當���R�[�h���擾����
extern	TCHAR		GetInputCharWait(	int DeleteFlag ) ;								// �����R�[�h�o�b�t�@�ɗ��܂����f�[�^���當���R�[�h���擾����A�o�b�t�@�ɂȂɂ�����R�[�h���Ȃ��ꍇ�͕����R�[�h���o�b�t�@�Ɉꕶ�������܂�܂ő҂�

extern	int			GetOneChar(			TCHAR *CharBuffer, int DeleteFlag ) ;			// �����R�[�h�o�b�t�@�ɗ��܂����f�[�^����P�������擾����
extern	int			GetOneCharWait(		TCHAR *CharBuffer, int DeleteFlag ) ;			// �����R�[�h�o�b�t�@�ɗ��܂����f�[�^����P�������擾����A�o�b�t�@�ɉ�������R�[�h���Ȃ��ꍇ�͕����R�[�h���o�b�t�@�Ɉꕶ�������܂�܂ő҂�
extern	int			GetCtrlCodeCmp(		TCHAR Char ) ;									// �w��̕����R�[�h���A�X�L�[�R���g���[���R�[�h�����ׂ�

#ifndef DX_NON_KEYEX

extern	int			DrawIMEInputString(				int x, int y,                                 int SelectStringNum , int DrawCandidateList DEFAULTPARAM( = TRUE ) ) ;	// ��ʏ�ɓ��͒��̕������`�悷��
extern	int			DrawIMEInputExtendString(		int x, int y, double ExRateX, double ExRateY, int SelectStringNum , int DrawCandidateList DEFAULTPARAM( = TRUE ) ) ;	// ��ʏ�ɓ��͒��̕������`�悷��( �g�嗦�t�� )
extern	int			SetUseIMEFlag(					int UseFlag ) ;							// �h�l�d��g�p���邩�ǂ�����ݒ肷��
extern	int			GetUseIMEFlag(					void ) ;								// �h�l�d��g�p���邩�ǂ����̐ݒ��擾����
extern	int			SetInputStringMaxLengthIMESync(	int Flag ) ;							// �h�l�d�œ��͂ł���ő啶������ MakeKeyInput �̐ݒ�ɍ��킹�邩�ǂ�����Z�b�g����( TRUE:���킹��  FALSE:���킹�Ȃ�(�f�t�H���g) )
extern	int			SetIMEInputStringMaxLength(		int Length ) ;							// �h�l�d�ň�x�ɓ��͂ł���ő啶������ݒ肷��( 0:�����Ȃ�  1�ȏ�:�w��̕������Ő��� )

#endif // DX_NON_KEYEX

#endif // DX_NON_INPUTSTRING

extern	int			GetStringPoint(				const TCHAR *String,                      int Point ) ;		// �S�p�����A���p�������藐��钆����w��̕������ł̔��p�������𓾂�
extern	int			GetStringPointWithStrLen(	const TCHAR *String, size_t StringLength, int Point ) ;		// �S�p�����A���p�������藐��钆����w��̕������ł̔��p�������𓾂�
extern	int			GetStringPoint2(			const TCHAR *String,                      int Point ) ;		// �S�p�����A���p�������藐��钆����w��̔��p�������ł̕������𓾂�
extern	int			GetStringPoint2WithStrLen(	const TCHAR *String, size_t StringLength, int Point ) ;		// �S�p�����A���p�������藐��钆����w��̔��p�������ł̕������𓾂�
extern	int			GetStringLength(			const TCHAR *String ) ;										// �S�p�����A���p�������藐��钆���當������擾����

#ifndef DX_NON_FONT
extern	int			DrawObtainsString(						int x, int y, int AddY, const TCHAR *String,                      unsigned int StrColor, unsigned int StrEdgeColor DEFAULTPARAM( = 0 ) , int FontHandle DEFAULTPARAM( = -1 ) , unsigned int SelectBackColor DEFAULTPARAM( = 0xffffffff ) , unsigned int SelectStrColor DEFAULTPARAM( = 0 ) , unsigned int SelectStrEdgeColor DEFAULTPARAM( = 0xffffffff ) , int SelectStart DEFAULTPARAM( = -1 ) , int SelectEnd DEFAULTPARAM( = -1 ) , int *LineCount DEFAULTPARAM( = NULL ) ) ;		// �`��\�̈�Ɏ��܂�悤�ɉ��s���Ȃ��當�����`��
extern	int			DrawObtainsNString(						int x, int y, int AddY, const TCHAR *String, size_t StringLength, unsigned int StrColor, unsigned int StrEdgeColor DEFAULTPARAM( = 0 ) , int FontHandle DEFAULTPARAM( = -1 ) , unsigned int SelectBackColor DEFAULTPARAM( = 0xffffffff ) , unsigned int SelectStrColor DEFAULTPARAM( = 0 ) , unsigned int SelectStrEdgeColor DEFAULTPARAM( = 0xffffffff ) , int SelectStart DEFAULTPARAM( = -1 ) , int SelectEnd DEFAULTPARAM( = -1 ) , int *LineCount DEFAULTPARAM( = NULL ) ) ;		// �`��\�̈�Ɏ��܂�悤�ɉ��s���Ȃ��當�����`��
extern	int			DrawObtainsString_CharClip(				int x, int y, int AddY, const TCHAR *String,                      unsigned int StrColor, unsigned int StrEdgeColor DEFAULTPARAM( = 0 ) , int FontHandle DEFAULTPARAM( = -1 ) , unsigned int SelectBackColor DEFAULTPARAM( = 0xffffffff ) , unsigned int SelectStrColor DEFAULTPARAM( = 0 ) , unsigned int SelectStrEdgeColor DEFAULTPARAM( = 0xffffffff ) , int SelectStart DEFAULTPARAM( = -1 ) , int SelectEnd DEFAULTPARAM( = -1 ) , int *LineCount DEFAULTPARAM( = NULL ) ) ;		// �`��\�̈�Ɏ��܂�悤�ɉ��s���Ȃ��當�����`��( �N���b�v�������P�� )
extern	int			DrawObtainsNString_CharClip(			int x, int y, int AddY, const TCHAR *String, size_t StringLength, unsigned int StrColor, unsigned int StrEdgeColor DEFAULTPARAM( = 0 ) , int FontHandle DEFAULTPARAM( = -1 ) , unsigned int SelectBackColor DEFAULTPARAM( = 0xffffffff ) , unsigned int SelectStrColor DEFAULTPARAM( = 0 ) , unsigned int SelectStrEdgeColor DEFAULTPARAM( = 0xffffffff ) , int SelectStart DEFAULTPARAM( = -1 ) , int SelectEnd DEFAULTPARAM( = -1 ) , int *LineCount DEFAULTPARAM( = NULL ) ) ;		// �`��\�̈�Ɏ��܂�悤�ɉ��s���Ȃ��當�����`��( �N���b�v�������P�� )
extern	int			DrawObtainsString_WordClip(				int x, int y, int AddY, const TCHAR *String,                      unsigned int StrColor, unsigned int StrEdgeColor DEFAULTPARAM( = 0 ) , int FontHandle DEFAULTPARAM( = -1 ) , unsigned int SelectBackColor DEFAULTPARAM( = 0xffffffff ) , unsigned int SelectStrColor DEFAULTPARAM( = 0 ) , unsigned int SelectStrEdgeColor DEFAULTPARAM( = 0xffffffff ) , int SelectStart DEFAULTPARAM( = -1 ) , int SelectEnd DEFAULTPARAM( = -1 ) , int *LineCount DEFAULTPARAM( = NULL ) ) ;		// �`��\�̈�Ɏ��܂�悤�ɉ��s���Ȃ��當�����`��( �N���b�v���P��P�� )
extern	int			DrawObtainsNString_WordClip(			int x, int y, int AddY, const TCHAR *String, size_t StringLength, unsigned int StrColor, unsigned int StrEdgeColor DEFAULTPARAM( = 0 ) , int FontHandle DEFAULTPARAM( = -1 ) , unsigned int SelectBackColor DEFAULTPARAM( = 0xffffffff ) , unsigned int SelectStrColor DEFAULTPARAM( = 0 ) , unsigned int SelectStrEdgeColor DEFAULTPARAM( = 0xffffffff ) , int SelectStart DEFAULTPARAM( = -1 ) , int SelectEnd DEFAULTPARAM( = -1 ) , int *LineCount DEFAULTPARAM( = NULL ) ) ;		// �`��\�̈�Ɏ��܂�悤�ɉ��s���Ȃ��當�����`��( �N���b�v���P��P�� )
extern	int			GetObtainsStringCharPosition(			int x, int y, int AddY, const TCHAR *String, int StrLen, int *PosX, int *PosY, int FontHandle DEFAULTPARAM( = -1 ) , int *LineCount DEFAULTPARAM( = NULL ) ) ;		// �`��\�̈�Ɏ��܂�悤�ɉ��s���Ȃ��當�����`�悵���ꍇ�̕�����̖��[�̍��W��擾����
extern	int			GetObtainsStringCharPosition_CharClip(	int x, int y, int AddY, const TCHAR *String, int StrLen, int *PosX, int *PosY, int FontHandle DEFAULTPARAM( = -1 ) , int *LineCount DEFAULTPARAM( = NULL ) ) ;		// �`��\�̈�Ɏ��܂�悤�ɉ��s���Ȃ��當�����`�悵���ꍇ�̕�����̖��[�̍��W��擾����( �N���b�v�������P�� )
extern	int			GetObtainsStringCharPosition_WordClip(	int x, int y, int AddY, const TCHAR *String, int StrLen, int *PosX, int *PosY, int FontHandle DEFAULTPARAM( = -1 ) , int *LineCount DEFAULTPARAM( = NULL ) ) ;		// �`��\�̈�Ɏ��܂�悤�ɉ��s���Ȃ��當�����`�悵���ꍇ�̕�����̖��[�̍��W��擾����( �N���b�v���P��P�� )
#endif // DX_NON_FONT
extern	int			DrawObtainsBox(					int x1, int y1, int x2, int y2, int AddY, unsigned int Color, int FillFlag ) ;																																										// �`��\�̈�Ɏ��܂�悤�ɕ␳������Ȃ����`��`��

#ifndef DX_NON_INPUTSTRING

#ifndef DX_NON_KEYEX

extern	int			InputStringToCustom(			int x, int y, size_t BufLength, TCHAR *StrBuffer, int CancelValidFlag, int SingleCharOnlyFlag, int NumCharOnlyFlag, int DoubleCharOnlyFlag DEFAULTPARAM( = FALSE ) , int EnableNewLineFlag DEFAULTPARAM( = FALSE ) , int DisplayCandidateList DEFAULTPARAM( = TRUE ) ) ;		// ������̓��͎擾

extern	int			KeyInputString(					int x, int y, size_t CharMaxLength, TCHAR *StrBuffer, int CancelValidFlag ) ;													// ������̓��͎擾
extern	int			KeyInputSingleCharString(		int x, int y, size_t CharMaxLength, TCHAR *StrBuffer, int CancelValidFlag ) ;													// ���p������݂̂̓��͎擾
extern	int			KeyInputNumber(					int x, int y, int MaxNum, int MinNum, int CancelValidFlag ) ;																	// ���l�̓��͎擾

extern	int			GetIMEInputModeStr(				TCHAR *GetBuffer ) ;																											// IME�̓��̓��[�h�������擾����
extern	const IMEINPUTDATA* GetIMEInputData(		void ) ;																														// IME�œ��͒��̕�����̏���擾����
extern	int			SetIMEInputString(				const TCHAR *String ) ;																											// IME�œ��͒��̕������ύX����( IME�ŕ��������͒��ł͂Ȃ������ꍇ�͉���N����܂��� )
extern	int			SetIMEInputStringWithStrLen(	const TCHAR *String, size_t StringLength ) ;																					// IME�œ��͒��̕������ύX����( IME�ŕ��������͒��ł͂Ȃ������ꍇ�͉���N����܂��� )
extern	int			SetKeyInputStringColor(			ULONGLONG NmlStr, ULONGLONG NmlCur, ULONGLONG IMEStrBack, ULONGLONG IMECur, ULONGLONG IMELine, ULONGLONG IMESelectStr, ULONGLONG IMEModeStr , ULONGLONG NmlStrE DEFAULTPARAM( = 0 ) , ULONGLONG IMESelectStrE DEFAULTPARAM( = 0 ) , ULONGLONG IMEModeStrE DEFAULTPARAM( = 0 ) , ULONGLONG IMESelectWinE DEFAULTPARAM( = ULL_PARAM( 0xffffffffffffffff ) ) ,	ULONGLONG IMESelectWinF DEFAULTPARAM( = ULL_PARAM( 0xffffffffffffffff ) ) , ULONGLONG SelectStrBackColor DEFAULTPARAM( = ULL_PARAM( 0xffffffffffffffff ) ) , ULONGLONG SelectStrColor DEFAULTPARAM( = ULL_PARAM( 0xffffffffffffffff ) ) , ULONGLONG SelectStrEdgeColor DEFAULTPARAM( = ULL_PARAM( 0xffffffffffffffff ) ) , ULONGLONG IMEStr DEFAULTPARAM( = ULL_PARAM( 0xffffffffffffffff ) ) , ULONGLONG IMEStrE DEFAULTPARAM( = ULL_PARAM( 0xffffffffffffffff ) ) ) ;	// ( SetKeyInputStringColor2 �̋��֐� )InputString�֐��g�p���̕����̊e�F��ύX����
extern	int			SetKeyInputStringColor2(		int TargetColor /* DX_KEYINPSTRCOLOR_NORMAL_STR �� */ , unsigned int Color ) ;													// InputString�֐��g�p���̕����̊e�F��ύX����
extern	int			ResetKeyInputStringColor2(		int TargetColor /* DX_KEYINPSTRCOLOR_NORMAL_STR �� */ ) ;																		// SetKeyInputStringColor2 �Őݒ肵���F��f�t�H���g�ɖ߂�
extern	int			SetKeyInputStringFont(			int FontHandle ) ;																												// �L�[���͕�����`��֘A�Ŏg�p����t�H���g�̃n���h����ύX����(-1�Ńf�t�H���g�̃t�H���g�n���h��)
extern	int			SetKeyInputStringEndCharaMode(	int EndCharaMode /* DX_KEYINPSTR_ENDCHARAMODE_OVERWRITE �� */ ) ;																// �L�[���͕����񏈗��̓��͕����������E�ɒB���Ă����ԂŁA������̖��[�����œ��͂��s��ꂽ�ꍇ�̏������[�h��ύX����
extern	int			DrawKeyInputModeString(			int x, int y ) ;																												// ���̓��[�h�������`�悷��

extern	int			InitKeyInput(					void ) ;																														// �L�[���̓f�[�^������
extern	int			MakeKeyInput(					size_t MaxStrLength, int CancelValidFlag, int SingleCharOnlyFlag, int NumCharOnlyFlag, int DoubleCharOnlyFlag DEFAULTPARAM( = FALSE ) , int EnableNewLineFlag DEFAULTPARAM( = FALSE ) ) ;			// �V�����L�[���̓n���h���̍쐬
extern	int			DeleteKeyInput(					int InputHandle ) ;																												// �L�[���̓n���h���̍폜
extern	int			SetActiveKeyInput(				int InputHandle ) ;																												// �w��̃L�[���̓n���h����A�N�e�B�u�ɂ���( -1 ��w�肷��ƃA�N�e�B�u�ȃL�[���̓n���h����������ԂɂȂ�܂� )
extern	int			GetActiveKeyInput(				void ) ;																														// ���݃A�N�e�B�u�ɂȂ��Ă���L�[���̓n���h����擾����
extern	int			CheckKeyInput(					int InputHandle ) ;																												// �L�[���̓n���h���̓��͂��I�����Ă��邩�擾����
extern	int			ReStartKeyInput(				int InputHandle ) ;																												// ���͂����������L�[���̓n���h����ēx�ҏW��Ԃɖ߂�
extern	int			ProcessActKeyInput(				void ) ;																														// �L�[���̓n���h�������֐�
extern	int			DrawKeyInputString(				int x, int y,                                 int InputHandle , int DrawCandidateList DEFAULTPARAM( = TRUE ) ) ;				// �L�[���̓n���h���̓��͒����̕`��
extern	int			DrawKeyInputExtendString(		int x, int y, double ExRateX, double ExRateY, int InputHandle , int DrawCandidateList DEFAULTPARAM( = TRUE ) ) ;				// �L�[���̓n���h���̓��͒����̕`��( �g�嗦�w��t�� )
extern	int			SetKeyInputDrawArea(			int x1, int y1, int x2, int y2, int InputHandle ) ;																				// �L�[���̓n���h���̓��͒��������`�悷��ۂ̕`��͈͂�ݒ肷��

extern	int			SetKeyInputSelectArea(			int  SelectStart, int  SelectEnd, int InputHandle ) ;																			// �L�[���̓n���h���̎w��̗̈��I���Ԃɂ���( SelectStart �� SelectEnd �� -1 ��w�肷��ƑI���Ԃ��������܂� )
extern	int			GetKeyInputSelectArea(			int *SelectStart, int *SelectEnd, int InputHandle ) ;																			// �L�[���̓n���h���̑I��̈��擾����
extern	int			SetKeyInputDrawStartPos(		int DrawStartPos, int InputHandle ) ;																							// �L�[���̓n���h���̕`��J�n�����ʒu��ݒ肷��
extern	int			GetKeyInputDrawStartPos(		int InputHandle ) ;																												// �L�[���̓n���h���̕`��J�n�����ʒu��擾����
extern	int			SetKeyInputCursorBrinkTime(		int Time ) ;																													// �L�[���̓n���h���̃L�[���͎��̃J�[�\���̓_�ł��鑁����Z�b�g����
extern	int			SetKeyInputCursorBrinkFlag(		int Flag ) ;																													// �L�[���̓n���h���̃L�[���͎��̃J�[�\����_�ł����邩�ǂ�����Z�b�g����
extern	int			SetKeyInputString(				const TCHAR *String,                      int InputHandle ) ;																	// �L�[���̓n���h���Ɏw��̕������Z�b�g����
extern	int			SetKeyInputStringWithStrLen(	const TCHAR *String, size_t StringLength, int InputHandle ) ;																	// �L�[���̓n���h���Ɏw��̕������Z�b�g����
extern	int			SetKeyInputNumber(				int   Number,                             int InputHandle ) ;																	// �L�[���̓n���h���Ɏw��̐��l�𕶎��ɒu�������ăZ�b�g����
extern	int			SetKeyInputNumberToFloat(		float Number,                             int InputHandle ) ;																	// �L�[���̓n���h���Ɏw��̕��������_�l�𕶎��ɒu�������ăZ�b�g����
extern	int			GetKeyInputString(				TCHAR *StrBuffer,                         int InputHandle ) ;																	// �L�[���̓n���h���̓��͒��̕������擾����
extern	int			GetKeyInputNumber(				int InputHandle ) ;																												// �L�[���̓n���h���̓��͒��̕�����𐮐��l�Ƃ��Ď擾����
extern	float		GetKeyInputNumberToFloat(		int InputHandle ) ;																												// �L�[���̓n���h���̓��͒��̕�����𕂓������_�l�Ƃ��Ď擾����
extern	int			SetKeyInputCursorPosition(		int Position,        int InputHandle ) ;																						// �L�[���̓n���h���̌��݂̃J�[�\���ʒu��ݒ肷��
extern	int			GetKeyInputCursorPosition(		int InputHandle ) ;																												// �L�[���̓n���h���̌��݂̃J�[�\���ʒu��擾����

#endif // DX_NON_KEYEX

#endif // DX_NON_INPUTSTRING










// DxFile.cpp�֐��v���g�^�C�v�錾

// �t�@�C���A�N�Z�X�֐�
extern	int			FileRead_open(						const TCHAR *FilePath,                        int ASync DEFAULTPARAM( = FALSE ) ) ;	// �t�@�C����J��
extern	int			FileRead_open_WithStrLen(			const TCHAR *FilePath, size_t FilePathLength, int ASync DEFAULTPARAM( = FALSE ) ) ;	// �t�@�C����J��
extern	int			FileRead_open_mem(					const void *FileImage, size_t FileImageSize ) ;					// �������ɓW�J���ꂽ�t�@�C����J��
extern	LONGLONG	FileRead_size(						const TCHAR *FilePath ) ;										// �t�@�C���̃T�C�Y��擾����
extern	LONGLONG	FileRead_size_WithStrLen(			const TCHAR *FilePath, size_t FilePathLength ) ;				// �t�@�C���̃T�C�Y��擾����
extern	LONGLONG	FileRead_size_handle(				int FileHandle ) ;												// �t�@�C���̃T�C�Y��擾����( �t�@�C���n���h���g�p�� )
extern	int			FileRead_close(						int FileHandle ) ;												// �t�@�C�������
extern	LONGLONG	FileRead_tell(						int FileHandle ) ;												// �t�@�C���|�C���^�̓ǂݍ��݈ʒu��擾����
extern	int			FileRead_seek(						int FileHandle , LONGLONG Offset , int Origin ) ;				// �t�@�C���|�C���^�̓ǂݍ��݈ʒu��ύX����
extern	int			FileRead_read(						void *Buffer , int ReadSize , int FileHandle ) ;				// �t�@�C������f�[�^��ǂݍ���
extern	int			FileRead_idle_chk(					int FileHandle ) ;												// �t�@�C���ǂݍ��݂��������Ă��邩�ǂ�����擾����
extern	int			FileRead_eof(						int FileHandle ) ;												// �t�@�C���̓ǂݍ��݈ʒu���I�[�ɒB���Ă��邩�ǂ�����擾����
extern	int			FileRead_set_format(				int FileHandle, int CharCodeFormat /* DX_CHARCODEFORMAT_SHIFTJIS �� */ ) ;	// �t�@�C���̕����R�[�h�`����ݒ肷��( �e�L�X�g�t�@�C���p )
extern	int			FileRead_gets(						TCHAR *Buffer , int BufferSize , int FileHandle ) ;				// �t�@�C�����當�����ǂݏo��
extern	TCHAR		FileRead_getc(						int FileHandle ) ;												// �t�@�C������ꕶ���ǂݏo��
extern	int			FileRead_scanf(						int FileHandle , const TCHAR *Format , ... ) ;					// �t�@�C�����珑�������ꂽ�f�[�^��ǂݏo��

extern	DWORD_PTR	FileRead_createInfo(				const TCHAR *ObjectPath ) ;										// �t�@�C�����n���h����쐬����( �߂�l  -1:�G���[  -1�ȊO:�t�@�C�����n���h�� )
extern	DWORD_PTR	FileRead_createInfo_WithStrLen(		const TCHAR *ObjectPath, size_t ObjectPathLength ) ;			// �t�@�C�����n���h����쐬����( �߂�l  -1:�G���[  -1�ȊO:�t�@�C�����n���h�� )
extern	int			FileRead_getInfoNum(				DWORD_PTR FileInfoHandle ) ;									// �t�@�C�����n���h�����̃t�@�C���̐���擾����
extern	int			FileRead_getInfo(					int Index , FILEINFO *Buffer , DWORD_PTR FileInfoHandle ) ;		// �t�@�C�����n���h�����̃t�@�C���̏���擾����
extern	int			FileRead_deleteInfo(				DWORD_PTR FileInfoHandle ) ;									// �t�@�C�����n���h����폜����

extern	DWORD_PTR	FileRead_findFirst(					const TCHAR *FilePath,                        FILEINFO *Buffer ) ; // �w��̃t�@�C�����̓t�H���_�̏���擾���A�t�@�C�������n���h����쐬����( �߂�l: -1=�G���[  -1�ȊO=�t�@�C�������n���h�� )
extern	DWORD_PTR	FileRead_findFirst_WithStrLen(		const TCHAR *FilePath, size_t FilePathLength, FILEINFO *Buffer ) ; // �w��̃t�@�C�����̓t�H���_�̏���擾���A�t�@�C�������n���h����쐬����( �߂�l: -1=�G���[  -1�ȊO=�t�@�C�������n���h�� )
extern	int			FileRead_findNext(					DWORD_PTR FindHandle, FILEINFO *Buffer ) ;						// ����̍��v���鎟�̃t�@�C���̏���擾����( �߂�l: -1=�G���[  0=���� )
extern	int			FileRead_findClose(					DWORD_PTR FindHandle ) ;										// �t�@�C�������n���h�������( �߂�l: -1=�G���[  0=���� )

extern	int			FileRead_fullyLoad(					const TCHAR *FilePath ) ;										// �w��̃t�@�C���̓�e��S�ă������ɓǂݍ��݁A���̏��̃A�N�Z�X�ɕK�v�ȃn���h����Ԃ�( �߂�l  -1:�G���[  -1�ȊO:�n���h�� )�A�g���I�������n���h���� FileRead_fullyLoad_delete �ō폜����K�v������܂�
extern	int			FileRead_fullyLoad_WithStrLen(		const TCHAR *FilePath, size_t FilePathLength ) ;				// �w��̃t�@�C���̓�e��S�ă������ɓǂݍ��݁A���̏��̃A�N�Z�X�ɕK�v�ȃn���h����Ԃ�( �߂�l  -1:�G���[  -1�ȊO:�n���h�� )�A�g���I�������n���h���� FileRead_fullyLoad_delete �ō폜����K�v������܂�
extern	int			FileRead_fullyLoad_delete(			int FLoadHandle ) ;												// FileRead_fullyLoad �œǂݍ��񂾃t�@�C���̃n���h����폜����
extern	const void*	FileRead_fullyLoad_getImage(		int FLoadHandle ) ;												// FileRead_fullyLoad �œǂݍ��񂾃t�@�C���̓�e��i�[�����������A�h���X��擾����
extern	LONGLONG	FileRead_fullyLoad_getSize(			int FLoadHandle ) ;												// FileRead_fullyLoad �œǂݍ��񂾃t�@�C���̃T�C�Y��擾����

// �ݒ�֌W�֐�
extern	int			GetStreamFunctionDefault(			void ) ;														// �c�w���C�u�����ŃX�g���[���f�[�^�A�N�Z�X�Ɏg�p����֐����f�t�H���g�̂�̂����ׂ�( TRUE:�f�t�H���g�̂��  FALSE:�f�t�H���g�ł͂Ȃ� )
extern	int			ChangeStreamFunction(				const STREAMDATASHREDTYPE2  *StreamThread  ) ;					// �c�w���C�u�����ŃX�g���[���f�[�^�A�N�Z�X�Ɏg�p����֐���ύX����
extern	int			ChangeStreamFunctionW(				const STREAMDATASHREDTYPE2W *StreamThreadW ) ;					// �c�w���C�u�����ŃX�g���[���f�[�^�A�N�Z�X�Ɏg�p����֐���ύX����( wchar_t �g�p�� )

// �⏕�֌W�֐�
extern int			ConvertFullPath(					const TCHAR *Src,                   TCHAR *Dest, const TCHAR *CurrentDir DEFAULTPARAM( = NULL )                                              ) ;	// �t���p�X�ł͂Ȃ��p�X�������t���p�X�ɕϊ�����( CurrentDir �̓t���p�X�ł���K�v������(����Ɂw\�x�������Ă�����Ă�ǂ�) )( CurrentDir �� NULL �̏ꍇ�͌��݂̃J�����g�f�B���N�g����g�p���� )
extern int			ConvertFullPathWithStrLen(			const TCHAR *Src, size_t SrcLength, TCHAR *Dest, const TCHAR *CurrentDir DEFAULTPARAM( = NULL ), size_t CurrentDirLength DEFAULTPARAM( = 0 ) ) ;












// DxInput.cpp�֐��v���g�^�C�v�錾

#ifndef DX_NON_INPUT

// ���͏�Ԏ擾�֐�
extern	int			CheckHitKey(							int KeyCode ) ;															// �L�[�{�[�h�̉�����Ԃ�擾����
extern	int			CheckHitKeyAll(							int CheckType DEFAULTPARAM( = DX_CHECKINPUT_ALL ) ) ;					// �ǂꂩ��ł�L�[��������Ă��邩�ǂ�����擾( ������Ă�����߂�l�� 0 �ȊO�ɂȂ� )
extern	int			GetHitKeyStateAll(						DX_CHAR *KeyStateArray ) ;												// ���ׂẴL�[�̉�����Ԃ�擾����( KeyStateBuf:char�^256���̔z��̐擪�A�h���X )
extern	int			GetHitKeyStateAllEx(					int *KeyStateArray ) ;													// ���ׂẴL�[�̉�����Ԃ�擾����( KeyStateBuf:int�^256���̔z��̐擪�A�h���X�A����͔z��̑S�v�f�� 0 ���������Ă���K�v������܂��A�z��̊e�v�f�̏�ԁ@0:������Ă��Ȃ��@1�F�����ꂽ�P��߁@2�ȏ�F�����ꑱ���Ă���񐔁@-1�F������ė����ꂽ�P��߁@-2�ȉ��F������ė�����Ă���̉� )
extern	int			GetJoypadNum(							void ) ;																// �W���C�p�b�h���ڑ�����Ă��鐔��擾����
extern	int			GetJoypadButtonNum(						int InputType ) ;														// �W���C�p�b�h�̃{�^���̐���擾����
extern	int			GetJoypadInputState(					int InputType ) ;														// �W���C�p�b�h�̓��͏�Ԃ�擾����
extern	int			GetJoypadAnalogInput(					int *XBuf, int *YBuf, int InputType ) ;									// �W���C�p�b�h�̃A�i���O�I�ȃX�e�B�b�N���͏��𓾂�
extern	int			GetJoypadAnalogInputRight(				int *XBuf, int *YBuf, int InputType ) ;									// ( �g�p�񐄏� )�W���C�p�b�h�̃A�i���O�I�ȃX�e�B�b�N���͏��𓾂�(�E�X�e�B�b�N�p)
extern	int			GetJoypadDirectInputState(				int InputType, DINPUT_JOYSTATE *DInputState ) ;							// DirectInput ���瓾����W���C�p�b�h�̐��̃f�[�^��擾����( DX_INPUT_KEY �� DX_INPUT_KEY_PAD1 �ȂǁA�L�[�{�[�h�����ރ^�C�v�� InputType �ɓn���ƃG���[�ƂȂ� -1 ��Ԃ� )
extern	int			CheckJoypadXInput(						int InputType ) ;														// �w��̓��̓f�o�C�X�� XInput �ɑΉ����Ă��邩�ǂ�����擾����( �߂�l  TRUE:XInput�Ή��̓��̓f�o�C�X  FALSE:XInput��Ή��̓��̓f�o�C�X   -1:�G���[ )( DX_INPUT_KEY �� DX_INPUT_KEY_PAD1 �ȂǁA�L�[�{�[�h�����ރ^�C�v�� InputType �ɓn���ƃG���[�ƂȂ� -1 ��Ԃ� )
extern	int			GetJoypadType(							int InputType ) ;														// �W���C�p�b�h�̃^�C�v��擾����( �߂�l  -1:�G���[  0�ȏ�:�W���C�p�b�h�^�C�v( DX_PADTYPE_XBOX_360 �Ȃ� ) )
extern	int			GetJoypadXInputState(					int InputType, XINPUT_STATE *XInputState ) ;							// XInput ���瓾������̓f�o�C�X( Xbox360�R���g���[���� )�̐��̃f�[�^��擾����( XInput��Ή��̃p�b�h�̏ꍇ�̓G���[�ƂȂ� -1 ��Ԃ��ADX_INPUT_KEY �� DX_INPUT_KEY_PAD1 �ȂǁA�L�[�{�[�h�����ރ^�C�v�� InputType �ɓn���ƃG���[�ƂȂ� -1 ��Ԃ� )
extern	int			SetJoypadInputToKeyInput(				int InputType, int PadInput, int KeyInput1, int KeyInput2 DEFAULTPARAM( = -1 ) , int KeyInput3 DEFAULTPARAM( = -1 ) , int KeyInput4 DEFAULTPARAM( = -1 )  ) ; // �W���C�p�b�h�̓��͂ɑΉ������L�[�{�[�h�̓��͂�ݒ肷��( InputType:�ݒ��ύX����p�b�h�̎��ʎq( DX_INPUT_PAD1�� )�@�@PadInput:�ݒ��ύX����p�b�h�{�^���̎��ʎq( PAD_INPUT_1 �� )�@�@KeyInput1:PadInput ������������Ƃɂ���L�[�R�[�h( KEY_INPUT_A �Ȃ� )���̂P�@�@KeyInput2:���̂Q�A-1�Őݒ�Ȃ��@�@KeyInput3:���̂R�A-1�Őݒ�Ȃ��@�@KeyInput4:���̂S�A-1�Őݒ�Ȃ� )
extern	int			SetJoypadDeadZone(						int InputType, double Zone ) ;											// �W���C�p�b�h�̖����]�[���̐ݒ��s��( InputType:�ݒ��ύX����p�b�h�̎��ʎq( DX_INPUT_PAD1�� )   Zone:�V���������]�[��( 0.0 �` 1.0 )�A�f�t�H���g�l�� 0.35 )
extern	double		GetJoypadDeadZone(						int InputType ) ;														// �W���C�p�b�h�̖����]�[���̐ݒ��擾����( InputType:�ݒ��ύX����p�b�h�̎��ʎq( DX_INPUT_PAD1�� )   �߂�l:�����]�[��( 0.0 �` 1.0 ) )
extern	int			SetJoypadDefaultDeadZoneAll(			double Zone ) ;															// �W���C�p�b�h�̃f�t�H���g�̖����]�[����ݒ肷��( Zone:�V���������]�[��( 0.0 �` 1.0 )�A�f�t�H���g�l�� 0.35 )
extern	double		GetJoypadDefaultDeadZoneAll(			void ) ;																// �W���C�p�b�h�̃f�t�H���g�̖����]�[����擾����( �߂�l:�����]�[��( 0.0 �` 1.0 ) )
extern	int			StartJoypadVibration(					int InputType, int Power, int Time, int EffectIndex DEFAULTPARAM( = -1 ) ) ;	// �W���C�p�b�h�̐U����J�n����
extern	int			StopJoypadVibration(					int InputType, int EffectIndex DEFAULTPARAM( = -1 ) ) ;					// �W���C�p�b�h�̐U�����~����
extern	int			GetJoypadPOVState(						int InputType, int POVNumber ) ;										// �W���C�p�b�h�̂o�n�u���͂̏�Ԃ𓾂�( �߂�l�@�w���POV�f�[�^�̊p�x�A�P�ʂ͊p�x�̂P�O�O�{( 90�x�Ȃ� 9000 ) ���S�ʒu�ɂ���ꍇ�� -1 ���Ԃ� )
extern	int			ReSetupJoypad(							void ) ;																// �W���C�p�b�h�̍ăZ�b�g�A�b�v��s��( �V���ɐڑ����ꂽ�W���C�p�b�h���������猟�o����� )
extern	int			ReSetupInputSystem(						void ) ;																// ���̓V�X�e���̍ăZ�b�g�A�b�v��s��( �߂�l  0:����I��  -1:�G���[���� )

extern	int			SetUseJoypadVibrationFlag(				int Flag ) ;															// �W���C�p�b�h�̐U���@�\��g�p���邩�ǂ�����ݒ肷��( TRUE:�g�p����@�@FALSE:�g�p���Ȃ� )

#endif // DX_NON_INPUT







#ifndef DX_NOTUSE_DRAWFUNCTION

// �摜�����n�֐��v���g�^�C�v�錾

// �O���t�B�b�N�n���h���쐬�֌W�֐�
extern	int			MakeGraph(							int SizeX, int SizeY, int NotUse3DFlag DEFAULTPARAM( = FALSE ) ) ;			// �w��T�C�Y�̃O���t�B�b�N�n���h����쐬����
extern	int			MakeScreen(							int SizeX, int SizeY, int UseAlphaChannel DEFAULTPARAM( = FALSE ) ) ;		// SetDrawScreen �ŕ`��Ώۂɂł���O���t�B�b�N�n���h����쐬����
extern	int			DerivationGraph(					int   SrcX, int   SrcY, int   Width, int   Height, int SrcGraphHandle ) ;	// �w��̃O���t�B�b�N�n���h���̎w�蕔�������𔲂��o���ĐV���ȃO���t�B�b�N�n���h����쐬����
extern	int			DerivationGraphF(					float SrcX, float SrcY, float Width, float Height, int SrcGraphHandle ) ;	// �w��̃O���t�B�b�N�n���h���̎w�蕔�������𔲂��o���ĐV���ȃO���t�B�b�N�n���h����쐬����( float�� )
extern	int			DeleteGraph(						int GrHandle ) ;															// �O���t�B�b�N�n���h����폜����
extern	int			DeleteSharingGraph(					int GrHandle ) ;															// �w��̃O���t�B�b�N�n���h���ƁA�����O���t�B�b�N�n���h������h�����Ă���O���t�B�b�N�n���h��( DerivationGraph �Ŕh�������n���h���ALoadDivGraph �ǂݍ���ō쐬���ꂽ�����̃n���h�� )���x�ɍ폜����
extern	int			GetGraphNum(						void ) ;																	// �L���ȃO���t�B�b�N�n���h���̐���擾����
extern	int			FillGraph(							int GrHandle, int Red, int Green, int Blue, int Alpha DEFAULTPARAM( = 255 ) ) ;											// �O���t�B�b�N�n���h����w��̐F�œh��Ԃ�
extern	int			FillRectGraph(						int GrHandle, int x, int y, int Width, int Height, int Red, int Green, int Blue, int Alpha DEFAULTPARAM( = 255 ) ) ;	// �O���t�B�b�N�n���h���̎w��͈̔͂�w��̐F�œh��Ԃ�
extern	int			SetGraphLostFlag(					int GrHandle, int *LostFlag ) ;												// �w��̃O���t�B�b�N�n���h�����폜���ꂽ�ۂ� 1 �ɂ���ϐ��̃A�h���X��ݒ肷��
extern	int			InitGraph(							void ) ;																	// ���ׂẴO���t�B�b�N�n���h����폜����
extern	int			ReloadFileGraphAll(					void ) ;																	// �t�@�C������摜��ǂݍ��񂾑S�ẴO���t�B�b�N�n���h���ɂ��āA�ēx�t�@�C������摜��ǂݍ���

// �V���h�E�}�b�v�n���h���֌W�֐�
extern	int			MakeShadowMap(						int SizeX, int SizeY ) ;													// �V���h�E�}�b�v�n���h����쐬����
extern	int			DeleteShadowMap(					int SmHandle ) ;															// �V���h�E�}�b�v�n���h����폜����
extern	int			SetShadowMapLightDirection(			int SmHandle, VECTOR Direction ) ;											// �V���h�E�}�b�v���z�肷�郉�C�g�̕�����ݒ肷��
extern	int			ShadowMap_DrawSetup(				int SmHandle ) ;															// �V���h�E�}�b�v�ւ̕`��̏�����s��
extern	int			ShadowMap_DrawEnd(					void ) ;																	// �V���h�E�}�b�v�ւ̕`���I������
extern	int			SetUseShadowMap(					int SmSlotIndex, int SmHandle ) ;											// �`��Ŏg�p����V���h�E�}�b�v��w�肷��A�L���ȃX���b�g�͂O�`�Q�ASmHandle �� -1 ��n���Ǝw��̃X���b�g�̃V���h�E�}�b�v����
extern	int			SetShadowMapDrawArea(				int SmHandle, VECTOR MinPosition, VECTOR MaxPosition ) ;					// �V���h�E�}�b�v�ɕ`�悷��ۂ͈̔͂�ݒ肷��( ���̊֐��ŕ`��͈͂�ݒ肵�Ȃ��ꍇ�͎������g�債���͈͂��`��͈͂ƂȂ� )
extern	int			ResetShadowMapDrawArea(				int SmHandle ) ;															// SetShadowMapDrawArea �̐ݒ��������
extern	int			SetShadowMapAdjustDepth(			int SmHandle, float Depth ) ;												// �V���h�E�}�b�v��g�p�����`�掞�̕␳�[�x��ݒ肷��
extern	int			GetShadowMapViewProjectionMatrix(	int SmHandle, MATRIX *MatrixBuffer ) ;										// �V���h�E�}�b�v�쐬����K�p���Ɏg�p����r���[�s��Ǝˉe�s����Z�����s���擾����
extern	int			TestDrawShadowMap(					int SmHandle, int x1, int y1, int x2, int y2 ) ;							// �V���h�E�}�b�v���ʂɃe�X�g�`�悷��

// �O���t�B�b�N�n���h���ւ̉摜�]���֐�
extern	int			BltBmpToGraph(						const COLORDATA *BmpColorData, HBITMAP RgbBmp, HBITMAP AlphaBmp,                                                                      int CopyPointX, int CopyPointY,                              int  GrHandle ) ;					// �a�l�o�̓�e��O���t�B�b�N�n���h���ɓ]��
extern	int			BltBmpToDivGraph(					const COLORDATA *BmpColorData, HBITMAP RgbBmp, HBITMAP AlphaBmp,                                                                      int AllNum, int XNum, int YNum, int Width, int Height, const int *GrHandle, int ReverseFlag ) ;	// �a�l�o�̓�e�𕪊��쐬�����O���t�B�b�N�n���h�������ɓ]��
extern	int			BltBmpOrGraphImageToGraph(			const COLORDATA *BmpColorData, HBITMAP RgbBmp, HBITMAP AlphaBmp, int BmpFlag, const BASEIMAGE *RgbBaseImage, const BASEIMAGE *AlphaBaseImage, int CopyPointX, int CopyPointY,                              int  GrHandle ) ;					// �a�l�o �� BASEIMAGE ��O���t�B�b�N�n���h���ɓ]��
extern	int			BltBmpOrGraphImageToGraph2(			const COLORDATA *BmpColorData, HBITMAP RgbBmp, HBITMAP AlphaBmp, int BmpFlag, const BASEIMAGE *RgbBaseImage, const BASEIMAGE *AlphaBaseImage, const RECT *SrcRect, int DestX, int DestY,                   int  GrHandle ) ;					// �a�l�o �� BASEIMAGE �̎w��̗̈��O���t�B�b�N�n���h���ɓ]��
extern	int			BltBmpOrGraphImageToDivGraph(		const COLORDATA *BmpColorData, HBITMAP RgbBmp, HBITMAP AlphaBmp, int BmpFlag, const BASEIMAGE *RgbBaseImage, const BASEIMAGE *AlphaBaseImage, int AllNum, int XNum, int YNum, int   Width, int   Height, const int *GrHandle, int ReverseFlag ) ;	// �a�l�o �� BASEIMAGE �𕪊��쐬�����O���t�B�b�N�n���h�������ɓ]��
extern	int			BltBmpOrGraphImageToDivGraphF(		const COLORDATA *BmpColorData, HBITMAP RgbBmp, HBITMAP AlphaBmp, int BmpFlag, const BASEIMAGE *RgbBaseImage, const BASEIMAGE *AlphaBaseImage, int AllNum, int XNum, int YNum, float Width, float Height, const int *GrHandle, int ReverseFlag ) ;	// �a�l�o �� BASEIMAGE �𕪊��쐬�����O���t�B�b�N�n���h�������ɓ]��( float�^ )

// �摜����O���t�B�b�N�n���h����쐬����֐�
extern	int			LoadBmpToGraph(						const TCHAR *FileName,                        int TextureFlag, int ReverseFlag, int SurfaceMode DEFAULTPARAM( = DX_MOVIESURFACE_NORMAL ) ) ;											// �摜�t�@�C������O���t�B�b�N�n���h����쐬����
extern	int			LoadBmpToGraphWithStrLen(			const TCHAR *FileName, size_t FileNameLength, int TextureFlag, int ReverseFlag, int SurfaceMode DEFAULTPARAM( = DX_MOVIESURFACE_NORMAL ) ) ;											// �摜�t�@�C������O���t�B�b�N�n���h����쐬����
extern	int			LoadGraph(							const TCHAR *FileName,                        int NotUse3DFlag DEFAULTPARAM( = FALSE ) ) ;																				// �摜�t�@�C������O���t�B�b�N�n���h����쐬����
extern	int			LoadGraphWithStrLen(				const TCHAR *FileName, size_t FileNameLength, int NotUse3DFlag DEFAULTPARAM( = FALSE ) ) ;																				// �摜�t�@�C������O���t�B�b�N�n���h����쐬����
extern	int			LoadReverseGraph(					const TCHAR *FileName,                        int NotUse3DFlag DEFAULTPARAM( = FALSE ) ) ;																				// �摜�t�@�C���𔽓]������̂ŃO���t�B�b�N�n���h����쐬����
extern	int			LoadReverseGraphWithStrLen(			const TCHAR *FileName, size_t FileNameLength, int NotUse3DFlag DEFAULTPARAM( = FALSE ) ) ;																				// �摜�t�@�C���𔽓]������̂ŃO���t�B�b�N�n���h����쐬����
extern	int			LoadDivGraph(						const TCHAR *FileName,                        int AllNum, int XNum, int YNum, int   XSize, int   YSize, int *HandleArray, int NotUse3DFlag DEFAULTPARAM( = FALSE ) , int   XStride DEFAULTPARAM( = 0 ) , int   YStride DEFAULTPARAM( = 0 ) ) ;	// �摜�t�@�C���𕪊����ăO���t�B�b�N�n���h����쐬����
extern	int			LoadDivGraphWithStrLen(				const TCHAR *FileName, size_t FileNameLength, int AllNum, int XNum, int YNum, int   XSize, int   YSize, int *HandleArray, int NotUse3DFlag DEFAULTPARAM( = FALSE ) , int   XStride DEFAULTPARAM( = 0 ) , int   YStride DEFAULTPARAM( = 0 ) ) ;	// �摜�t�@�C���𕪊����ăO���t�B�b�N�n���h����쐬����
extern	int			LoadDivGraphF(						const TCHAR *FileName,                        int AllNum, int XNum, int YNum, float XSize, float YSize, int *HandleArray, int NotUse3DFlag DEFAULTPARAM( = FALSE ) , float XStride DEFAULTPARAM( = 0 ) , float YStride DEFAULTPARAM( = 0 ) ) ;	// �摜�t�@�C���𕪊����ăO���t�B�b�N�n���h����쐬����
extern	int			LoadDivGraphFWithStrLen(			const TCHAR *FileName, size_t FileNameLength, int AllNum, int XNum, int YNum, float XSize, float YSize, int *HandleArray, int NotUse3DFlag DEFAULTPARAM( = FALSE ) , float XStride DEFAULTPARAM( = 0 ) , float YStride DEFAULTPARAM( = 0 ) ) ;	// �摜�t�@�C���𕪊����ăO���t�B�b�N�n���h����쐬����
extern	int			LoadDivBmpToGraph(					const TCHAR *FileName,                        int AllNum, int XNum, int YNum, int   SizeX, int   SizeY, int *HandleArray, int TextureFlag, int ReverseFlag , int   XStride DEFAULTPARAM( = 0 ) , int   YStride DEFAULTPARAM( = 0 ) ) ;			// �摜�t�@�C���𕪊����ăO���t�B�b�N�n���h����쐬����
extern	int			LoadDivBmpToGraphWithStrLen(		const TCHAR *FileName, size_t FileNameLength, int AllNum, int XNum, int YNum, int   SizeX, int   SizeY, int *HandleArray, int TextureFlag, int ReverseFlag , int   XStride DEFAULTPARAM( = 0 ) , int   YStride DEFAULTPARAM( = 0 ) ) ;			// �摜�t�@�C���𕪊����ăO���t�B�b�N�n���h����쐬����
extern	int			LoadDivBmpToGraphF(					const TCHAR *FileName,                        int AllNum, int XNum, int YNum, float SizeX, float SizeY, int *HandleArray, int TextureFlag, int ReverseFlag , float XStride DEFAULTPARAM( = 0 ) , float YStride DEFAULTPARAM( = 0 ) ) ;			// �摜�t�@�C���𕪊����ăO���t�B�b�N�n���h����쐬����
extern	int			LoadDivBmpToGraphFWithStrLen(		const TCHAR *FileName, size_t FileNameLength, int AllNum, int XNum, int YNum, float SizeX, float SizeY, int *HandleArray, int TextureFlag, int ReverseFlag , float XStride DEFAULTPARAM( = 0 ) , float YStride DEFAULTPARAM( = 0 ) ) ;			// �摜�t�@�C���𕪊����ăO���t�B�b�N�n���h����쐬����
extern	int			LoadReverseDivGraph(				const TCHAR *FileName,                        int AllNum, int XNum, int YNum, int   XSize, int   YSize, int *HandleArray, int NotUse3DFlag DEFAULTPARAM( = FALSE ) , int   XStride DEFAULTPARAM( = 0 ) , int   YStride DEFAULTPARAM( = 0 ) ) ;	// �摜�t�@�C���𔽓]������̂𕪊����ăO���t�B�b�N�n���h����쐬����
extern	int			LoadReverseDivGraphWithStrLen(		const TCHAR *FileName, size_t FileNameLength, int AllNum, int XNum, int YNum, int   XSize, int   YSize, int *HandleArray, int NotUse3DFlag DEFAULTPARAM( = FALSE ) , int   XStride DEFAULTPARAM( = 0 ) , int   YStride DEFAULTPARAM( = 0 ) ) ;	// �摜�t�@�C���𔽓]������̂𕪊����ăO���t�B�b�N�n���h����쐬����
extern	int			LoadReverseDivGraphF(				const TCHAR *FileName,                        int AllNum, int XNum, int YNum, float XSize, float YSize, int *HandleArray, int NotUse3DFlag DEFAULTPARAM( = FALSE ) , float XStride DEFAULTPARAM( = 0 ) , float YStride DEFAULTPARAM( = 0 ) ) ;	// �摜�t�@�C���𔽓]������̂𕪊����ăO���t�B�b�N�n���h����쐬����
extern	int			LoadReverseDivGraphFWithStrLen(		const TCHAR *FileName, size_t FileNameLength, int AllNum, int XNum, int YNum, float XSize, float YSize, int *HandleArray, int NotUse3DFlag DEFAULTPARAM( = FALSE ) , float XStride DEFAULTPARAM( = 0 ) , float YStride DEFAULTPARAM( = 0 ) ) ;	// �摜�t�@�C���𔽓]������̂𕪊����ăO���t�B�b�N�n���h����쐬����
extern	int			LoadBlendGraph(						const TCHAR *FileName ) ;																																				// �摜�t�@�C������u�����h�p�O���t�B�b�N�n���h����쐬����
extern	int			LoadBlendGraphWithStrLen(			const TCHAR *FileName, size_t FileNameLength ) ;																														// �摜�t�@�C������u�����h�p�O���t�B�b�N�n���h����쐬����

extern	int			CreateGraphFromMem(					const void *RGBFileImage, int RGBFileImageSize,               const void *AlphaFileImage DEFAULTPARAM( = NULL ) , int AlphaFileImageSize DEFAULTPARAM( = 0 ) ,                  int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;																			// ��������̉摜�C���[�W����O���t�B�b�N�n���h����쐬����
extern	int			ReCreateGraphFromMem(				const void *RGBFileImage, int RGBFileImageSize, int GrHandle, const void *AlphaFileImage DEFAULTPARAM( = NULL ) , int AlphaFileImageSize DEFAULTPARAM( = 0 ) ,                  int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;																			// ��������̉摜�C���[�W��������̃O���t�B�b�N�n���h���Ƀf�[�^��]������
extern	int			CreateDivGraphFromMem(				const void *RGBFileImage, int RGBFileImageSize, int AllNum, int XNum, int YNum, int   SizeX, int   SizeY,       int *HandleArray,               int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) , const void *AlphaFileImage DEFAULTPARAM( = NULL ) , int AlphaFileImageSize DEFAULTPARAM( = 0 ) ) ;			// ��������̉摜�C���[�W���番���O���t�B�b�N�n���h����쐬����
extern	int			CreateDivGraphFFromMem(				const void *RGBFileImage, int RGBFileImageSize, int AllNum, int XNum, int YNum, float SizeX, float SizeY,       int *HandleArray,               int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) , const void *AlphaFileImage DEFAULTPARAM( = NULL ) , int AlphaFileImageSize DEFAULTPARAM( = 0 ) ) ;			// ��������̉摜�C���[�W���番���O���t�B�b�N�n���h����쐬����( float�� )
extern	int			ReCreateDivGraphFromMem(			const void *RGBFileImage, int RGBFileImageSize, int AllNum, int XNum, int YNum, int   SizeX, int   SizeY, const int *HandleArray,               int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) , const void *AlphaFileImage DEFAULTPARAM( = NULL ) , int AlphaFileImageSize DEFAULTPARAM( = 0 ) ) ;			// ��������̉摜�C���[�W��������̕����O���t�B�b�N�n���h���Ƀf�[�^��]������
extern	int			ReCreateDivGraphFFromMem(			const void *RGBFileImage, int RGBFileImageSize, int AllNum, int XNum, int YNum, float SizeX, float SizeY, const int *HandleArray,               int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) , const void *AlphaFileImage DEFAULTPARAM( = NULL ) , int AlphaFileImageSize DEFAULTPARAM( = 0 ) ) ;			// ��������̉摜�C���[�W��������̕����O���t�B�b�N�n���h���Ƀf�[�^��]������( float�� )
extern	int			CreateGraphFromBmp(					const BITMAPINFO *RGBBmpInfo, const void *RGBBmpImage,               const BITMAPINFO *AlphaBmpInfo DEFAULTPARAM( = NULL ) , const void *AlphaBmpImage DEFAULTPARAM( = NULL ) , int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;																			// �r�b�g�}�b�v�f�[�^����O���t�B�b�N�n���h����쐬����
extern	int			ReCreateGraphFromBmp(				const BITMAPINFO *RGBBmpInfo, const void *RGBBmpImage, int GrHandle, const BITMAPINFO *AlphaBmpInfo DEFAULTPARAM( = NULL ) , const void *AlphaBmpImage DEFAULTPARAM( = NULL ) , int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;																			// �r�b�g�}�b�v�f�[�^��������̃O���t�B�b�N�n���h���Ƀf�[�^��]������
extern	int			CreateDivGraphFromBmp(				const BITMAPINFO *RGBBmpInfo, const void *RGBBmpImage, int AllNum, int XNum, int YNum, int   SizeX, int   SizeY,       int *HandleArray,        int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) , const BITMAPINFO *AlphaBmpInfo DEFAULTPARAM( = NULL ) , const void *AlphaBmpImage DEFAULTPARAM( = NULL ) ) ;	// �r�b�g�}�b�v�f�[�^���番���O���t�B�b�N�n���h����쐬����
extern	int			CreateDivGraphFFromBmp(				const BITMAPINFO *RGBBmpInfo, const void *RGBBmpImage, int AllNum, int XNum, int YNum, float SizeX, float SizeY,       int *HandleArray,        int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) , const BITMAPINFO *AlphaBmpInfo DEFAULTPARAM( = NULL ) , const void *AlphaBmpImage DEFAULTPARAM( = NULL ) ) ;	// �r�b�g�}�b�v�f�[�^���番���O���t�B�b�N�n���h����쐬����( float�� )
extern	int			ReCreateDivGraphFromBmp(			const BITMAPINFO *RGBBmpInfo, const void *RGBBmpImage, int AllNum, int XNum, int YNum, int   SizeX, int   SizeY, const int *HandleArray,        int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) , const BITMAPINFO *AlphaBmpInfo DEFAULTPARAM( = NULL ) , const void *AlphaBmpImage DEFAULTPARAM( = NULL ) ) ;	// �r�b�g�}�b�v�f�[�^��������̕����O���t�B�b�N�n���h���Ƀf�[�^��]������
extern	int			ReCreateDivGraphFFromBmp(			const BITMAPINFO *RGBBmpInfo, const void *RGBBmpImage, int AllNum, int XNum, int YNum, float SizeX, float SizeY, const int *HandleArray,        int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) , const BITMAPINFO *AlphaBmpInfo DEFAULTPARAM( = NULL ) , const void *AlphaBmpImage DEFAULTPARAM( = NULL ) ) ;	// �r�b�g�}�b�v�f�[�^��������̕����O���t�B�b�N�n���h���Ƀf�[�^��]������( float�� )
extern	int			CreateDXGraph(						const BASEIMAGE *RgbBaseImage, const BASEIMAGE *AlphaBaseImage,                                                                                 int TextureFlag ) ;																									// ��{�C���[�W�f�[�^����T�C�Y�����o���A����ɍ������O���t�B�b�N�n���h����쐬����
extern	int			CreateGraphFromGraphImage(			const BASEIMAGE *RgbBaseImage,                                                                                                                  int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;																// ��{�C���[�W�f�[�^����O���t�B�b�N�n���h����쐬����
extern	int			ReCreateGraphFromGraphImage(		const BASEIMAGE *RgbBaseImage,                                  int GrHandle,                                                                   int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;																// ��{�C���[�W�f�[�^��������̃O���t�B�b�N�n���h���Ƀf�[�^��]������
extern	int			CreateDivGraphFromGraphImage(		      BASEIMAGE *RgbBaseImage,                                  int AllNum, int XNum, int YNum, int   SizeX, int   SizeY,       int *HandleArray, int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;																// ��{�C���[�W�f�[�^���番���O���t�B�b�N�n���h����쐬����
extern	int			CreateDivGraphFFromGraphImage(		      BASEIMAGE *RgbBaseImage,                                  int AllNum, int XNum, int YNum, float SizeX, float SizeY,       int *HandleArray, int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;																// ��{�C���[�W�f�[�^���番���O���t�B�b�N�n���h����쐬����( float�� )
extern	int			ReCreateDivGraphFromGraphImage(		      BASEIMAGE *RgbBaseImage,                                  int AllNum, int XNum, int YNum, int   SizeX, int   SizeY, const int *HandleArray, int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;																// ��{�C���[�W�f�[�^��������̕����O���t�B�b�N�n���h���Ƀf�[�^��]������
extern	int			ReCreateDivGraphFFromGraphImage(	      BASEIMAGE *RgbBaseImage,                                  int AllNum, int XNum, int YNum, float SizeX, float SizeY, const int *HandleArray, int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;																// ��{�C���[�W�f�[�^��������̕����O���t�B�b�N�n���h���Ƀf�[�^��]������( float�� )
#ifndef DX_COMPILE_TYPE_C_LANGUAGE
extern	int			CreateGraphFromGraphImage(			const BASEIMAGE *RgbBaseImage, const BASEIMAGE *AlphaBaseImage,                                                                                 int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;																// ��{�C���[�W�f�[�^����O���t�B�b�N�n���h����쐬����
extern	int			ReCreateGraphFromGraphImage(		const BASEIMAGE *RgbBaseImage, const BASEIMAGE *AlphaBaseImage, int GrHandle,                                                                   int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;																// ��{�C���[�W�f�[�^��������̃O���t�B�b�N�n���h���Ƀf�[�^��]������
extern	int			CreateDivGraphFromGraphImage(		      BASEIMAGE *RgbBaseImage, const BASEIMAGE *AlphaBaseImage, int AllNum, int XNum, int YNum, int   SizeX, int   SizeY,       int *HandleArray, int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;																// ��{�C���[�W�f�[�^���番���O���t�B�b�N�n���h����쐬����
extern	int			CreateDivGraphFFromGraphImage(		      BASEIMAGE *RgbBaseImage, const BASEIMAGE *AlphaBaseImage, int AllNum, int XNum, int YNum, float SizeX, float SizeY,       int *HandleArray, int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;																// ��{�C���[�W�f�[�^���番���O���t�B�b�N�n���h����쐬����( float�� )
extern	int			ReCreateDivGraphFromGraphImage(		      BASEIMAGE *RgbBaseImage, const BASEIMAGE *AlphaBaseImage, int AllNum, int XNum, int YNum, int   SizeX, int   SizeY, const int *HandleArray, int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;																// ��{�C���[�W�f�[�^��������̕����O���t�B�b�N�n���h���Ƀf�[�^��]������
extern	int			ReCreateDivGraphFFromGraphImage(	      BASEIMAGE *RgbBaseImage, const BASEIMAGE *AlphaBaseImage, int AllNum, int XNum, int YNum, float SizeX, float SizeY, const int *HandleArray, int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;																// ��{�C���[�W�f�[�^��������̕����O���t�B�b�N�n���h���Ƀf�[�^��]������( float�� )
#endif // DX_COMPILE_TYPE_C_LANGUAGE
extern	int			CreateGraphFromGraphImage2(			const BASEIMAGE *RgbBaseImage, const BASEIMAGE *AlphaBaseImage,                                                                                 int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;																// ��{�C���[�W�f�[�^����O���t�B�b�N�n���h����쐬����
extern	int			ReCreateGraphFromGraphImage2(		const BASEIMAGE *RgbBaseImage, const BASEIMAGE *AlphaBaseImage, int GrHandle,                                                                   int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;																// ��{�C���[�W�f�[�^��������̃O���t�B�b�N�n���h���Ƀf�[�^��]������
extern	int			CreateDivGraphFromGraphImage2(		      BASEIMAGE *RgbBaseImage, const BASEIMAGE *AlphaBaseImage, int AllNum, int XNum, int YNum, int   SizeX, int   SizeY,       int *HandleArray, int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;																// ��{�C���[�W�f�[�^���番���O���t�B�b�N�n���h����쐬����
extern	int			CreateDivGraphFFromGraphImage2(		      BASEIMAGE *RgbBaseImage, const BASEIMAGE *AlphaBaseImage, int AllNum, int XNum, int YNum, float SizeX, float SizeY,       int *HandleArray, int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;																// ��{�C���[�W�f�[�^���番���O���t�B�b�N�n���h����쐬����( float�� )
extern	int			ReCreateDivGraphFromGraphImage2(	      BASEIMAGE *RgbBaseImage, const BASEIMAGE *AlphaBaseImage, int AllNum, int XNum, int YNum, int   SizeX, int   SizeY, const int *HandleArray, int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;																// ��{�C���[�W�f�[�^��������̕����O���t�B�b�N�n���h���Ƀf�[�^��]������
extern	int			ReCreateDivGraphFFromGraphImage2(	      BASEIMAGE *RgbBaseImage, const BASEIMAGE *AlphaBaseImage, int AllNum, int XNum, int YNum, float SizeX, float SizeY, const int *HandleArray, int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;																// ��{�C���[�W�f�[�^��������̕����O���t�B�b�N�n���h���Ƀf�[�^��]������( float�� )
extern	int			CreateGraph(						int Width, int Height, int Pitch, const void *RGBImage, const void *AlphaImage DEFAULTPARAM( = NULL ) , int GrHandle DEFAULTPARAM( = -1 ) ) ;																																		// ��������̃r�b�g�}�b�v�C���[�W����O���t�B�b�N�n���h����쐬����
extern	int			CreateDivGraph(						int Width, int Height, int Pitch, const void *RGBImage, int AllNum, int XNum, int YNum, int   SizeX, int   SizeY, int *HandleArray, const void *AlphaImage DEFAULTPARAM( = NULL ) ) ;																								// ��������̃r�b�g�}�b�v�C���[�W���番���O���t�B�b�N�n���h����쐬����
extern	int			CreateDivGraphF(					int Width, int Height, int Pitch, const void *RGBImage, int AllNum, int XNum, int YNum, float SizeX, float SizeY, int *HandleArray, const void *AlphaImage DEFAULTPARAM( = NULL ) ) ;																								// ��������̃r�b�g�}�b�v�C���[�W���番���O���t�B�b�N�n���h����쐬����( float�� )
extern	int			ReCreateGraph(						int Width, int Height, int Pitch, const void *RGBImage, int GrHandle, const void *AlphaImage DEFAULTPARAM( = NULL ) ) ;																																								// ��������̃r�b�g�}�b�v�C���[�W����O���t�B�b�N�n���h����č쐬����
#ifndef DX_NON_SOFTIMAGE
extern	int			CreateBlendGraphFromSoftImage(		int SIHandle ) ;																														// �\�t�g�E�G�A�ň����C���[�W����u�����h�p�摜�O���t�B�b�N�n���h����쐬����( -1:�G���[  -1�ȊO:�u�����h�p�O���t�B�b�N�n���h�� )
extern	int			CreateGraphFromSoftImage(			int SIHandle ) ;																														// �\�t�g�E�G�A�ň����C���[�W����O���t�B�b�N�n���h����쐬����( -1:�G���[  -1�ȊO:�O���t�B�b�N�n���h�� )
extern	int			CreateGraphFromRectSoftImage(		int SIHandle, int x, int y, int SizeX, int SizeY ) ;																					// �\�t�g�E�G�A�ň����C���[�W�̎w��̗̈��g���ăO���t�B�b�N�n���h����쐬����( -1:�G���[  -1�ȊO:�O���t�B�b�N�n���h�� )
extern	int			ReCreateGraphFromSoftImage(			int SIHandle, int GrHandle ) ;																											// �\�t�g�E�G�A�ň����C���[�W��������̃O���t�B�b�N�n���h���ɉ摜�f�[�^��]������
extern	int			ReCreateGraphFromRectSoftImage(		int SIHandle, int x, int y, int SizeX, int SizeY, int GrHandle ) ;																		// �\�t�g�E�G�A�ň����C���[�W��������̃O���t�B�b�N�n���h���ɉ摜�f�[�^��]������
extern	int			CreateDivGraphFromSoftImage(		int SIHandle, int AllNum, int XNum, int YNum, int   SizeX, int   SizeY, int *HandleArray ) ;											// �\�t�g�E�G�A�ň����C���[�W���番���O���t�B�b�N�n���h����쐬����
extern	int			CreateDivGraphFFromSoftImage(		int SIHandle, int AllNum, int XNum, int YNum, float SizeX, float SizeY, int *HandleArray ) ;											// �\�t�g�E�G�A�ň����C���[�W���番���O���t�B�b�N�n���h����쐬����( float�� )
extern	int			ReCreateDivGraphFromSoftImage(		int SIHandle, int AllNum, int XNum, int YNum, int   SizeX, int   SizeY, const int *HandleArray ) ;										// �\�t�g�E�G�A�ň����C���[�W��������̕����O���t�B�b�N�n���h���Ƀf�[�^��]������
extern	int			ReCreateDivGraphFFromSoftImage(	    int SIHandle, int AllNum, int XNum, int YNum, float SizeX, float SizeY, const int *HandleArray ) ;										// �\�t�g�E�G�A�ň����C���[�W��������̕����O���t�B�b�N�n���h���Ƀf�[�^��]������( float�� )
#endif // DX_NON_SOFTIMAGE
extern	int			CreateGraphFromBaseImage(			const BASEIMAGE *BaseImage ) ;																											// ��{�C���[�W�f�[�^����O���t�B�b�N�n���h����쐬����
extern	int			CreateGraphFromRectBaseImage(		const BASEIMAGE *BaseImage, int x, int y, int SizeX, int SizeY ) ;																		// ��{�C���[�W�f�[�^�̎w��̗̈��g���ăO���t�B�b�N�n���h����쐬����
extern	int			ReCreateGraphFromBaseImage(			const BASEIMAGE *BaseImage,                                     int GrHandle ) ;														// ��{�C���[�W�f�[�^��������̃O���t�B�b�N�n���h���ɉ摜�f�[�^��]������
extern	int			ReCreateGraphFromRectBaseImage(		const BASEIMAGE *BaseImage, int x, int y, int SizeX, int SizeY, int GrHandle ) ;														// ��{�C���[�W�f�[�^�̎w��̗̈��g���Ċ����̃O���t�B�b�N�n���h���ɉ摜�f�[�^��]������
extern	int			CreateDivGraphFromBaseImage(		      BASEIMAGE *BaseImage, int AllNum, int XNum, int YNum, int   SizeX, int   SizeY, int *HandleArray ) ;								// ��{�C���[�W�f�[�^���番���O���t�B�b�N�n���h����쐬����
extern	int			CreateDivGraphFFromBaseImage(		      BASEIMAGE *BaseImage, int AllNum, int XNum, int YNum, float SizeX, float SizeY, int *HandleArray ) ;								// ��{�C���[�W�f�[�^���番���O���t�B�b�N�n���h����쐬����( float�� )
extern	int			ReCreateDivGraphFromBaseImage(		      BASEIMAGE *BaseImage, int AllNum, int XNum, int YNum, int   SizeX, int   SizeY, const int *HandleArray ) ;						// ��{�C���[�W�f�[�^��������̕����O���t�B�b�N�n���h���Ƀf�[�^��]������
extern	int			ReCreateDivGraphFFromBaseImage(	          BASEIMAGE *BaseImage, int AllNum, int XNum, int YNum, float SizeX, float SizeY, const int *HandleArray ) ;						// ��{�C���[�W�f�[�^��������̕����O���t�B�b�N�n���h���Ƀf�[�^��]������( float�� )
extern	int			ReloadGraph(						const TCHAR *FileName,                        int GrHandle, int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;																		// �摜�t�@�C������O���t�B�b�N�n���h���։摜�f�[�^��]������
extern	int			ReloadGraphWithStrLen(				const TCHAR *FileName, size_t FileNameLength, int GrHandle, int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;																		// �摜�t�@�C������O���t�B�b�N�n���h���։摜�f�[�^��]������
extern	int			ReloadDivGraph(						const TCHAR *FileName,                        int AllNum, int XNum, int YNum, int   XSize, int   YSize, const int *HandleArray, int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;	// �摜�t�@�C������O���t�B�b�N�n���h�������։摜�f�[�^�𕪊��]������
extern	int			ReloadDivGraphWithStrLen(			const TCHAR *FileName, size_t FileNameLength, int AllNum, int XNum, int YNum, int   XSize, int   YSize, const int *HandleArray, int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;	// �摜�t�@�C������O���t�B�b�N�n���h�������։摜�f�[�^�𕪊��]������
extern	int			ReloadDivGraphF(					const TCHAR *FileName,                        int AllNum, int XNum, int YNum, float XSize, float YSize, const int *HandleArray, int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;	// �摜�t�@�C������O���t�B�b�N�n���h�������։摜�f�[�^�𕪊��]������( float�� )
extern	int			ReloadDivGraphFWithStrLen(			const TCHAR *FileName, size_t FileNameLength, int AllNum, int XNum, int YNum, float XSize, float YSize, const int *HandleArray, int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;	// �摜�t�@�C������O���t�B�b�N�n���h�������։摜�f�[�^�𕪊��]������( float�� )
extern	int			ReloadReverseGraph(					const TCHAR *FileName,                        int GrHandle ) ;																			// ReloadGraph �̉摜���]�����ǉ���
extern	int			ReloadReverseGraphWithStrLen(		const TCHAR *FileName, size_t FileNameLength, int GrHandle ) ;																			// ReloadGraph �̉摜���]�����ǉ���
extern	int			ReloadReverseDivGraph(				const TCHAR *FileName,                        int AllNum, int XNum, int YNum, int   XSize, int   YSize, const int *HandleArray ) ;		// ReloadDivGraph �̉摜���]�����ǉ���
extern	int			ReloadReverseDivGraphWithStrLen(	const TCHAR *FileName, size_t FileNameLength, int AllNum, int XNum, int YNum, int   XSize, int   YSize, const int *HandleArray ) ;		// ReloadDivGraph �̉摜���]�����ǉ���
extern	int			ReloadReverseDivGraphF(				const TCHAR *FileName,                        int AllNum, int XNum, int YNum, float XSize, float YSize, const int *HandleArray ) ;		// ReloadDivGraph �̉摜���]�����ǉ���( float�� )
extern	int			ReloadReverseDivGraphFWithStrLen(	const TCHAR *FileName, size_t FileNameLength, int AllNum, int XNum, int YNum, float XSize, float YSize, const int *HandleArray ) ;		// ReloadDivGraph �̉摜���]�����ǉ���( float�� )

// �O���t�B�b�N�n���h���쐬���ݒ�W�֐�
extern	int			SetGraphColorBitDepth(						int ColorBitDepth ) ;							// SetCreateGraphColorBitDepth �̋�����
extern 	int			GetGraphColorBitDepth(						void ) ;										// GetCreateGraphColorBitDepth �̋�����
extern	int			SetCreateGraphColorBitDepth(				int BitDepth ) ;								// �쐬����O���t�B�b�N�n���h���̐F�[�x��ݒ肷��
extern	int			GetCreateGraphColorBitDepth(				void ) ;										// �쐬����O���t�B�b�N�n���h���̐F�[�x��擾����
extern	int			SetCreateGraphChannelBitDepth(				int BitDepth ) ;								// �쐬����O���t�B�b�N�n���h���̂P�`�����l���ӂ�̃r�b�g�[�x��ݒ肷��
extern	int			GetCreateGraphChannelBitDepth(				void ) ;										// �쐬����O���t�B�b�N�n���h���̂P�`�����l���ӂ�̃r�b�g�[�x��擾����
extern	int			SetCreateGraphInitGraphDelete(				int Flag ) ;									// �쐬����O���t�B�b�N�n���h���� InitGraph() �ō폜����邩��ݒ肷��( Flag  TRUE:InitGraph�ō폜�����(�f�t�H���g)  FALSE:InitGraph�ō폜����Ȃ� )
extern	int			GetCreateGraphInitGraphDelete(				void ) ;										// �쐬����O���t�B�b�N�n���h���� InitGraph() �ō폜����邩��擾����( Flag  TRUE:InitGraph�ō폜�����(�f�t�H���g)  FALSE:InitGraph�ō폜����Ȃ� )
extern	int			SetCreateGraphHandle(						int GrHandle ) ;								// �쐬����O���t�B�b�N�n���h���̃n���h���l��ݒ肷��A�O�ȉ��̒l��n���Ɛݒ���( ���݂��Ȃ��O���t�B�b�N�n���h���̒l�̏ꍇ�̂ݗL�� )
extern	int			GetCreateGraphHandle(						void ) ;										// �쐬����O���t�B�b�N�n���h���̃n���h���l��擾����
extern	int			SetCreateDivGraphHandle(					const int *HandleArray, int HandleNum ) ;		// �쐬����O���t�B�b�N�n���h���̃n���h���l��ݒ肷��ALoadDivGraph ���̕����摜�ǂݍ��ݗp�AHandleArray �� NULL ��n���Ɛݒ���( ���݂��Ȃ��O���t�B�b�N�n���h���̒l�̏ꍇ�̂ݗL�� )
extern	int			GetCreateDivGraphHandle(					int *HandleArray ) ;							// �쐬����O���t�B�b�N�n���h���̃n���h���l��擾����ALoadDivGraph ���̕����摜�ǂݍ��ݗp�A�߂�l�� SetCreateDivGraphHandle �̈��� HandleNum �ɓn�����l�AHandleArray �� NULL �ł��
extern	int			SetDrawValidGraphCreateFlag(				int Flag ) ;									// SetDrawScreen �Ɉ����Ƃ��ēn����( �`��ΏۂƂ��Ďg�p�ł��� )�O���t�B�b�N�n���h����쐬���邩�ǂ�����ݒ肷��( TRUE:�`��\�O���t�B�b�N�n���h����쐬����  FLASE:�ʏ�̃O���t�B�b�N�n���h����쐬����( �f�t�H���g ) )
extern	int			GetDrawValidGraphCreateFlag(				void ) ;										// SetDrawScreen �Ɉ����Ƃ��ēn����( �`��ΏۂƂ��Ďg�p�ł��� )�O���t�B�b�N�n���h����쐬���邩�ǂ�����ݒ��擾����
extern	int			SetDrawValidFlagOf3DGraph(					int Flag ) ;									// SetDrawValidGraphCreateFlag �̋�����
extern	int			SetLeftUpColorIsTransColorFlag(				int Flag ) ;									// �摜�t�@�C������O���t�B�b�N�n���h����쐬����ۂɉ摜����̐F�𓧉ߐF�Ƃ��Ĉ������ǂ�����ݒ肷��( TRUE:���ߐF�Ƃ��Ĉ��� �@FALSE:���ߐF�Ƃ��Ĉ���Ȃ�( �f�t�H���g ) )
extern	int			SetUsePaletteGraphFlag(						int Flag ) ;									// �ǂݍ��މ摜���p���b�g�摜�̏ꍇ�A�p���b�g�摜�Ƃ��Ďg�p�ł���ꍇ�̓p���b�g�摜�Ƃ��Ďg�p���邩�ǂ�����ݒ肷��( TRUE:�p���b�g�摜�Ƃ��Ďg�p�ł���ꍇ�̓p���b�g�摜�Ƃ��Ďg�p����( �f�t�H���g )  FALSE:�p���b�g�摜�Ƃ��Ďg�p�ł���ꍇ��p���b�g�摜�Ƃ��Ă͎g�p���Ȃ�( �ʏ�^�C�v�̉摜�ɕϊ����Ďg�p���� ) )
extern	int			SetUseBlendGraphCreateFlag(					int Flag ) ;									// �u�����h�����p�摜��쐬���邩�ǂ���( �v�͉摜�̐Ԑ�����������Ƃ��Ĉ������ǂ��� )�̐ݒ��s��( TRUE:�u�����h�摜�Ƃ��ēǂݍ���  FALSE:�ʏ�摜�Ƃ��ēǂݍ���( �f�t�H���g ) )
extern	int			GetUseBlendGraphCreateFlag(					void ) ;										// �u�����h�����p�摜��쐬���邩�ǂ���( �v�͉摜�̐Ԑ�����������Ƃ��Ĉ������ǂ��� )�̐ݒ��擾����
extern	int			SetUseAlphaTestGraphCreateFlag(				int Flag ) ;									// �A���t�@�e�X�g��g�p����O���t�B�b�N�n���h����쐬���邩�ǂ�����ݒ肷��( TRUE:�A���t�@�e�X�g��g�p����( �f�t�H���g )  FALSE:�A���t�@�e�X�g��g�p���Ȃ� )
extern	int			GetUseAlphaTestGraphCreateFlag(				void ) ;										// �A���t�@�e�X�g��g�p����O���t�B�b�N�n���h����쐬���邩�ǂ�����擾����
extern	int			SetUseAlphaTestFlag(						int Flag ) ;									// SetUseAlphaTestGraphCreateFlag �̋�����
extern	int			GetUseAlphaTestFlag(						void ) ;										// GetUseAlphaTestGraphCreateFlag �̋�����
extern	int			SetCubeMapTextureCreateFlag(				int Flag ) ;									// �L���[�u�}�b�v�e�N�X�`����쐬���邩�ǂ����̃t���O��ݒ肷��
extern	int			GetCubeMapTextureCreateFlag(				void ) ;										// �L���[�u�}�b�v�e�N�X�`����쐬���邩�ǂ����̃t���O��擾����
extern	int			SetUseNoBlendModeParam(						int Flag ) ;									// SetDrawBlendMode �֐��̑������� DX_BLENDMODE_NOBLEND ���������ۂɁA�f�t�H���g�ł͑������͓���łQ�T�T��w�肵�����ƂɂȂ邪�A���̎����Q�T�T������Ȃ����ǂ�����ݒ肷��( TRUE:���Ȃ�(�������̒l���g�p�����)   FALSE:����(�������̒l�͖�������� 255 ����Ɏg�p�����)(�f�t�H���g) )���`�����l���t���摜�ɑ΂��ĕ`���s���ꍇ�݈̂Ӗ�������֐�
extern	int			SetDrawValidAlphaChannelGraphCreateFlag(	int Flag ) ;									// SetDrawScreen �̈����Ƃ��ēn����( �`��ΏۂƂ��Ďg�p�ł��� )���`�����l���t���O���t�B�b�N�n���h����쐬���邩�ǂ�����ݒ肷��( SetDrawValidGraphCreateFlag �֐��ŕ`��ΏۂƂ��Ďg�p�ł���O���t�B�b�N�n���h����쐬����悤�ɐݒ肳��Ă��Ȃ��ƌ��ʂ���܂��� )( TRUE:���`�����l���t��   FALSE:���`�����l���Ȃ�( �f�t�H���g ) )
extern	int			GetDrawValidAlphaChannelGraphCreateFlag(	void ) ;										// SetDrawScreen �̈����Ƃ��ēn����( �`��ΏۂƂ��Ďg�p�ł��� )���`�����l���t���O���t�B�b�N�n���h����쐬���邩�ǂ�����擾����
extern	int			SetDrawValidFloatTypeGraphCreateFlag(		int Flag ) ;									// SetDrawScreen �̈����Ƃ��ēn����( �`��ΏۂƂ��Ďg�p�ł��� )�s�N�Z���t�H�[�}�b�g�����������_�^�̃O���t�B�b�N�n���h����쐬���邩�ǂ�����ݒ肷��( SetDrawValidGraphCreateFlag �֐��ŕ`��ΏۂƂ��Ďg�p�ł���O���t�B�b�N�n���h����쐬����悤�ɐݒ肳��Ă��Ȃ��ƌ��ʂ���܂��� )�A�O���t�B�b�N�X�f�o�C�X�����������_�^�̃s�N�Z���t�H�[�}�b�g�ɑΉ����Ă��Ȃ��ꍇ�̓O���t�B�b�N�n���h���̍쐬�Ɏ��s����( TRUE:���������_�^�@�@FALSE:�����^( �f�t�H���g ) )
extern	int			GetDrawValidFloatTypeGraphCreateFlag(		void ) ;										// SetDrawScreen �̈����Ƃ��ēn����( �`��ΏۂƂ��Ďg�p�ł��� )�s�N�Z���t�H�[�}�b�g�����������_�^�̃O���t�B�b�N�n���h����쐬���邩�ǂ�����擾����
extern	int			SetDrawValidGraphCreateZBufferFlag(			int Flag ) ;									// SetDrawScreen �̈����Ƃ��ēn����( �`��ΏۂƂ��Ďg�p�ł��� )�O���t�B�b�N�n���h����쐬����ۂɐ�p�̂y�o�b�t�@��쐬���邩�ǂ�����ݒ肷��( TRUE:��p�̂y�o�b�t�@��쐬����( �f�t�H���g )  FALSE:��p�̂y�o�b�t�@�͍쐬���Ȃ� )
extern	int			GetDrawValidGraphCreateZBufferFlag(			void ) ;										// SetDrawScreen �̈����Ƃ��ēn����( �`��ΏۂƂ��Ďg�p�ł��� )�O���t�B�b�N�n���h����쐬����ۂɐ�p�̂y�o�b�t�@��쐬���邩�ǂ�����擾����
extern	int			SetCreateDrawValidGraphZBufferBitDepth(		int BitDepth ) ;								// SetDrawScreen �̈����Ƃ��ēn����( �`��ΏۂƂ��Ďg�p�ł��� )�O���t�B�b�N�n���h���ɓK�p����y�o�b�t�@�̃r�b�g�[�x��ݒ肷��( BitDepth:�r�b�g�[�x( �w��\�Ȓl�� 16, 24, 32 �̉��ꂩ( SetDrawValidGraphCreateFlag �֐��ŕ`��ΏۂƂ��Ďg�p�ł���O���t�B�b�N�n���h����쐬����悤�ɐݒ肳��Ă��Ȃ��ƌ��ʂ���܂��� )
extern	int			GetCreateDrawValidGraphZBufferBitDepth(		void ) ;										// SetDrawScreen �̈����Ƃ��ēn����( �`��ΏۂƂ��Ďg�p�ł��� )�O���t�B�b�N�n���h���ɓK�p����y�o�b�t�@�̃r�b�g�[�x��擾����
extern	int			SetCreateDrawValidGraphMipLevels(			int MipLevels ) ;								// SetDrawScreen �̈����Ƃ��ēn����( �`��ΏۂƂ��Ďg�p�ł��� )�O���t�B�b�N�n���h���ɓK�p����MipMap�̃��x����ݒ肷��
extern	int			GetCreateDrawValidGraphMipLevels(			void ) ;										// SetDrawScreen �̈����Ƃ��ēn����( �`��ΏۂƂ��Ďg�p�ł��� )�O���t�B�b�N�n���h���ɓK�p����MipMap�̃��x����擾����
extern	int			SetCreateDrawValidGraphChannelNum(			int ChannelNum ) ;								// SetDrawScreen �̈����Ƃ��ēn����( �`��ΏۂƂ��Ďg�p�ł��� )�O���t�B�b�N�n���h���ɓK�p����F�̃`�����l������ݒ肷��( ChannelNum:�`�����l����( �w��\�Ȓl�� 1, 2, 4 �̉��ꂩ( SetDrawValidGraphCreateFlag �֐��ŕ`��ΏۂƂ��Ďg�p�ł���O���t�B�b�N�n���h����쐬����悤�ɐݒ肳��Ă��Ȃ��ƌ��ʂ���܂��� )
extern	int			GetCreateDrawValidGraphChannelNum(			void ) ;										// SetDrawScreen �̈����Ƃ��ēn����( �`��ΏۂƂ��Ďg�p�ł��� )�O���t�B�b�N�n���h���ɓK�p����F�̃`�����l������擾����
extern	int			SetCreateDrawValidGraphMultiSample(			int Samples, int Quality ) ;					// SetDrawScreen �̈����Ƃ��ēn����( �`��ΏۂƂ��Ďg�p�ł��� )�O���t�B�b�N�n���h���ɓK�p����}���`�T���v�����O( �A���`�G�C���A�V���O )�ݒ��s��( Samples:�}���`�T���v�������Ɏg�p����h�b�g��( �����قǏd���Ȃ�܂� )  Quality:�}���`�T���v�������̕i�� )
extern	int			SetDrawValidMultiSample(					int Samples, int Quality ) ;					// SetCreateDrawValidGraphMultiSample �̋�����
extern	int			GetMultiSampleQuality(						int Samples ) ;									// �w��̃}���`�T���v�����Ŏg�p�ł���ő�N�I���e�B�l��擾����( �߂�l���}�C�i�X�̏ꍇ�͈����̃T���v�������g�p�ł��Ȃ����Ƃ�����܂� )
extern	int			SetUseTransColor(							int Flag ) ;									// ���ߐF�@�\��g�p���邩�ǂ�����ݒ肷��( TRUE:�g�p����( �f�t�H���g )  FALSE:�g�p���Ȃ� )
extern	int			SetUseTransColorGraphCreateFlag(			int Flag ) ;									// ���ߐF�@�\��g�p���邱�Ƃ�O��Ƃ����摜�f�[�^�̓ǂݍ��ݏ�����s�����ǂ�����ݒ肷��( TRUE �ɂ���� SetDrawMode( DX_DRAWMODE_BILINEAR ); �������Ԃ� DrawGraphF ���̕��������_�^���W��󂯎��֐��ŏ����_�ȉ��̒l��w�肵���ꍇ�ɔ�������`�挋�ʂ̕s���R��ɘa������ʂ�����܂� ( �f�t�H���g�� FALSE ) )
extern 	int			SetUseGraphAlphaChannel(					int Flag ) ;									// SetUseAlphaChannelGraphCreateFlag �̋�����
extern 	int			GetUseGraphAlphaChannel(					void ) ;										// GetUseAlphaChannelGraphCreateFlag �̋�����
extern 	int			SetUseAlphaChannelGraphCreateFlag(			int Flag ) ;									// ���`�����l���t���O���t�B�b�N�n���h����쐬���邩�ǂ�����ݒ肷��( TRUE:���`�����l���t��   FALSE:���`�����l������ )
extern 	int			GetUseAlphaChannelGraphCreateFlag(			void ) ;										// ���`�����l���t���O���t�B�b�N�n���h����쐬���邩�ǂ�����擾����( TRUE:���`�����l���t��   FALSE:���`�����l������ )
extern	int			SetUseNotManageTextureFlag(					int Flag ) ;									// Direct3D �̊Ǘ��e�N�X�`���@�\��g�p����O���t�B�b�N�n���h����쐬���邩�ǂ�����ݒ肷��( TRUE:�Ǘ��@�\��g�p����( �f�t�H���g )  FALSE:�Ǘ��@�\��g�p���Ȃ� )�A�Ǘ��@�\��g�p����ƃO���t�B�b�N�X�f�o�C�X�̂u�q�`�l�e�ʈȏ�̉摜��������Ƃ��ł������ɃV�X�e���������̎g�p�ʂ������܂�
extern	int			GetUseNotManageTextureFlag(					void ) ;										// Direct3D �̊Ǘ��e�N�X�`���@�\��g�p����O���t�B�b�N�n���h����쐬���邩�ǂ�����擾����
extern	int			SetUsePlatformTextureFormat(				int PlatformTextureFormat ) ;					// �쐬����O���t�B�b�N�n���h���Ŏg�p������ˑ��̃e�N�X�`���t�H�[�}�b�g��w�肷��( Direct3D9���Ȃ� DX_TEXTUREFORMAT_DIRECT3D9_R8G8B8 �ȂǁA0 ��n���Ɖ�� )
extern	int			GetUsePlatformTextureFormat(				void ) ;										// �쐬����O���t�B�b�N�n���h���Ŏg�p������ˑ��̃e�N�X�`���t�H�[�}�b�g��擾����
extern	int			SetTransColor(								int Red, int Green, int Blue ) ;				// �쐬����O���t�B�b�N�n���h���ɓK�p���铧�ߐF��ݒ肷��( Red,Green,Blue:���ߐF����̂R���F�ŕ\�������( �e�F�O�`�Q�T�T ) )
extern	int			GetTransColor(								int *Red, int *Green, int *Blue ) ;				// �쐬����O���t�B�b�N�n���h���ɓK�p���铧�ߐF��擾����
extern	int			SetUseDivGraphFlag(							int Flag ) ;									// �Q�̂���ł͂Ȃ��T�C�Y�̉摜�𕡐��̃e�N�X�`����g�p���Ău�q�`�l�̖��ʂ�Ȃ����ǂ�����ݒ肷��( TRUE:�����̃e�N�X�`����g�p����   FALSE:�Ȃ�ׂ��ꖇ�̃e�N�X�`���ōς܂�( �f�t�H���g ) )�A�����̃e�N�X�`����g�p����ꍇ�͂u�q�`�l�e�ʂ̐ߖ񂪂ł������ɑ��x�̒ቺ��o�C���j�A�t�B���^�����O�`�掞�Ƀe�N�X�`���ƃe�N�X�`���̋��ڂ��ǂ�����Ƃ킩�铙�̕��Q������܂�
extern	int			SetUseAlphaImageLoadFlag(					int Flag ) ;									// LoadGraph �Ȃǂ̍ۂɃt�@�C�����̖����� _a ���t�����A���t�@�`�����l���p�̉摜�t�@�C����ǉ��œǂݍ��ޏ�����s�����ǂ�����ݒ肷��( TRUE:�s��( �f�t�H���g )  FALSE:�s��Ȃ� )
extern	int			SetUseMaxTextureSize(						int Size ) ;									// �g�p����e�N�X�`���[�̍ő�T�C�Y��ݒ肷��( �f�t�H���g�ł̓O���t�B�b�N�X�f�o�C�X���Ή����Ă���ő�e�N�X�`���[�T�C�Y�A������ 0 ��n���ƃf�t�H���g�ݒ�ɂȂ�܂� )
extern	int			SetUseGraphBaseDataBackup(					int Flag ) ;									// �O���t�B�b�N�n���h����쐬����ۂɎg�p�����摜�f�[�^�̃o�b�N�A�b�v����� Direct3DDevice �̃f�o�C�X���X�g���Ɏg�p���邩�ǂ�����ݒ肷��( TRUE:�o�b�N�A�b�v�����( �f�t�H���g )  FALSE:�o�b�N�A�b�v����Ȃ� )�A�o�b�N�A�b�v����Ȃ��ƃ������̐ߖ�ɂȂ�܂����A���A�Ɋ|���鎞�Ԃ������Ȃ�A��������̃t�@�C���C���[�W����O���t�B�b�N�n���h����쐬�����ꍇ�͎������A���ł��Ȃ��Ȃǂ̕��Q������܂�
extern	int			GetUseGraphBaseDataBackup(					void ) ;										// �O���t�B�b�N�n���h����쐬����ۂɎg�p�����摜�f�[�^�̃o�b�N�A�b�v����� Direct3DDevice �̃f�o�C�X���X�g���Ɏg�p���邩�ǂ�����擾����
extern	int			SetUseSystemMemGraphCreateFlag(				int Flag ) ;									// ( ���݌��ʂȂ� )�O���t�B�b�N�n���h�������摜�f�[�^��V�X�e����������ɍ쐬���邩�ǂ�����ݒ肷��( TRUE:�V�X�e����������ɍ쐬  FALSE:�u�q�`�l��ɍ쐬( �f�t�H���g ) )
extern	int			GetUseSystemMemGraphCreateFlag(				void ) ;										// ( ���݌��ʂȂ� )�O���t�B�b�N�n���h�������摜�f�[�^��V�X�e����������ɍ쐬���邩�ǂ�����擾����
extern	int			SetUseLoadDivGraphSizeCheckFlag(			int Flag ) ;									// LoadDivGraph �n�̕����摜�ǂݍ��݊֐��ŃT�C�Y�̃`�F�b�N��s�����ǂ�����ݒ肷��( Flag:TRUE( �`�F�b�N��s��(�f�t�H���g) )  FALSE:�`�F�b�N��s��Ȃ� )
extern	int			GetUseLoadDivGraphSizeCheckFlag(			void ) ;										// LoadDivGraph �n�̕����摜�ǂݍ��݊֐��ŃT�C�Y�̃`�F�b�N��s�����ǂ����̐ݒ��擾����

// �摜���֌W�֐�
extern	const unsigned int* GetFullColorImage(				int GrHandle ) ;																// �w��̃O���t�B�b�N�n���h���̂`�q�f�a�W�C���[�W��擾����( ���ݓ���t�@�C����O���t�B�b�N�n���h���œǂݍ��񂾏ꍇ�̂ݎg�p�\ )

extern	int			GraphLock(						int GrHandle, int *PitchBuf, void **DataPointBuf, COLORDATA **ColorDataPP DEFAULTPARAM( = NULL ), int WriteOnly DEFAULTPARAM( = FALSE ) ) ;	// �O���t�B�b�N�������̈�̃��b�N
extern	int			GraphUnLock(					int GrHandle ) ;																							// �O���t�B�b�N�������̈�̃��b�N���

extern	int			SetUseGraphZBuffer(				int GrHandle, int UseFlag, int BitDepth DEFAULTPARAM( = -1 ) ) ;						// �O���t�B�b�N�n���h����p�̂y�o�b�t�@������ǂ�����ݒ肷��( GrHandle:�ΏۂƂȂ�O���t�B�b�N�n���h��( �`��ΏۂƂ��Ďg�p�\�ȃO���t�B�b�N�n���h���̂ݗL�� )  UseFlag:��p�̂y�o�b�t�@������ǂ���( TRUE:����( �f�t�H���g )  FALSE:�����Ȃ� )  BitDepth:�r�b�g�[�x( 16 or 24 or 32 ) )
extern	int			CopyGraphZBufferImage(			int DestGrHandle, int SrcGrHandle ) ;													// �O���t�B�b�N�n���h���̂y�o�b�t�@�̏�Ԃ�ʂ̃O���t�B�b�N�n���h���̂y�o�b�t�@�ɃR�s�[����( DestGrHandle �� SrcGrHandle ��y�o�b�t�@������Ă���`��Ώۂɂł���O���t�B�b�N�n���h���ŁA�T�C�Y�������ł���A���}���`�T���v�����O( �A���`�G�C���A�X )�ݒ肪�������Ƃ���� )

extern	int			SetDeviceLostDeleteGraphFlag(	int GrHandle, int DeleteFlag ) ;														// �O���t�B�b�N�X�f�o�C�X�̃f�o�C�X���X�g�������Ɏw��̃O���t�B�b�N�n���h����폜���邩�ǂ�����ݒ肷��( TRUE:�f�o�C�X���X�g���ɍ폜����  FALSE:�f�o�C�X���X�g���������Ă�폜���Ȃ� )

extern	int			GetGraphSize(					int GrHandle, int   *SizeXBuf, int   *SizeYBuf ) ;										// �O���t�B�b�N�n���h�������摜�̃T�C�Y�𓾂�
extern	int			GetGraphSizeF(					int GrHandle, float *SizeXBuf, float *SizeYBuf ) ;										// �O���t�B�b�N�n���h�������摜�̃T�C�Y�𓾂�( float�^ )
extern	int			GetGraphTextureSize(			int GrHandle, int   *SizeXBuf, int   *SizeYBuf ) ;										// �O���t�B�b�N�n���h��������ڂ̃e�N�X�`���̃T�C�Y�𓾂�
extern	int			GetGraphUseBaseGraphArea(		int GrHandle, int   *UseX,     int   *UseY,    int *UseSizeX, int *UseSizeY ) ;			// LoadDivGraph �� DerivationGraph �Ō��摜�̈ꕔ����g�p���Ă���ꍇ�ɁA�w��̃O���t�B�b�N�n���h�����g�p���Ă��錳�摜�͈̔͂�擾����
extern	int			GetGraphMipmapCount(			int GrHandle ) ;																		// �O���t�B�b�N�n���h�������e�N�X�`���̃~�b�v�}�b�v���x������擾����
extern	int			GetGraphFilePath(				int GrHandle, TCHAR *FilePathBuffer ) ;													// �O���t�B�b�N�n���h�����摜�t�@�C������ǂݍ��܂�Ă����ꍇ�A���̉摜�̃t�@�C���p�X��擾����
extern	int			CheckDrawValidGraph(			int GrHandle ) ;																		// �w��̃O���t�B�b�N�n���h�����`��Ώۂɂł���( SetDrawScreen �̈����ɓn���� )�O���t�B�b�N�n���h�����ǂ�����擾����( �߂�l�@TRUE:�`��Ώۂɂł���O���t�B�b�N�n���h���@FALSE:�`��Ώۂɂł��Ȃ��O���t�B�b�N�n���h�� )

extern	const COLORDATA* GetTexColorData(			int AlphaCh, int AlphaTest, int ColorBitDepth, int DrawValid DEFAULTPARAM( = FALSE ) ) ;	// �J���[�f�[�^�𓾂�
#ifndef DX_COMPILE_TYPE_C_LANGUAGE
extern	const COLORDATA* GetTexColorData(			const IMAGEFORMATDESC *Format ) ;														// �t�H�[�}�b�g�Ɋ�Â����J���[�f�[�^�𓾂�
extern	const COLORDATA* GetTexColorData(			int FormatIndex /* DX_GRAPHICSIMAGE_FORMAT_3D_RGB32 �� */ ) ;							// �w��̃t�H�[�}�b�g�C���f�b�N�X�̃J���[�f�[�^�𓾂�
#endif // DX_COMPILE_TYPE_C_LANGUAGE
extern	const COLORDATA* GetTexColorData2(			const IMAGEFORMATDESC *Format ) ;														// �t�H�[�}�b�g�Ɋ�Â����J���[�f�[�^�𓾂�
extern	const COLORDATA* GetTexColorData3(			int FormatIndex /* DX_GRAPHICSIMAGE_FORMAT_3D_RGB32 �� */ ) ;							// �w��̃t�H�[�}�b�g�C���f�b�N�X�̃J���[�f�[�^�𓾂�
extern	int			GetMaxGraphTextureSize(			int *SizeX, int *SizeY ) ;																// �O���t�B�b�N�X�f�o�C�X���Ή����Ă���ő�e�N�X�`���T�C�Y��擾����
extern	int			GetValidRestoreShredPoint(		void ) ;																				// �O���t�B�b�N�n���h���̉摜�𕜌�����֐����o�^����Ă��邩�ǂ�����擾����( TRUE:�o�^����Ă���  FALSE:�o�^����Ă��Ȃ� )
extern	int			GetCreateGraphColorData(		COLORDATA *ColorData, IMAGEFORMATDESC *Format ) ;										// ( ���݌��ʂȂ� )���ꂩ��V���ɃO���t�B�b�N��쐬����ꍇ�Ɏg�p����J���[����擾����

// �摜�p���b�g����֌W�֐�( �\�t�g�E�G�A�摜�̂ݎg�p�\ )
extern	int			GetGraphPalette(				int GrHandle, int ColorIndex, int *Red, int *Green, int *Blue ) ;						// �O���t�B�b�N�n���h���̃p���b�g��擾����( �\�t�g�E�G�A�����_�����O���[�h�ŁA���p���b�g�摜�̏ꍇ�̂ݎg�p�\ )
extern  int			GetGraphOriginalPalette(		int GrHandle, int ColorIndex, int *Red, int *Green, int *Blue ) ;						// �O���t�B�b�N�n���h���� SetGraphPalette �ŕύX����O�̃p���b�g��擾����( �\�t�g�E�G�A�����_�����O���[�h�ŁA���p���b�g�摜�̏ꍇ�̂ݎg�p�\ )
extern	int			SetGraphPalette(				int GrHandle, int ColorIndex, unsigned int Color ) ;									// �O���t�B�b�N�n���h���̃p���b�g��ύX����( �\�t�g�E�G�A�����_�����O���[�h�ŁA���p���b�g�摜�̏ꍇ�̂ݎg�p�\ )
extern	int			ResetGraphPalette(				int GrHandle ) ;																		// SetGraphPalette �ŕύX�����p���b�g��S�Č��ɖ߂�( �\�t�g�E�G�A�����_�����O���[�h�ŁA���p���b�g�摜�̏ꍇ�̂ݎg�p�\ )

// �}�`�`��֐�
extern	int			DrawLine(         int   x1, int   y1, int   x2, int   y2,                                         unsigned int Color, int   Thickness DEFAULTPARAM( = 1 )    ) ;							// ����`�悷��
extern	int			DrawLineAA(       float x1, float y1, float x2, float y2,                                         unsigned int Color, float Thickness DEFAULTPARAM( = 1.0f ) ) ;							// ����`�悷��( �A���`�G�C���A�X�t�� )
extern	int			DrawBox(          int   x1, int   y1, int   x2, int   y2,                                         unsigned int Color, int FillFlag, int   LineThickness DEFAULTPARAM( = 1 )    ) ;			// �l�p�`��`�悷��
extern	int			DrawBoxAA(        float x1, float y1, float x2, float y2,                                         unsigned int Color, int FillFlag, float LineThickness DEFAULTPARAM( = 1.0f ) ) ;			// �l�p�`��`�悷��( �A���`�G�C���A�X�t�� )
extern	int			DrawFillBox(      int   x1, int   y1, int   x2, int   y2,                                         unsigned int Color ) ;																	// ���g��h��Ԃ��l�p�`��`�悷��
extern	int			DrawLineBox(      int   x1, int   y1, int   x2, int   y2,                                         unsigned int Color, int LineThickness DEFAULTPARAM( = 1 ) ) ;								// �g�����̎l�p�`�̕`�� ����
extern	int			DrawCircle(       int   x,  int   y,  int   r,                                                    unsigned int Color, int FillFlag DEFAULTPARAM( = TRUE ), int   LineThickness DEFAULTPARAM( = 1 )    ) ;	// �~��`�悷��
extern	int			DrawCircleAA(     float x,  float y,  float r,            int posnum,                             unsigned int Color, int FillFlag DEFAULTPARAM( = TRUE ), float LineThickness DEFAULTPARAM( = 1.0f ), double Angle DEFAULTPARAM( = 0.0 ) ) ;	// �~��`�悷��( �A���`�G�C���A�X�t�� )
extern	int			DrawOval(         int   x,  int   y,  int   rx, int   ry,                                         unsigned int Color, int FillFlag,        int   LineThickness DEFAULTPARAM( = 1 )    ) ;	// �ȉ~��`�悷��
extern	int			DrawOvalAA(       float x,  float y,  float rx, float ry, int posnum,                             unsigned int Color, int FillFlag,        float LineThickness DEFAULTPARAM( = 1.0f ) ) ;	// �ȉ~��`�悷��( �A���`�G�C���A�X�t�� )
extern	int			DrawOval_Rect(    int   x1, int   y1, int   x2, int   y2,                                         unsigned int Color, int FillFlag ) ;														// �w��̋�`�Ɏ��܂�~( �ȉ~ )��`�悷��
extern	int			DrawTriangle(     int   x1, int   y1, int   x2, int   y2, int   x3, int   y3,                     unsigned int Color, int FillFlag ) ;														// �O�p�`��`�悷��
extern	int			DrawTriangleAA(   float x1, float y1, float x2, float y2, float x3, float y3,                     unsigned int Color, int FillFlag, float LineThickness DEFAULTPARAM( = 1.0f ) ) ;			// �O�p�`��`�悷��( �A���`�G�C���A�X�t�� )
extern	int			DrawQuadrangle(   int   x1, int   y1, int   x2, int   y2, int   x3, int   y3, int   x4, int   y4, unsigned int Color, int FillFlag ) ;														// �l�p�`��`�悷��
extern	int			DrawQuadrangleAA( float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, unsigned int Color, int FillFlag, float LineThickness DEFAULTPARAM( = 1.0f ) ) ;			// �l�p�`��`�悷��( �A���`�G�C���A�X�t�� )
extern	int			DrawRoundRect(    int   x1, int   y1, int   x2, int   y2, int   rx, int   ry,                     unsigned int Color, int FillFlag ) ;														// �p�̊ۂ��l�p�`��`�悷��
extern	int			DrawRoundRectAA(  float x1, float y1, float x2, float y2, float rx, float ry, int posnum,         unsigned int Color, int FillFlag, float LineThickness DEFAULTPARAM( = 1.0f ) ) ;			// �p�̊ۂ��l�p�`��`�悷��( �A���`�G�C���A�X�t�� )
extern	int			BeginAADraw(      void ) ;																																									// DrawTriangleAA �Ȃǂ̃A���`�G�C���A�X�t���}�`�`��̏�����s��
extern	int			EndAADraw(        void ) ;																																									// DrawTriangleAA �Ȃǂ̃A���`�G�C���A�X�t���}�`�`��̌�n����s��
extern 	int			DrawPixel(        int   x,  int   y,                                                              unsigned int Color ) ;																	// �_��`�悷��

extern	int			Paint(			int x, int y, unsigned int FillColor, ULONGLONG BoundaryColor DEFAULTPARAM( = ULL_PARAM( 0xffffffffffffffff ) ) ) ;				// �w��_���狫�E�F������Ƃ���܂œh��Ԃ�(���E�F�� -1 �ɂ���Ǝw��_�̐F�̗̈��h��Ԃ�)

extern 	int			DrawPixelSet(   const POINTDATA *PointDataArray, int Num ) ;																					// �_�̏W����`�悷��
extern	int			DrawLineSet(    const LINEDATA *LineDataArray,   int Num ) ;																					// ���̏W����`�悷��
extern	int			DrawBoxSet(     const RECTDATA *RectDataArray,   int Num ) ;																					// ��`�̏W����`�悷��

extern	int			DrawPixel3D(     VECTOR   Pos,                                                                 unsigned int Color ) ;							// �R�c�̓_��`�悷��
extern	int			DrawPixel3DD(    VECTOR_D Pos,                                                                 unsigned int Color ) ;							// �R�c�̓_��`�悷��
extern	int			DrawLine3D(      VECTOR   Pos1,   VECTOR   Pos2,                                               unsigned int Color ) ;							// �R�c�̐�����`�悷��
extern	int			DrawLine3DD(     VECTOR_D Pos1,   VECTOR_D Pos2,                                               unsigned int Color ) ;							// �R�c�̐�����`�悷��
extern	int			DrawTriangle3D(  VECTOR   Pos1,   VECTOR   Pos2, VECTOR   Pos3,                                unsigned int Color, int FillFlag ) ;				// �R�c�̎O�p�`��`�悷��
extern	int			DrawTriangle3DD( VECTOR_D Pos1,   VECTOR_D Pos2, VECTOR_D Pos3,                                unsigned int Color, int FillFlag ) ;				// �R�c�̎O�p�`��`�悷��
extern	int			DrawCube3D(      VECTOR   Pos1,   VECTOR   Pos2,                            unsigned int DifColor, unsigned int SpcColor, int FillFlag ) ;		// �R�c�̗����̂�`�悷��
extern	int			DrawCube3DD(     VECTOR_D Pos1,   VECTOR_D Pos2,                            unsigned int DifColor, unsigned int SpcColor, int FillFlag ) ;		// �R�c�̗����̂�`�悷��
extern	int			DrawCubeSet3D(   CUBEDATA *CubeDataArray, int Num, int FillFlag ) ;																				// �R�c�̗����̂̏W����`�悷��
extern	int			DrawSphere3D(    VECTOR   CenterPos,                  float  r,             int DivNum, unsigned int DifColor, unsigned int SpcColor, int FillFlag ) ;		// �R�c�̋��̂�`�悷��
extern	int			DrawSphere3DD(   VECTOR_D CenterPos,                  double r,             int DivNum, unsigned int DifColor, unsigned int SpcColor, int FillFlag ) ;		// �R�c�̋��̂�`�悷��
extern	int			DrawCapsule3D(   VECTOR   Pos1,   VECTOR   Pos2,      float  r,             int DivNum, unsigned int DifColor, unsigned int SpcColor, int FillFlag ) ;		// �R�c�̃J�v�Z����`�悷��
extern	int			DrawCapsule3DD(  VECTOR_D Pos1,   VECTOR_D Pos2,      double r,             int DivNum, unsigned int DifColor, unsigned int SpcColor, int FillFlag ) ;		// �R�c�̃J�v�Z����`�悷��
extern	int			DrawCylinder3D(  VECTOR   Pos1,   VECTOR   Pos2,      float  r,             int DivNum, unsigned int DifColor, unsigned int SpcColor, int FillFlag ) ;		// �R�c�̉~����`�悷��
extern	int			DrawCylinder3DD( VECTOR_D Pos1,   VECTOR_D Pos2,      double r,             int DivNum, unsigned int DifColor, unsigned int SpcColor, int FillFlag ) ;		// �R�c�̉~����`�悷��
extern	int			DrawTube3D(      VECTOR   Pos1,   VECTOR   Pos2,      float  r1, float  r2, int DivNum, unsigned int DifColor, unsigned int SpcColor, int FillFlag ) ;		// �R�c�̓���`�悷��
extern	int			DrawTube3DD(     VECTOR_D Pos1,   VECTOR_D Pos2,      double r1, double r2, int DivNum, unsigned int DifColor, unsigned int SpcColor, int FillFlag ) ;		// �R�c�̓���`�悷��
extern	int			DrawCone3D(      VECTOR   TopPos, VECTOR   BottomPos, float  r,             int DivNum, unsigned int DifColor, unsigned int SpcColor, int FillFlag ) ;		// �R�c�̉~����`�悷��
extern	int			DrawCone3DD(     VECTOR_D TopPos, VECTOR_D BottomPos, double r,             int DivNum, unsigned int DifColor, unsigned int SpcColor, int FillFlag ) ;		// �R�c�̉~����`�悷��

// �摜�`��֐�
extern	int			LoadGraphScreen(           int x, int y, const TCHAR *GraphName,                         int TransFlag ) ;										// �摜�t�@�C����ǂ݂���ŉ�ʂɕ`�悷��
extern	int			LoadGraphScreenWithStrLen( int x, int y, const TCHAR *GraphName, size_t GraphNameLength, int TransFlag ) ;										// �摜�t�@�C����ǂ݂���ŉ�ʂɕ`�悷��

extern	int			DrawGraph(                int x, int y,                                                                 int GrHandle, int TransFlag ) ;																							// �摜�̓��{�`��
extern	int			DrawExtendGraph(          int x1, int y1, int x2, int y2,                                               int GrHandle, int TransFlag ) ;																							// �摜�̊g��`��
extern	int			DrawRotaGraph(            int x, int y,                 double ExRate,                    double Angle, int GrHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;	// �摜�̉�]�`��
extern	int			DrawRotaGraph2(           int x, int y, int cx, int cy, double ExtRate,                   double Angle, int GrHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;	// �摜�̉�]�`��Q( ��]���S�w��t�� )
extern	int			DrawRotaGraph3(           int x, int y, int cx, int cy, double ExtRateX, double ExtRateY, double Angle, int GrHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ; 	// �摜�̉�]�`��R( ��]���S�w��t���{�c���g�嗦�ʎw��� )
extern	int			DrawRotaGraphFast(        int x, int y,                 float  ExRate,                    float  Angle, int GrHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;	// �摜�̉�]�`��( �����ŁA���W�v�Z�̃A���S���Y�����ȗ�������Ă��܂��A�`�挋�ʂɕs�s����������΂�����̕��������ł� )
extern	int			DrawRotaGraphFast2(       int x, int y, int cx, int cy, float  ExtRate,                   float  Angle, int GrHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;	// �摜�̉�]�`��Q( ��]���S�w��t�� )( �����ŁA���W�v�Z�̃A���S���Y�����ȗ�������Ă��܂��A�`�挋�ʂɕs�s����������΂�����̕��������ł� )
extern	int			DrawRotaGraphFast3(       int x, int y, int cx, int cy, float  ExtRateX, float  ExtRateY, float  Angle, int GrHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ; 	// �摜�̉�]�`��R( ��]���S�w��t���{�c���g�嗦�ʎw��� )( �����ŁA���W�v�Z�̃A���S���Y�����ȗ�������Ă��܂��A�`�挋�ʂɕs�s����������΂�����̕��������ł� )
extern	int			DrawModiGraph(            int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4,               int GrHandle, int TransFlag ) ;																							// �摜�̎��R�ό`�`��
extern	int			DrawTurnGraph(            int x, int y,                                                                 int GrHandle, int TransFlag ) ;																							// �摜�̍��E���]�`��
extern	int			DrawReverseGraph(         int x, int y,                                                                 int GrHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;	// �摜�̔��]�`��

extern	int			DrawGraphF(               float xf, float yf,                                                                       int GrHandle, int TransFlag ) ;															// �摜�̕`��( ���W�w�肪 float �� )
extern	int			DrawExtendGraphF(         float x1f, float y1f, float x2f, float y2f,                                               int GrHandle, int TransFlag ) ;															// �摜�̊g��`��( ���W�w�肪 float �� )
extern	int			DrawRotaGraphF(           float xf, float yf,                       double ExRate,                    double Angle, int GrHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;	// �摜�̉�]�`��( ���W�w�肪 float �� )
extern	int			DrawRotaGraph2F(          float xf, float yf, float cxf, float cyf, double ExtRate,                   double Angle, int GrHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;	// �摜�̉�]�`��Q( ��]���S�w��t�� )( ���W�w�肪 float �� )
extern	int			DrawRotaGraph3F(          float xf, float yf, float cxf, float cyf, double ExtRateX, double ExtRateY, double Angle, int GrHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ; 	// �摜�̉�]�`��R( ��]���S�w��t���{�c���g�嗦�ʎw��� )( ���W�w�肪 float �� )
extern	int			DrawRotaGraphFastF(       float xf, float yf,                       float  ExRate,                    float  Angle, int GrHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;	// �摜�̉�]�`��( ���W�w�肪 float �� )( �����ŁA���W�v�Z�̃A���S���Y�����ȗ�������Ă��܂��A�`�挋�ʂɕs�s����������΂�����̕��������ł� )
extern	int			DrawRotaGraphFast2F(      float xf, float yf, float cxf, float cyf, float  ExtRate,                   float  Angle, int GrHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;	// �摜�̉�]�`��Q( ��]���S�w��t�� )( ���W�w�肪 float �� )( �����ŁA���W�v�Z�̃A���S���Y�����ȗ�������Ă��܂��A�`�挋�ʂɕs�s����������΂�����̕��������ł� )
extern	int			DrawRotaGraphFast3F(      float xf, float yf, float cxf, float cyf, float  ExtRateX, float  ExtRateY, float  Angle, int GrHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ; 	// �摜�̉�]�`��R( ��]���S�w��t���{�c���g�嗦�ʎw��� )( ���W�w�肪 float �� )( �����ŁA���W�v�Z�̃A���S���Y�����ȗ�������Ă��܂��A�`�挋�ʂɕs�s����������΂�����̕��������ł� )
extern	int			DrawModiGraphF(           float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4,           int GrHandle, int TransFlag ) ;															// �摜�̎��R�ό`�`��( ���W�w�肪 float �� )
extern	int			DrawTurnGraphF(           float xf, float yf,                                                                       int GrHandle, int TransFlag ) ;															// �摜�̍��E���]�`��( ���W�w�肪 float �� )
extern	int			DrawReverseGraphF(        float xf, float yf,                                                                       int GrHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;	// �摜�̔��]�`��( ���W�w�肪 float �� )

extern	int			DrawChipMap(              int Sx, int Sy, int XNum, int YNum, const int *MapData, int ChipTypeNum, int MapDataPitch, const int *ChipGrHandle, int TransFlag ) ;																											// �`�b�v�摜��g�����Q�c�}�b�v�`��
#ifndef DX_COMPILE_TYPE_C_LANGUAGE
extern	int			DrawChipMap(              int MapWidth, int MapHeight,        const int *MapData, int ChipTypeNum,                   const int *ChipGrHandle, int TransFlag, int MapDrawPointX, int MapDrawPointY, int MapDrawWidth, int MapDrawHeight, int ScreenX, int ScreenY ) ;	// �`�b�v�摜��g�����Q�c�}�b�v�`��
#endif // DX_COMPILE_TYPE_C_LANGUAGE
extern	int			DrawChipMap2(             int MapWidth, int MapHeight,        const int *MapData, int ChipTypeNum,                   const int *ChipGrHandle, int TransFlag, int MapDrawPointX, int MapDrawPointY, int MapDrawWidth, int MapDrawHeight, int ScreenX, int ScreenY ) ;	// �`�b�v�摜��g�����Q�c�}�b�v�`��
extern	int			DrawTile(                 int x1, int y1, int x2, int y2, int Tx, int Ty, double ExtRate, double Angle, int GrHandle, int TransFlag ) ;																																	// �摜��w��̈�Ƀ^�C����ɕ`�悷��

extern	int			DrawRectGraph(            int DestX,  int DestY,                          int SrcX, int SrcY, int    Width, int    Height,                         int GraphHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;				// �摜�̎w���`�����݂̂𓙔{�`��
extern	int			DrawRectExtendGraph(      int DestX1, int DestY1, int DestX2, int DestY2, int SrcX, int SrcY, int SrcWidth, int SrcHeight,                         int GraphHandle, int TransFlag ) ;																	// �摜�̎w���`�����݂̂�g��`��
extern	int			DrawRectRotaGraph(        int x, int y, int SrcX, int SrcY, int Width, int Height, double ExtRate, double Angle,                                   int GraphHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;				// �摜�̎w���`�����݂̂��]�`��
extern	int			DrawRectRotaGraph2(       int x, int y, int SrcX, int SrcY, int Width, int Height, int cx, int cy, double ExtRate,  double Angle,                  int GraphHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;				// �摜�̎w���`�����݂̂��]�`��Q( ��]���S�w��t�� )
extern	int			DrawRectRotaGraph3(       int x, int y, int SrcX, int SrcY, int Width, int Height, int cx, int cy, double ExtRateX, double ExtRateY, double Angle, int GraphHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;				// �摜�̎w���`�����݂̂��]�`��R( ��]���S�w��t���{�c���g�嗦�ʎw��� )
extern	int			DrawRectRotaGraphFast(    int x, int y, int SrcX, int SrcY, int Width, int Height, float ExtRate, float Angle,                                     int GraphHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;				// �摜�̎w���`�����݂̂��]�`��( �����ŁA���W�v�Z�̃A���S���Y�����ȗ�������Ă��܂��A�`�挋�ʂɕs�s����������΂�����̕��������ł� )
extern	int			DrawRectRotaGraphFast2(   int x, int y, int SrcX, int SrcY, int Width, int Height, int cx, int cy, float ExtRate,  float Angle,                    int GraphHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;				// �摜�̎w���`�����݂̂��]�`��Q( ��]���S�w��t�� )( �����ŁA���W�v�Z�̃A���S���Y�����ȗ�������Ă��܂��A�`�挋�ʂɕs�s����������΂�����̕��������ł� )
extern	int			DrawRectRotaGraphFast3(   int x, int y, int SrcX, int SrcY, int Width, int Height, int cx, int cy, float ExtRateX, float ExtRateY, float Angle,    int GraphHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;				// �摜�̎w���`�����݂̂��]�`��R( ��]���S�w��t���{�c���g�嗦�ʎw��� )( �����ŁA���W�v�Z�̃A���S���Y�����ȗ�������Ă��܂��A�`�挋�ʂɕs�s����������΂�����̕��������ł� )
extern	int			DrawRectModiGraph(        int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int SrcX, int SrcY, int Width, int Height,               int GraphHandle, int TransFlag ) ;																	// �摜�̎w���`�����݂̂���R�ό`�`��

extern	int			DrawRectGraphF(           float DestX,  float DestY,                              int   SrcX, int   SrcY, int    Width, int    Height,                           int GraphHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;	// �摜�̎w���`�����݂̂𓙔{�`��( ���W�w�肪 float �� )
extern	int			DrawRectGraphF2(          float DestX,  float DestY,                              float SrcX, float SrcY, float  Width, float  Height,                           int GraphHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;	// �摜�̎w���`�����݂̂𓙔{�`��( ���W�w�肪 float ��( �摜����W�̎w��� float �� ) )
extern	int			DrawRectExtendGraphF(     float DestX1, float DestY1, float DestX2, float DestY2, int   SrcX, int   SrcY, int SrcWidth, int SrcHeight,                           int GraphHandle, int TransFlag ) ;														// �摜�̎w���`�����݂̂�g��`��( ���W�w�肪 float �� )
extern	int			DrawRectExtendGraphF2(    float DestX1, float DestY1, float DestX2, float DestY2, float SrcX, float SrcY, float SrcWidth, float SrcHeight,                   int GraphHandle, int TransFlag ) ;															// �摜�̎w���`�����݂̂�g��`��( ���W�w�肪 float ��( �摜����W�̎w��� float �� ) )
extern	int			DrawRectRotaGraphF(       float x, float y, int SrcX, int SrcY, int Width, int Height,                       double ExtRate,                   double Angle, int GraphHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;	// �摜�̎w���`�����݂̂��]�`��( ���W�w�肪 float �� )
extern	int			DrawRectRotaGraph2F(      float x, float y, int SrcX, int SrcY, int Width, int Height, float cxf, float cyf, double ExtRate,                   double Angle, int GraphHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;	// �摜�̎w���`�����݂̂��]�`��Q( ��]���S�w��t�� )( ���W�w�肪 float �� )
extern	int			DrawRectRotaGraph3F(      float x, float y, int SrcX, int SrcY, int Width, int Height, float cxf, float cyf, double ExtRateX, double ExtRateY, double Angle, int GraphHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;	// �摜�̎w���`�����݂̂��]�`��R( ��]���S�w��t���{�c���g�嗦�ʎw��� )( ���W�w�肪 float �� )
extern	int			DrawRectRotaGraphFastF(   float x, float y, int SrcX, int SrcY, int Width, int Height,                       float ExtRate,                    float  Angle, int GraphHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;	// �摜�̎w���`�����݂̂��]�`��( ���W�w�肪 float �� )( �����ŁA���W�v�Z�̃A���S���Y�����ȗ�������Ă��܂��A�`�挋�ʂɕs�s����������΂�����̕��������ł� )
extern	int			DrawRectRotaGraphFast2F(  float x, float y, int SrcX, int SrcY, int Width, int Height, float cxf, float cyf, float ExtRate,                    float  Angle, int GraphHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;	// �摜�̎w���`�����݂̂��]�`��Q( ��]���S�w��t�� )( ���W�w�肪 float �� )( �����ŁA���W�v�Z�̃A���S���Y�����ȗ�������Ă��܂��A�`�挋�ʂɕs�s����������΂�����̕��������ł� )
extern	int			DrawRectRotaGraphFast3F(  float x, float y, int SrcX, int SrcY, int Width, int Height, float cxf, float cyf, float ExtRateX,  float  ExtRateY, float  Angle, int GraphHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;	// �摜�̎w���`�����݂̂��]�`��R( ��]���S�w��t���{�c���g�嗦�ʎw��� )( ���W�w�肪 float �� )( �����ŁA���W�v�Z�̃A���S���Y�����ȗ�������Ă��܂��A�`�挋�ʂɕs�s����������΂�����̕��������ł� )
extern	int			DrawRectModiGraphF(       float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, int SrcX, int SrcY, int Width, int Height,         int GraphHandle, int TransFlag ) ;															// �摜�̎w���`�����݂̂���R�ό`�`��( ���W�w�肪 float �� )

extern	int			DrawBlendGraph(           int   x, int   y, int GrHandle, int TransFlag,                 int BlendGraph, int BorderParam, int BorderRange ) ;									// �u�����h�摜�ƍ������ĉ摜�𓙔{�`�悷��
extern	int			DrawBlendGraphF(          float x, float y, int GrHandle, int TransFlag,                 int BlendGraph, int BorderParam, int BorderRange ) ;									// �u�����h�摜�ƍ������ĉ摜�𓙔{�`�悷��( ���W�w�肪 float �� )
extern	int			DrawBlendGraphPos(        int   x, int   y, int GrHandle, int TransFlag, int bx, int by, int BlendGraph, int BorderParam, int BorderRange ) ;									// �u�����h�摜�ƍ������ĉ摜�𓙔{�`�悷��( �u�����h�摜�̋N�_���W��w�肷������t�� )

extern	int			DrawCircleGauge(          int   CenterX, int   CenterY, double Percent, int GrHandle, double StartPercent DEFAULTPARAM( = 0.0 ) , double Scale DEFAULTPARAM( = 1.0 ) , int ReverseX DEFAULTPARAM( = FALSE ) , int ReverseY DEFAULTPARAM( = FALSE ) ) ;										// �~�O���t�I�ȕ`���s��( GrHandle �̉摜�̏㉺���E�̒[�͓��ߐF�ɂ��Ă����K�v������܂� )
extern	int			DrawCircleGaugeF(         float CenterX, float CenterY, double Percent, int GrHandle, double StartPercent DEFAULTPARAM( = 0.0 ) , double Scale DEFAULTPARAM( = 1.0 ) , int ReverseX DEFAULTPARAM( = FALSE ) , int ReverseY DEFAULTPARAM( = FALSE ) ) ;										// �~�O���t�I�ȕ`���s��( GrHandle �̉摜�̏㉺���E�̒[�͓��ߐF�ɂ��Ă����K�v������܂� )( ���W�w�肪 float �� )

extern	int			DrawGraphToZBuffer(       int X, int Y,                                                                 int GrHandle, int WriteZMode /* DX_ZWRITE_MASK �� */ ) ;														// �y�o�b�t�@�ɑ΂��ĉ摜�̓��{�`��
extern	int			DrawTurnGraphToZBuffer(   int x, int y,                                                                 int GrHandle, int WriteZMode /* DX_ZWRITE_MASK �� */ ) ;														// �y�o�b�t�@�ɑ΂��ĉ摜�̍��E���]�`��
extern	int			DrawReverseGraphToZBuffer( int x, int y,                                                                int GrHandle, int WriteZMode /* DX_ZWRITE_MASK �� */ , int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;	// �y�o�b�t�@�ɑ΂��ĉ摜�̔��]�`��
extern	int			DrawExtendGraphToZBuffer( int x1, int y1, int x2, int y2,                                               int GrHandle, int WriteZMode /* DX_ZWRITE_MASK �� */ ) ;														// �y�o�b�t�@�ɑ΂��ĉ摜�̊g��`��
extern	int			DrawRotaGraphToZBuffer(   int x, int y, double ExRate, double Angle,                                    int GrHandle, int WriteZMode /* DX_ZWRITE_MASK �� */ , int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;	// �y�o�b�t�@�ɑ΂��ĉ摜�̉�]�`��
extern	int			DrawRotaGraph2ToZBuffer(  int x, int y, int cx, int cy, double ExtRate,                   double Angle, int GrHandle, int WriteZMode /* DX_ZWRITE_MASK �� */ , int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;	// �y�o�b�t�@�ɑ΂��ĉ摜�̉�]�`��Q( ��]���S�w��t�� )
extern	int			DrawRotaGraph3ToZBuffer(  int x, int y, int cx, int cy, double ExtRateX, double ExtRateY, double Angle, int GrHandle, int WriteZMode /* DX_ZWRITE_MASK �� */ , int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ; 	// �y�o�b�t�@�ɑ΂��ĉ摜�̉�]�`��R( ��]���S�w��t���{�c���g�嗦�ʎw��� )
extern	int			DrawRotaGraphFastToZBuffer(  int x, int y, float ExRate, float Angle,                                   int GrHandle, int WriteZMode /* DX_ZWRITE_MASK �� */ , int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;	// �y�o�b�t�@�ɑ΂��ĉ摜�̉�]�`��( �����ŁA���W�v�Z�̃A���S���Y�����ȗ�������Ă��܂��A�`�挋�ʂɕs�s����������΂�����̕��������ł� )
extern	int			DrawRotaGraphFast2ToZBuffer( int x, int y, int cx, int cy, float ExtRate,                  float Angle, int GrHandle, int WriteZMode /* DX_ZWRITE_MASK �� */ , int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;	// �y�o�b�t�@�ɑ΂��ĉ摜�̉�]�`��Q( ��]���S�w��t�� )( �����ŁA���W�v�Z�̃A���S���Y�����ȗ�������Ă��܂��A�`�挋�ʂɕs�s����������΂�����̕��������ł� )
extern	int			DrawRotaGraphFast3ToZBuffer( int x, int y, int cx, int cy, float ExtRateX, float ExtRateY, float Angle, int GrHandle, int WriteZMode /* DX_ZWRITE_MASK �� */ , int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ; 	// �y�o�b�t�@�ɑ΂��ĉ摜�̉�]�`��R( ��]���S�w��t���{�c���g�嗦�ʎw��� )( �����ŁA���W�v�Z�̃A���S���Y�����ȗ�������Ă��܂��A�`�挋�ʂɕs�s����������΂�����̕��������ł� )
extern	int			DrawModiGraphToZBuffer(   int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4,               int GrHandle, int WriteZMode /* DX_ZWRITE_MASK �� */ ) ;														// �y�o�b�t�@�ɑ΂��ĉ摜�̎��R�ό`�`��
extern	int			DrawBoxToZBuffer(         int x1, int y1, int x2, int y2,                                               int FillFlag, int WriteZMode /* DX_ZWRITE_MASK �� */ ) ;														// �y�o�b�t�@�ɑ΂��ċ�`�̕`��
extern	int			DrawCircleToZBuffer(      int x, int y, int r,                                                          int FillFlag, int WriteZMode /* DX_ZWRITE_MASK �� */ ) ;														// �y�o�b�t�@�ɑ΂��ĉ~�̕`��
extern	int			DrawTriangleToZBuffer(    int x1, int y1, int x2, int y2, int x3, int y3,                               int FillFlag, int WriteZMode /* DX_ZWRITE_MASK �� */ ) ;														// �y�o�b�t�@�ɑ΂��ĎO�p�`��`�悷�� 
extern	int			DrawQuadrangleToZBuffer(  int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4,               int FillFlag, int WriteZMode /* DX_ZWRITE_MASK �� */ ) ;														// �y�o�b�t�@�ɑ΂��Ďl�p�`��`�悷��
extern	int			DrawRoundRectToZBuffer(   int x1, int y1, int x2, int y2, int rx, int ry,                               int FillFlag, int WriteZMode /* DX_ZWRITE_MASK �� */ ) ;														// �y�o�b�t�@�ɑ΂��Ċp�̊ۂ��l�p�`��`�悷��

extern	int			DrawPolygon(                             const VERTEX    *VertexArray, int PolygonNum,                                                                                                       int GrHandle, int TransFlag, int UVScaling DEFAULTPARAM( = FALSE ) ) ;		// �Q�c�|���S����`�悷��( Vertex:�O�p�`��`�����钸�_�z��̐擪�A�h���X( ���_�̐��̓|���S���̐��~�R )  PolygonNum:�`�悷��|���S���̐�  GrHandle:�g�p����O���t�B�b�N�n���h��  TransFlag:���ߐF������s�����ǂ���( TRUE:�s��  FALSE:�s��Ȃ� )  UVScaling:��{FALSE��OK )
extern	int			DrawPolygon2D(                           const VERTEX2D  *VertexArray, int PolygonNum,                                                                                                       int GrHandle, int TransFlag ) ;							// �Q�c�|���S����`�悷��
extern	int			DrawPolygon3D(                           const VERTEX3D  *VertexArray, int PolygonNum,                                                                                                       int GrHandle, int TransFlag ) ;							// �R�c�|���S����`�悷��
extern	int			DrawPolygonIndexed2D(                    const VERTEX2D  *VertexArray, int VertexNum, const unsigned short *IndexArray, int PolygonNum,                                                      int GrHandle, int TransFlag ) ;							// �Q�c�|���S����`�悷��( ���_�C���f�b�N�X��g�p )
extern	int			DrawPolygon32bitIndexed2D(               const VERTEX2D  *VertexArray, int VertexNum, const unsigned int   *IndexArray, int PolygonNum,                                                      int GrHandle, int TransFlag ) ;							// �Q�c�|���S����`�悷��( ���_�C���f�b�N�X��g�p )
extern	int			DrawPolygonIndexed3D(                    const VERTEX3D  *VertexArray, int VertexNum, const unsigned short *IndexArray, int PolygonNum,                                                      int GrHandle, int TransFlag ) ;							// �R�c�|���S����`�悷��( ���_�C���f�b�N�X��g�p )
extern	int			DrawPolygon32bitIndexed3D(               const VERTEX3D  *VertexArray, int VertexNum, const unsigned int   *IndexArray, int PolygonNum,                                                      int GrHandle, int TransFlag ) ;							// �R�c�|���S����`�悷��( ���_�C���f�b�N�X��g�p )
extern	int			DrawPolygonIndexed3DBase(                const VERTEX_3D *VertexArray, int VertexNum, const unsigned short *IndexArray, int IndexNum,   int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST �� */, int GrHandle, int TransFlag ) ;							// �R�c�|���S����`�悷��( ���_�C���f�b�N�X��g�p )( ���o�[�W�����p )
extern	int			DrawPolygon32bitIndexed3DBase(           const VERTEX_3D *VertexArray, int VertexNum, const unsigned int   *IndexArray, int IndexNum,   int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST �� */, int GrHandle, int TransFlag ) ;							// �R�c�|���S����`�悷��( ���_�C���f�b�N�X��g�p )( ���o�[�W�����p )
extern	int			DrawPolygon3DBase(                       const VERTEX_3D *VertexArray, int VertexNum,                                                   int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST �� */, int GrHandle, int TransFlag ) ;							// �R�c�|���S����`�悷��( ���o�[�W�����p )
#ifndef DX_COMPILE_TYPE_C_LANGUAGE
extern	int			DrawPolygon3D(                           const VERTEX_3D *VertexArray, int PolygonNum,                                                                                                       int GrHandle, int TransFlag ) ;							// �R�c�|���S����`�悷��( ���o�[�W�����p )
#endif // DX_COMPILE_TYPE_C_LANGUAGE
extern	int			DrawPolygon3D2(                          const VERTEX_3D *VertexArray, int PolygonNum,                                                                                                       int GrHandle, int TransFlag ) ;							// �R�c�|���S����`�悷��( ���o�[�W�����p )

extern	int			DrawPolygonBase(                         const VERTEX    *VertexArray, int VertexNum,                                                   int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST �� */, int GrHandle, int TransFlag, int UVScaling DEFAULTPARAM( = FALSE ) ) ;		// �Q�c�v���~�e�B�u��`�悷��
extern	int			DrawPrimitive2D(                         const VERTEX2D  *VertexArray, int VertexNum,                                                   int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST �� */, int GrHandle, int TransFlag ) ;							// �Q�c�v���~�e�B�u��`�悷��
extern	int			DrawPrimitive3D(                         const VERTEX3D  *VertexArray, int VertexNum,                                                   int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST �� */, int GrHandle, int TransFlag ) ;							// �R�c�v���~�e�B�u��`�悷��
extern	int			DrawPrimitiveIndexed2D(                  const VERTEX2D  *VertexArray, int VertexNum, const unsigned short *IndexArray, int IndexNum,   int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST �� */, int GrHandle, int TransFlag ) ;							// �Q�c�v���~�e�B�u��`�悷��(���_�C���f�b�N�X�g�p)
extern	int			DrawPrimitive32bitIndexed2D(             const VERTEX2D  *VertexArray, int VertexNum, const unsigned int   *IndexArray, int IndexNum,   int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST �� */, int GrHandle, int TransFlag ) ;							// �Q�c�v���~�e�B�u��`�悷��(���_�C���f�b�N�X�g�p)
extern	int			DrawPrimitiveIndexed3D(                  const VERTEX3D  *VertexArray, int VertexNum, const unsigned short *IndexArray, int IndexNum,   int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST �� */, int GrHandle, int TransFlag ) ;							// �R�c�v���~�e�B�u��`�悷��(���_�C���f�b�N�X�g�p)
extern	int			DrawPrimitive32bitIndexed3D(             const VERTEX3D  *VertexArray, int VertexNum, const unsigned int   *IndexArray, int IndexNum,   int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST �� */, int GrHandle, int TransFlag ) ;							// �R�c�v���~�e�B�u��`�悷��(���_�C���f�b�N�X�g�p)

extern	int			DrawPolygon3D_UseVertexBuffer(           int VertexBufHandle,                                                                                                                                                               int GrHandle, int TransFlag ) ;		// ���_�o�b�t�@��g�p���ĂR�c�|���S����`�悷��
extern	int			DrawPrimitive3D_UseVertexBuffer(         int VertexBufHandle,                     int PrimitiveType  /* DX_PRIMTYPE_TRIANGLELIST �� */,                                                                                     int GrHandle, int TransFlag ) ;		// ���_�o�b�t�@��g�p���ĂR�c�v���~�e�B�u��`�悷��
extern	int			DrawPrimitive3D_UseVertexBuffer2(        int VertexBufHandle,                     int PrimitiveType  /* DX_PRIMTYPE_TRIANGLELIST �� */,                 int StartVertex, int UseVertexNum,                                  int GrHandle, int TransFlag ) ;		// ���_�o�b�t�@��g�p���ĂR�c�v���~�e�B�u��`�悷��
extern	int			DrawPolygonIndexed3D_UseVertexBuffer(    int VertexBufHandle, int IndexBufHandle,                                                                                                                                           int GrHandle, int TransFlag ) ;		// ���_�o�b�t�@�ƃC���f�b�N�X�o�b�t�@��g�p���ĂR�c�|���S����`�悷��
extern	int			DrawPrimitiveIndexed3D_UseVertexBuffer(  int VertexBufHandle, int IndexBufHandle, int PrimitiveType  /* DX_PRIMTYPE_TRIANGLELIST �� */,                                                                                     int GrHandle, int TransFlag ) ;		// ���_�o�b�t�@�ƃC���f�b�N�X�o�b�t�@��g�p���ĂR�c�v���~�e�B�u��`�悷��
extern	int			DrawPrimitiveIndexed3D_UseVertexBuffer2( int VertexBufHandle, int IndexBufHandle, int PrimitiveType  /* DX_PRIMTYPE_TRIANGLELIST �� */, int BaseVertex, int StartVertex, int UseVertexNum, int StartIndex, int UseIndexNum, int GrHandle, int TransFlag ) ;		// ���_�o�b�t�@�ƃC���f�b�N�X�o�b�t�@��g�p���ĂR�c�v���~�e�B�u��`�悷��

extern	int			DrawGraph3D(                             float x, float y, float z,                                                                     int GrHandle, int TransFlag ) ;																// �摜�̂R�c�`��
extern	int			DrawExtendGraph3D(                       float x, float y, float z, double ExRateX, double ExRateY,                                     int GrHandle, int TransFlag ) ;																// �摜�̊g��R�c�`��
extern	int			DrawRotaGraph3D(                         float x, float y, float z, double ExRate, double Angle,                                        int GrHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;		// �摜�̉�]�R�c�`��
extern	int			DrawRota2Graph3D(                        float x, float y, float z, float cx, float cy, double ExtRateX, double ExtRateY, double Angle, int GrHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;		// �摜�̉�]�R�c�`��(��]���S�w��^)
extern	int			DrawModiBillboard3D(                     VECTOR Pos, float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4,    int GrHandle, int TransFlag ) ;																// �摜�̎��R�ό`�R�c�`��
extern	int			DrawBillboard3D(                         VECTOR Pos, float cx, float cy, float Size, float Angle,                                       int GrHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;		// �R�c��ԏ�ɉ摜��`��


// �`��ݒ�֌W�֐�
extern	int			SetDrawMode(						int DrawMode ) ;												// �`�惂�[�h��ݒ肷��
extern	int			GetDrawMode(						void ) ;														// �`�惂�[�h��擾����
extern	int			SetDrawBlendMode(					int BlendMode, int BlendParam ) ;								// �`��u�����h���[�h��ݒ肷��
extern	int			GetDrawBlendMode(					int *BlendMode, int *BlendParam ) ;								// �`��u�����h���[�h��擾����
extern	int			SetDrawCustomBlendMode(				int BlendEnable, int SrcBlendRGB /* DX_BLEND_SRC_COLOR �� */, int DestBlendRGB /* DX_BLEND_SRC_COLOR �� */, int BlendOpRGB /* DX_BLENDOP_ADD �� */, int SrcBlendA /* DX_BLEND_SRC_COLOR �� */, int DestBlendA /* DX_BLEND_SRC_COLOR �� */, int BlendOpA /* DX_BLENDOP_ADD �� */, int BlendParam ) ;		// �J�X�^���u�����h���[�h��ݒ肷��
extern	int			GetDrawCustomBlendMode(				int *BlendEnable, int *SrcBlendRGB, int *DestBlendRGB, int *BlendOpRGB, int *SrcBlendA, int *DestBlendA, int *BlendOpA, int *BlendParam ) ;																																								// �J�X�^���u�����h���[�h��擾����
extern	int			SetDrawAlphaTest(					int TestMode, int TestParam ) ;									// �`�掞�̃A���t�@�e�X�g�̐ݒ��s��( TestMode:�e�X�g���[�h( DX_CMP_GREATER�� -1�Ńf�t�H���g����ɖ߂� )  TestParam:�`��A���t�@�l�Ƃ̔�r�Ɏg�p����l( 0�`255 ) )
extern	int			GetDrawAlphaTest(					int *TestMode, int *TestParam ) ;								// �`�掞�̃A���t�@�e�X�g�̐ݒ��擾����( TestMode:�e�X�g���[�h( DX_CMP_GREATER�� -1�Ńf�t�H���g����ɖ߂� )  TestParam:�`��A���t�@�l�Ƃ̔�r�Ɏg�p����l( 0�`255 ) )
extern	int			SetBlendGraph(						int BlendGraph, int BorderParam, int BorderRange ) ;			// ( SetBlendGraphParam �� BlendType = DX_BLENDGRAPHTYPE_WIPE �̏�����s�����֐� )�`�揈�����ɕ`�悷��摜�ƃu�����h���郿�`�����l���t���摜��Z�b�g����( BlendGraph �� -1 �Ńu�����h�@�\�𖳌� )
extern	int			SetBlendGraphParam(					int BlendGraph, int BlendType, ... ) ;							// �`�揈�����ɕ`�悷��摜�ƃu�����h����摜�̃u�����h�ݒ��s���ABlendGraph �� -1 �ɂ���ΐݒ�����A���̏ꍇ BlendType �Ƃ��̌��̃p�����[�^�͖��������
//		int			SetBlendGraphParam(					int BlendGraph, int BlendType = DX_BLENDGRAPHTYPE_NORMAL, int Ratio = ( 0( �u�����h���O�� )�`255( �u�����h���P�O�O�� ) ) ) ;
//		int			SetBlendGraphParam(					int BlendGraph, int BlendType = DX_BLENDGRAPHTYPE_WIPE, int BorderParam = ���E�ʒu(�O�`�Q�T�T), int BorderRange = ���E��(�w��ł���l�͂P�A�U�S�A�P�Q�W�A�Q�T�T�̂S��) ) ;
//		int			SetBlendGraphParam(					int BlendGraph, int BlendType = DX_BLENDGRAPHTYPE_ALPHA ) ;
extern	int			SetBlendGraphPosition(				int x, int y ) ;												// �u�����h�摜�̋N�_���W��Z�b�g����
extern	int			SetBlendGraphPositionMode(			int BlendGraphPositionMode /* DX_BLENDGRAPH_POSMODE_DRAWGRAPH �Ȃ� */ ) ;	// �u�����h�摜�̓K�����W���[�h��ݒ肷��
extern	int			SetDrawBright(						int RedBright, int GreenBright, int BlueBright ) ;				// �`��P�x��ݒ肷��
extern	int			GetDrawBright(						int *Red, int *Green, int *Blue ) ;								// �`��P�x��擾����
extern	int			SetDrawAddColor(					int Red, int Green, int Blue ) ;								// �`��J���[�ɉ��Z����F��ݒ肷��( Red, Green, Blue : ���Z����F( 0 = 0%  255 = 100%  -255 = -100% ) ( �}�C�i�X�̒l�Ō��Z��ł��܂� ) )
extern	int			GetDrawAddColor(					int *Red, int *Green, int *Blue ) ;								// �`��J���[�ɉ��Z����F��擾����
extern	int			SetWriteAlphaChannelFlag(			int Flag ) ;													// �`���̃A���t�@�`�����l���̓�e����������邩��ݒ肷��( FALSE:���������Ȃ�  TRUE:����������( �f�t�H���g ) )
extern	int			GetWriteAlphaChannelFlag(			void ) ;														// �`���̃A���t�@�`�����l���̓�e����������邩��擾����( FALSE:���������Ȃ�  TRUE:����������( �f�t�H���g ) )
extern	int			CheckSeparateAlphaBlendEnable(		void ) ;														// �`���̃A���t�@�`�����l���̓�e����������Ȃ����Ƃ��ł��邩�ǂ�����擾����( TRUE:���������Ȃ����Ƃ��ł���  FALSE:���������Ȃ����Ƃ��ł��Ȃ� )
extern	int			SetIgnoreDrawGraphColor(			int EnableFlag ) ;												// �`�悷��摜�̂q�f�a�����𖳎����邩�ǂ�����w�肷��( EnableFlag:���̋@�\��g�����ǂ���( TRUE:�g��  FALSE:�g��Ȃ�( �f�t�H���g ) )
extern	int			GetIgnoreDrawGraphColor(			void ) ;														// �`�悷��摜�̂q�f�a�����𖳎����邩�ǂ�����擾����( �߂�l  ���̋@�\��g�����ǂ���( TRUE:�g��  FALSE:�g��Ȃ� )
extern	int			SetMaxAnisotropy(					int MaxAnisotropy ) ;											// �ő�ٕ����l��ݒ肷��
extern	int			GetMaxAnisotropy(					void ) ;														// �ő�ٕ����l��擾����
extern	int			SetUseLarge3DPositionSupport(		int UseFlag ) ;													// �R�c�����Ŏg�p������W�l�� 10000000.0f �Ȃǂ̑傫�Ȓl�ɂȂ��Ă�`��̕����������}���鏈����g�p���邩�ǂ�����ݒ肷��ADxLib_Init �̌Ăяo���O�ł̂ݎg�p�\( TRUE:�`��̕����}���鏈����g�p����( CPU���ׂ��オ��܂� )�@�@FALSE:�`��̕����}���鏈���͎g�p���Ȃ�( �f�t�H���g ) )

extern	int			SetUseZBufferFlag(					int Flag ) ;													// �y�o�b�t�@��g�p���邩�ǂ�����ݒ肷��( �Q�c�ƂR�c�`��ɉe�� )( TRUE:�y�o�b�t�@��g�p����  FALSE:�y�o�b�t�@��g�p���Ȃ�( �f�t�H���g ) )
extern	int			SetWriteZBufferFlag(				int Flag ) ;													// �y�o�b�t�@�ɏ������݂�s�����ǂ�����ݒ肷��( �Q�c�ƂR�c�`��ɉe�� )( TRUE:�������݂�s��  FALSE:�������݂�s��Ȃ�( �f�t�H���g ) )
extern	int			SetZBufferCmpType(					int CmpType /* DX_CMP_NEVER �� */ ) ;							// �y�o�b�t�@�̂y�l�Ə������ނy�l�Ƃ̔�r���[�h��ݒ肷��( �Q�c�ƂR�c�`��ɉe�� )( CmpType:DX_CMP_NEVER��( �f�t�H���g:DX_CMP_LESSEQUAL ) )
extern	int			SetZBias(							int Bias ) ;													// �������ނy�l�̃o�C�A�X��ݒ肷��( �Q�c�ƂR�c�`��ɉe�� )( Bias:�o�C�A�X�l( �f�t�H���g:0 ) )
extern	int			SetUseZBuffer3D(					int Flag ) ;													// �y�o�b�t�@��g�p���邩�ǂ�����ݒ肷��( �R�c�`��݂̂ɉe�� )( TRUE:�y�o�b�t�@��g�p����  FALSE:�y�o�b�t�@��g�p���Ȃ�( �f�t�H���g ) )
extern	int			SetWriteZBuffer3D(					int Flag ) ;													// �y�o�b�t�@�ɏ������݂�s�����ǂ�����ݒ肷��( �R�c�`��݂̂ɉe�� )( TRUE:�������݂�s��  FALSE:�������݂�s��Ȃ�( �f�t�H���g ) )
extern	int			SetZBufferCmpType3D(				int CmpType /* DX_CMP_NEVER �� */ ) ;							// �y�o�b�t�@�̂y�l�Ə������ނy�l�Ƃ̔�r���[�h��ݒ肷��( �R�c�`��݂̂ɉe�� )( CmpType:DX_CMP_NEVER��( �f�t�H���g:DX_CMP_LESSEQUAL ) )
extern	int			SetZBias3D(							int Bias ) ;													// �������ނy�l�̃o�C�A�X��ݒ肷��( �R�c�`��݂̂ɉe�� )( Bias:�o�C�A�X�l( �f�t�H���g:0 ) )
extern	int			SetDrawZ(							float Z ) ;														// �Q�c�`��ły�o�b�t�@�ɏ������ނy�l��ݒ肷��( Z:�������ނy�l( �f�t�H���g:0.2f ) )
extern	int			SetUseReversedZ(					int Flag ) ;													// �y�o�b�t�@�ɏ������ނy�l��W�������Ɣ��]�����l( ���o�[�X�y )�ɂ��邩�ǂ�����ݒ肷��ADxLib_Init���s�O�̂ݎg�p�\( TRUE:���]�����l�ɂ���@FALSE:�ʏ�̒l�ɂ���( �f�t�H���g ) )

extern	int			SetDrawArea(						int x1, int y1, int x2, int y2 ) ;								// �`��\�̈�̐ݒ肷��
extern	int			GetDrawArea(						RECT *Rect ) ;													// �`��\�̈��擾����
extern	int			SetDrawAreaFull(					void ) ;														// �`��\�̈��`��Ώۉ�ʑS�̂ɂ���
extern	int			SetDraw3DScale(						float Scale ) ;													// �R�c�`��̊g�嗦��ݒ肷��

extern	int			SetRestoreShredPoint(				void (* ShredPoint )( void ) ) ;								// SetRestoreGraphCallback �̋���
extern	int			SetRestoreGraphCallback(			void (* Callback )( void ) ) ;									// �O���t�B�b�N�n���h�������֐���o�^����
extern	int			RunRestoreShred(					void ) ;														// �O���t�B�b�N�����֐�����s����
extern	int			SetGraphicsDeviceRestoreCallbackFunction( void (* Callback )( void *Data ), void *CallbackData ) ;	// �O���t�B�b�N�X�f�o�C�X�����X�g���畜�A�����ۂɌĂ΂��R�[���o�b�N�֐���ݒ肷��
extern	int			SetGraphicsDeviceLostCallbackFunction(    void (* Callback )( void *Data ), void *CallbackData ) ;	// �O���t�B�b�N�X�f�o�C�X�����X�g���畜�A����O�ɌĂ΂��R�[���o�b�N�֐���ݒ肷��

extern	int			SetTransformTo2D(					const MATRIX   *Matrix ) ;										// �Q�c�`��Ɏg�p�����ϊ��s���ݒ肷��
extern	int			SetTransformTo2DD(					const MATRIX_D *Matrix ) ;										// �Q�c�`��Ɏg�p�����ϊ��s���ݒ肷��
extern	int			ResetTransformTo2D(					void ) ;														// �Q�c�`��p�Ɏg�p����ϊ��s��̐ݒ�������Ԃɖ߂�
extern	int			SetTransformToWorld(				const MATRIX   *Matrix ) ;										// ���[�J�����W���烏�[���h���W�ɕϊ����邽�߂̍s���ݒ肷��
extern	int			SetTransformToWorldD(				const MATRIX_D *Matrix ) ;										// ���[�J�����W���烏�[���h���W�ɕϊ����邽�߂̍s���ݒ肷��
extern	int			GetTransformToWorldMatrix(			      MATRIX   *MatBuf ) ;										// ���[�J�����W���烏�[���h���W�ɕϊ����邽�߂̍s���擾����
extern	int			GetTransformToWorldMatrixD(			      MATRIX_D *MatBuf ) ;										// ���[�J�����W���烏�[���h���W�ɕϊ����邽�߂̍s���擾����
extern	int			SetTransformToView(					const MATRIX   *Matrix ) ;										// ���[���h���W����r���[���W�ɕϊ����邽�߂̍s���ݒ肷��
extern	int			SetTransformToViewD(				const MATRIX_D *Matrix ) ;										// ���[���h���W����r���[���W�ɕϊ����邽�߂̍s���ݒ肷��
extern	int			GetTransformToViewMatrix(			      MATRIX   *MatBuf ) ;										// ���[���h���W����r���[���W�ɕϊ����邽�߂̍s���擾����
extern	int			GetTransformToViewMatrixD(			      MATRIX_D *MatBuf ) ;										// ���[���h���W����r���[���W�ɕϊ����邽�߂̍s���擾����
extern	int			SetTransformToProjection(			const MATRIX   *Matrix ) ;										// �r���[���W����v���W�F�N�V�������W�ɕϊ����邽�߂̍s���ݒ肷��
extern	int			SetTransformToProjectionD(			const MATRIX_D *Matrix ) ;										// �r���[���W����v���W�F�N�V�������W�ɕϊ����邽�߂̍s���ݒ肷��
extern	int			GetTransformToProjectionMatrix(		      MATRIX   *MatBuf ) ;										// �r���[���W����v���W�F�N�V�������W�ɕϊ����邽�߂̍s���擾����
extern	int			GetTransformToProjectionMatrixD(	      MATRIX_D *MatBuf ) ;										// �r���[���W����v���W�F�N�V�������W�ɕϊ����邽�߂̍s���擾����
extern	int			SetTransformToViewport(				const MATRIX   *Matrix ) ;										// �r���[�|�[�g�s���ݒ肷��
extern	int			SetTransformToViewportD(			const MATRIX_D *Matrix ) ;										// �r���[�|�[�g�s���ݒ肷��
extern	int			GetTransformToViewportMatrix(	    MATRIX   *MatBuf ) ;											// �r���[�|�[�g�s���擾����
extern	int			GetTransformToViewportMatrixD(	    MATRIX_D *MatBuf ) ;											// �r���[�|�[�g�s���擾����
extern	int			GetTransformToAPIViewportMatrix(    MATRIX   *MatBuf ) ;											// Direct3D�Ŏ����K�p�����r���[�|�[�g�s���擾����
extern	int			GetTransformToAPIViewportMatrixD(   MATRIX_D *MatBuf ) ;											// Direct3D�Ŏ����K�p�����r���[�|�[�g�s���擾����
extern	int			SetDefTransformMatrix(				void ) ;														// �f�t�H���g�̕ϊ��s���ݒ肷��
extern	int			GetTransformPosition(				VECTOR   *LocalPos, float  *x, float  *y ) ;					// ���[�J�����W����X�N���[�����W��擾����
extern	int			GetTransformPositionD(				VECTOR_D *LocalPos, double *x, double *y ) ;					// ���[�J�����W����X�N���[�����W��擾����
extern	float		GetBillboardPixelSize(				VECTOR   WorldPos, float  WorldSize ) ;							// ���[���h��ԏ�̃r���{�[�h�̃T�C�Y����X�N���[���ɓ��e�����ꍇ�̃s�N�Z���P�ʂ̃T�C�Y��擾����
extern	double		GetBillboardPixelSizeD(				VECTOR_D WorldPos, double WorldSize ) ;							// ���[���h��ԏ�̃r���{�[�h�̃T�C�Y����X�N���[���ɓ��e�����ꍇ�̃s�N�Z���P�ʂ̃T�C�Y��擾����
extern	VECTOR		ConvWorldPosToViewPos(				VECTOR   WorldPos ) ;											// ���[���h���W��r���[���W�ɕϊ�����
extern	VECTOR_D	ConvWorldPosToViewPosD(				VECTOR_D WorldPos ) ;											// ���[���h���W��r���[���W�ɕϊ�����
extern	VECTOR		ConvWorldPosToScreenPos(			VECTOR   WorldPos ) ;											// ���[���h���W��X�N���[�����W�ɕϊ�����
extern	VECTOR_D	ConvWorldPosToScreenPosD(			VECTOR_D WorldPos ) ;											// ���[���h���W��X�N���[�����W�ɕϊ�����
extern	FLOAT4		ConvWorldPosToScreenPosPlusW(		VECTOR   WorldPos ) ;											// ���[���h���W��X�N���[�����W�ɕϊ�����A�Ō�̂w�x�y���W��v�Ŋ���O�̒l�𓾂�
extern	DOUBLE4		ConvWorldPosToScreenPosPlusWD(		VECTOR_D WorldPos ) ;											// ���[���h���W��X�N���[�����W�ɕϊ�����A�Ō�̂w�x�y���W��v�Ŋ���O�̒l�𓾂�
extern	VECTOR		ConvScreenPosToWorldPos(			VECTOR   ScreenPos ) ;											// �X�N���[�����W����[���h���W�ɕϊ�����
extern	VECTOR_D	ConvScreenPosToWorldPosD(			VECTOR_D ScreenPos ) ;											// �X�N���[�����W����[���h���W�ɕϊ�����
extern	VECTOR		ConvScreenPosToWorldPos_ZLinear(	VECTOR   ScreenPos ) ;											// �X�N���[�����W����[���h���W�ɕϊ�����( Z���W�����` )
extern	VECTOR_D	ConvScreenPosToWorldPos_ZLinearD(	VECTOR_D ScreenPos ) ;											// �X�N���[�����W����[���h���W�ɕϊ�����( Z���W�����` )

extern	int			SetUseCullingFlag(					int Flag ) ;													// SetUseBackCulling �̋�����
extern	int			SetUseBackCulling(					int Flag /* DX_CULLING_LEFT �� */ ) ;							// �|���S���J�����O���[�h��ݒ肷��
extern	int			GetUseBackCulling(					void ) ;														// �|���S���J�����O���[�h��擾����
extern	int			SetUseRightHandClippingProcess(		int Flag ) ;													// �E����W�n�̃N���b�s���O������s������ݒ肷��( TRUE:�E����W�n�̃N���b�s���O������s��  FALSE:������W�n�̃N���b�s���O������s��( �f�t�H���g ) )
extern	int			GetUseRightHandClippingProcess(		void ) ;														// �E����W�n�̃N���b�s���O������s������擾����( TRUE:�E����W�n�̃N���b�s���O������s��  FALSE:������W�n�̃N���b�s���O������s��( �f�t�H���g ) )

extern	int			SetTextureAddressMode(				int Mode /* DX_TEXADDRESS_WRAP �� */ , int Stage DEFAULTPARAM( = -1 ) ) ;	// �e�N�X�`���A�h���X���[�h��ݒ肷��
extern	int			SetTextureAddressModeUV(			int ModeU, int ModeV, int Stage DEFAULTPARAM( = -1 ) ) ;					// �e�N�X�`���A�h���X���[�h��ݒ肷��( U �� V ��ʁX�ɐݒ肷�� )
extern	int			SetTextureAddressTransform(			float TransU, float TransV, float ScaleU, float ScaleV, float RotCenterU, float RotCenterV, float Rotate ) ;	// �e�N�X�`�����W�ϊ��p�����[�^��ݒ肷��
extern	int			SetTextureAddressTransformMatrix(	MATRIX Matrix ) ;												// �e�N�X�`�����W�ϊ��s���ݒ肷��
extern	int			ResetTextureAddressTransform(		void ) ;														// �e�N�X�`�����W�ϊ��ݒ����Z�b�g����

extern	int			SetFogEnable(						int Flag ) ;													// �t�H�O��L���ɂ��邩�ǂ�����ݒ肷��( TRUE:�L��  FALSE:���� )
extern	int			GetFogEnable(						void ) ;														// �t�H�O���L�����ǂ�����擾����( TRUE:�L��  FALSE:���� )
extern	int			SetFogMode(							int Mode /* DX_FOGMODE_NONE �� */ ) ;							// �t�H�O���[�h��ݒ肷��
extern	int			GetFogMode(							void ) ;														// �t�H�O���[�h��擾����
extern	int			SetFogColor(						int  r, int  g, int  b ) ;										// �t�H�O�J���[��ݒ肷��
extern	int			GetFogColor(						int *r, int *g, int *b ) ;										// �t�H�O�J���[��擾����
extern	int			SetFogStartEnd(						float  start, float  end ) ;									// �t�H�O���n�܂鋗���ƏI�����鋗����ݒ肷��( 0.0f �` 1.0f )
extern	int			GetFogStartEnd(						float *start, float *end ) ;									// �t�H�O���n�܂鋗���ƏI�����鋗����擾����( 0.0f �` 1.0f )
extern	int			SetFogDensity(						float density ) ;												// �t�H�O�̖��x��ݒ肷��( 0.0f �` 1.0f )
extern	float		GetFogDensity(						void ) ;														// �t�H�O�̖��x��擾����( 0.0f �` 1.0f )

extern	int			SetVerticalFogEnable(				int Flag ) ;													// �����t�H�O��L���ɂ��邩�ǂ�����ݒ肷��( TRUE:�L��  FALSE:���� )
extern	int			GetVerticalFogEnable(				void ) ;														// �����t�H�O���L�����ǂ�����擾����( TRUE:�L��  FALSE:���� )
extern	int			SetVerticalFogMode(					int Mode /* DX_FOGMODE_NONE �� */ ) ;							// �����t�H�O���[�h��ݒ肷��
extern	int			GetVerticalFogMode(					void ) ;														// �����t�H�O���[�h��擾����
extern	int			SetVerticalFogColor(				int  r, int  g, int  b ) ;										// �����t�H�O�J���[��ݒ肷��
extern	int			GetVerticalFogColor(				int *r, int *g, int *b ) ;										// �����t�H�O�J���[��擾����
extern	int			SetVerticalFogStartEnd(				float  start, float  end ) ;									// �����t�H�O���n�܂鋗���ƏI�����鋗����ݒ肷��( 0.0f �` 1.0f )
extern	int			GetVerticalFogStartEnd(				float *start, float *end ) ;									// �����t�H�O���n�܂鋗���ƏI�����鋗����擾����( 0.0f �` 1.0f )
extern	int			SetVerticalFogDensity(				float start, float density ) ;									// �����t�H�O���n�܂鏈���Ɩ��x��ݒ肷��( 0.0f �` 1.0f )
extern	int			GetVerticalFogDensity(				float *start, float *density ) ;								// �����t�H�O�̎n�܂鏈���Ɩ��x��擾����( 0.0f �` 1.0f )


// ��ʊ֌W�֐�
#ifndef DX_COMPILE_TYPE_C_LANGUAGE
extern	unsigned int	GetPixel(									int x, int y ) ;																// �w����W�̐F��擾����
#endif // DX_COMPILE_TYPE_C_LANGUAGE
extern	unsigned int	GetPixelDX(									int x, int y ) ;																// �w����W�̐F��擾����
extern	COLOR_F			GetPixelF(									int x, int y ) ;																// �w����W�̐F��擾����( float�^ )
extern	int				SetBackgroundColor(							int Red,  int  Green, int  Blue, int  Alpha DEFAULTPARAM( = 0 )    ) ;			// ���C���E�C���h�E�̔w�i�F��ݒ肷��( Red,Green,Blue,Alpha:���ꂼ�� �O�`�Q�T�T )
extern	int				GetBackgroundColor(							int *Red, int *Green, int *Blue, int *Alpha DEFAULTPARAM( = NULL ) ) ;			// ���C���E�C���h�E�̔w�i�F��擾����( Red,Green,Blue,Alpha:���ꂼ�� �O�`�Q�T�T )
extern	int				GetDrawScreenGraph(							                             int x1, int y1, int x2, int y2,                       int GrHandle, int UseClientFlag DEFAULTPARAM( = TRUE ) ) ;	// �`���̉�ʂ���w��̈�̉摜����O���t�B�b�N�n���h���ɓ]������
extern	int				BltDrawValidGraph(							int TargetDrawValidGrHandle, int x1, int y1, int x2, int y2, int DestX, int DestY, int DestGrHandle ) ;							// SetDrawScreen �ŕ`��Ώۂɂł���O���t�B�b�N�n���h������w��̈�̉摜����ʂ̃O���t�B�b�N�n���h���ɓ]������
extern	int				ScreenFlip(									void ) ;																		// ����ʂƕ\��ʂ̓�e��������
extern 	int				ScreenCopy(									void ) ;																		// ����ʂ̓�e��\��ʂɓ]������
extern	int				WaitVSync(									int SyncNum ) ;																	// ���������M����҂�
extern	int				ClearDrawScreen(					        const RECT *ClearRect DEFAULTPARAM( = NULL ) ) ;												// ��ʂ�N���A����
extern	int				ClearDrawScreenZBuffer(						const RECT *ClearRect DEFAULTPARAM( = NULL ) ) ;												// ��ʂ̂y�o�b�t�@��N���A����
extern	int				ClsDrawScreen(								void ) ;																		// ClearDrawScreen�̋�����
extern	int				SetDrawScreen(								int DrawScreen ) ;																// �`����ʂ�ݒ肷��( MakeScreen �ō쐬�����O���t�B�b�N�n���h����n�����Ƃ��ł��܂� )
extern	int				GetDrawScreen(								void ) ;																		// �`����ʂ�擾����
extern	int				GetActiveGraph(								void ) ;																		// GetDrawScreen �̋�����
extern	int				SetUseSetDrawScreenSettingReset(			int UseFlag ) ;																	// SetDrawScreen ����s�����ۂɃJ������`��͈͂̐ݒ����Z�b�g���邩��ݒ肷��( UseFlag  TRUE:���Z�b�g����( �f�t�H���g )  FALSE:���Z�b�g���Ȃ� )
extern	int				GetUseSetDrawScreenSettingReset(			void ) ;																		// SetDrawScreen ����s�����ۂɃJ������`��͈͂̐ݒ����Z�b�g���邩��擾����
extern	int				SetDrawZBuffer(								int DrawScreen ) ;																// �`���y�o�b�t�@�̃Z�b�g( DrawScreen �t���̂y�o�b�t�@��`���y�o�b�t�@�ɂ���ADrawScreen �� -1 �ɂ���ƃf�t�H���g�̕`���y�o�b�t�@�ɖ߂� )
extern	int				SetGraphMode(								int ScreenSizeX, int ScreenSizeY, int ColorBitDepth, int RefreshRate DEFAULTPARAM( = 60 ) ) ;	// ��ʃ��[�h��ݒ肷��
extern	int				SetUserScreenImage(							void *Image, int PixelFormat /* DX_USER_SCREEN_PIXEL_FORMAT_R5G6B5 �� */ ) ;	// ��ʂ̃������C���[�W��Z�b�g����( DxLib_Init �̑O�ŌĂԕK�v������( DxLib_Init �̑O�Ɉ�x�ł�Ă�ł���΁ADxLib_Init ��� Image �̃A�h���X�݂̂̕ύX�ړI�ŌĂԂ��Ƃ͉\ )�APixelFormat �� DX_USER_SCREEN_PIXEL_FORMAT_R5G6B5 ���� DX_USER_SCREEN_PIXEL_FORMAT_X8R8G8B8 �̓�ȊO��w�肵���ꍇ�͂c�w���C�u�����̕`��֐��͈�؎g�p�ł��Ȃ��Ȃ�܂� )
extern	int				SetFullScreenResolutionMode(				int ResolutionMode /* DX_FSRESOLUTIONMODE_NATIVE �� */ ) ;						// �t���X�N���[���𑜓x���[�h��ݒ肷��
extern	int				GetFullScreenResolutionMode(				int *ResolutionMode, int *UseResolutionMode ) ;									// �t���X�N���[���𑜓x���[�h��擾����( UseResolutionMode �͎��ۂɎg�p����Ă���𑜓x���[�h( �Ⴆ�� DX_FSRESOLUTIONMODE_NATIVE ��w�肵�Ă��Ă���j�^���w��̉𑜓x�ɑΉ����Ă��Ȃ��ꍇ�� UseResolutionMode �� DX_FSRESOLUTIONMODE_DESKTOP �� DX_FSRESOLUTIONMODE_MAXIMUM �ɂȂ�܂� ) )
extern	int				GetUseFullScreenResolutionMode(				void ) ;																		// �t���X�N���[���𑜓x���[�h��擾����( GetFullScreenResolutionMode �� UseResolutionMode �Ŏ擾�ł���l��Ԃ��֐� )
extern	int				SetFullScreenScalingMode(					int ScalingMode /* DX_FSSCALINGMODE_NEAREST �� */ , int FitScaling DEFAULTPARAM( = FALSE ) ) ;	// �t���X�N���[�����[�h���̉�ʊg�僂�[�h��ݒ肷��
extern	int				SetEmulation320x240(						int Flag ) ;																	// �U�S�O���S�W�O�̉�ʂłR�Q�O���Q�S�O�̉�ʉ𑜓x�ɂ��邩�ǂ�����ݒ肷��A�U�S�O���S�W�O�ȊO�̉𑜓x�ł͖���( TRUE:�L��  FALSE:���� )
extern	int				SetZBufferSize(								int ZBufferSizeX, int ZBufferSizeY ) ;											// ��ʗp�̂y�o�b�t�@�̃T�C�Y��ݒ肷��
extern	int				SetZBufferBitDepth(							int BitDepth ) ;																// ��ʗp�̂y�o�b�t�@�̃r�b�g�[�x��ݒ肷��( 16 or 24 or 32 )
extern	int				SetWaitVSyncFlag(							int Flag ) ;																	// ScreenFlip ���s���ɂu�r�x�m�b�҂�����邩�ǂ�����ݒ肷��
extern	int				GetWaitVSyncFlag(							void ) ;																		// ScreenFlip ���s���ɂu�r�x�m�b�҂�����邩�ǂ�����擾����
extern	int				SetFullSceneAntiAliasingMode(				int Samples, int Quality ) ;													// ��ʂ̃t���X�N���[���A���`�G�C���A�X���[�h�̐ݒ��s��( DxLib_Init �̑O�ł̂ݎg�p�\ )
extern	int				SetGraphDisplayArea(						int x1, int y1, int x2, int y2 ) ;												// ScreenFlip ���ɕ\��ʑS�̂ɓ]�����闠��ʂ̗̈��ݒ肷��( DxLib_Init �̑O�ł̂ݎg�p�\ )
extern	int				SetChangeScreenModeGraphicsSystemResetFlag(	int Flag ) ;																	// ��ʃ��[�h�ύX��( �ƃE�C���h�E���[�h�ύX�� )�ɃO���t�B�b�N�X�V�X�e���̐ݒ��O���t�B�b�N�n���h������Z�b�g���邩�ǂ�����ݒ肷��( TRUE:���Z�b�g����( �f�t�H���g )  FALSE:���Z�b�g���Ȃ� )
extern	int				GetScreenState(								int *SizeX, int *SizeY, int *ColorBitDepth ) ;									// ���݂̉�ʂ̉𑜓x�ƃJ���[�r�b�g���𓾂� 
extern	int				GetDrawScreenSize(							int *XBuf, int *YBuf ) ;														// �`���̃T�C�Y��擾����
extern	int				GetScreenBitDepth(							void ) ;																		// ��ʂ̃J���[�r�b�g����擾����
extern	int				GetColorBitDepth(							void ) ;																		// GetScreenBitDepth �̋�����
extern	int				GetChangeDisplayFlag(						void ) ;																		// ��ʃ��[�h���ύX����Ă��邩�ǂ�����擾����
extern	int				GetVideoMemorySize(							int *AllSize, int *FreeSize ) ;													// �r�f�I�������̗e�ʂ𓾂�
extern	int				GetVideoMemorySizeEx(						ULONGLONG *TotalSize, ULONGLONG *UseSize ) ;									// �r�f�I�������̗e�ʂ𓾂�( 64bit�� )
extern	int				GetRefreshRate(								void ) ;																		// ���݂̉�ʂ̃��t���b�V�����[�g��擾����
extern	int				GetDisplayNum(								void ) ;																		// �f�B�X�v���C�̐���擾
extern	int				GetDisplayInfo(								int DisplayIndex, int *DesktopRectX, int *DesktopRectY, int *DesktopSizeX, int *DesktopSizeY, int *IsPrimary, int *DesktopRefreshRate DEFAULTPARAM( = NULL ) ) ;	// �f�B�X�v���C�̃f�X�N�g�b�v��ł̋�`�ʒu��擾����
extern	int				GetDisplayModeNum(							int DisplayIndex DEFAULTPARAM( = 0 ) ) ;										// �ύX�\�ȃf�B�X�v���C���[�h�̐���擾����
extern	DISPLAYMODEDATA	GetDisplayMode(								int ModeIndex, int DisplayIndex DEFAULTPARAM( = 0 ) ) ;							// �ύX�\�ȃf�B�X�v���C���[�h�̏���擾����( ModeIndex �� 0 �` GetDisplayModeNum �̖߂�l-1 )
extern	DISPLAYMODEDATA	GetFullScreenUseDisplayMode(				void ) ;																		// �t���X�N���[�����[�h�ŋN�����Ă���ꍇ�̎g�p���Ă���f�B�X�v���C���[�h�̏���擾����( ���z�t���X�N���[�����[�h�̏ꍇ�͎擾�ł��Ȃ� )
extern	int				GetDisplayMaxResolution(					int *SizeX, int *SizeY, int DisplayIndex DEFAULTPARAM( = 0 ) ) ;				// �f�B�X�v���C�̍ő�𑜓x��擾����
extern	const COLORDATA* GetDispColorData(							void ) ;																		// �f�B�X�v���C�̃J���[�f�[�^�A�h���X��擾����
extern	int				GetMultiDrawScreenNum(						void ) ;																		// �����ɕ`���s�����Ƃ��ł����ʂ̐���擾����
extern	int				GetDrawFloatCoordType(						void ) ;																		// DrawGraphF ���̕��������_�l�ō��W��w�肷��֐��ɂ�������W�^�C�v��擾����( �߂�l : DX_DRAWFLOATCOORDTYPE_DIRECT3D9 �Ȃ� )

// ���̑��ݒ�֌W�֐�
extern	int			SetUseNormalDrawShader(						int Flag ) ;									// �ʏ�`��Ƀv���O���}�u���V�F�[�_�[��g�p���邩�ǂ�����ݒ肷��( TRUE:�g�p����( �f�t�H���g )  FALSE:�g�p���Ȃ� )
extern	int			SetUseSoftwareRenderModeFlag(				int Flag ) ;									// �\�t�g�E�G�A�����_�����O���[�h��g�p���邩�ǂ�����ݒ肷��( TRUE:�g�p����  FALSE:�g�p���Ȃ�( �f�t�H���g ) )( DxLib_Init �̑O�ɌĂԕK�v������܂� )
extern	int			SetNotUse3DFlag(							int Flag ) ;									// ( �����ʂ�SetUseSoftwareRenderModeFlag ��g�p���ĉ����� )�R�c�@�\��g��Ȃ����ǂ�����ݒ肷��
extern	int			SetUse3DFlag(								int Flag ) ;									// ( �����ʂ�SetUseSoftwareRenderModeFlag ��g�p���ĉ����� )�R�c�@�\��g�����ǂ�����ݒ肷��
extern	int			GetUse3DFlag(								void ) ;										// �`��ɂR�c�@�\��g�����ǂ�����擾����
extern	int			SetScreenMemToVramFlag(						int Flag ) ;									// ( �����ʂ�SetUseSoftwareRenderModeFlag ��g�p���ĉ����� )��ʂ̃s�N�Z���f�[�^��u�q�`�l�ɒu�����ǂ�����ݒ肷��
extern	int			GetScreenMemToSystemMemFlag(				void ) ;										// ��ʂ̃s�N�Z���f�[�^���V�X�e����������ɑ��݂��邩��擾����

extern	int			SetWindowDrawRect(							const RECT *DrawRect ) ;						// �ʏ�g�p���Ȃ�
extern	int			RestoreGraphSystem(							void ) ;										// �c�w���C�u�����̃O���t�B�b�N�X�����֘A�̕��A������s��
extern	int			SetUseHardwareVertexProcessing(				int Flag ) ;									// �n�[�h�E�G�A�̒��_���Z�����@�\��g�p���邩�ǂ�����ݒ肷��( TRUE:�g�p����( �f�t�H���g )  FALSE:�g�p���Ȃ� )( DxLib_Init �̑O�ɌĂԕK�v������܂� )
extern	int			SetUsePixelLighting(						int Flag ) ;									// �s�N�Z���P�ʂŃ��C�e�B���O��s�����ǂ�����ݒ肷��A�v ShaderModel 3.0( TRUE:�s�N�Z���P�ʂ̃��C�e�B���O��s��  FALSE:���_�P�ʂ̃��C�e�B���O��s��( �f�t�H���g ) )
extern	int			SetUseOldDrawModiGraphCodeFlag(				int Flag ) ;									// �Â��o�[�W������ DrawModiGraph �֐��̃R�[�h��g�p���邩�ǂ�����ݒ肷��
extern	int			SetUseVramFlag(								int Flag ) ;									// ( ���݌��ʂȂ� )�u�q�`�l��g�p���邩�̃t���O��Z�b�g����
extern	int			GetUseVramFlag(								void ) ;										// ( ���݌��ʂȂ� )�Q�c�O���t�B�b�N�T�[�t�F�X�쐬���ɃV�X�e���������[��g�p���邩�̃t���O�擾
extern	int			SetBasicBlendFlag(							int Flag ) ;									// ( ���݌��ʂȂ� )�ȗ����u�����h������s�����ۂ��̃t���O��Z�b�g����
extern	int			SetUseBasicGraphDraw3DDeviceMethodFlag(		int Flag ) ;									// ( ���݌��ʂȂ� )�P���}�`�̕`��ɂR�c�f�o�C�X�̋@�\��g�p���邩�ǂ�����ݒ肷��
extern	int			SetUseDisplayIndex(							int Index ) ;									// �c�w���C�u�����̃E�C���h�E��\������f�B�X�v���C�f�o�C�X��ݒ肷��( -1 ��w�肷��ƃ}�E�X�J�[�\��������f�B�X�v���C�f�o�C�X�ɂc�w���C�u�����̃E�C���h�E��\������ )
extern	int			RenderVertex(								void ) ;										// ���_�o�b�t�@�ɗ��܂������_�f�[�^��`�悷��( ����p�r )

// �`��p�t�H�[�}���X�֌W�֐�
extern	int			GetDrawCallCount(							void ) ;										// �O�X��� ScreenFlip �Ăяo������A�O��� ScreenFlip �Ăяo���܂ł̊Ԃɍs��ꂽ�`��R�[���̉񐔂�擾����
extern	float		GetFPS(										void ) ;										// �t���[�����[�g( �P�b�ԂɌĂ΂�� ScreenFlip �̉� )��擾����

#ifndef DX_NON_SAVEFUNCTION

// �`����ʕۑ��֐�
// Jpeg_Quality         = 0:��掿�`100:���掿
// Png_CompressionLevel = 0:�����k�`  9:�ō����k
extern	int			SaveDrawScreen(                 int x1, int y1, int x2, int y2, const TCHAR *FileName,                        int SaveType DEFAULTPARAM( = DX_IMAGESAVETYPE_BMP ) , int Jpeg_Quality DEFAULTPARAM( = 80 ) , int Jpeg_Sample2x1 DEFAULTPARAM( = TRUE ) , int Png_CompressionLevel DEFAULTPARAM( = -1 ) ) ;	// ���ݕ`��ΏۂɂȂ��Ă����ʂ�t�@�C���ŕۑ�����
extern	int			SaveDrawScreenWithStrLen(       int x1, int y1, int x2, int y2, const TCHAR *FileName, size_t FileNameLength, int SaveType DEFAULTPARAM( = DX_IMAGESAVETYPE_BMP ) , int Jpeg_Quality DEFAULTPARAM( = 80 ) , int Jpeg_Sample2x1 DEFAULTPARAM( = TRUE ) , int Png_CompressionLevel DEFAULTPARAM( = -1 ) ) ;	// ���ݕ`��ΏۂɂȂ��Ă����ʂ�t�@�C���ŕۑ�����
extern	int			SaveDrawScreenToBMP(            int x1, int y1, int x2, int y2, const TCHAR *FileName                        ) ;																																// ���ݕ`��ΏۂɂȂ��Ă����ʂ�a�l�o�`���ŕۑ�����
extern	int			SaveDrawScreenToBMPWithStrLen(  int x1, int y1, int x2, int y2, const TCHAR *FileName, size_t FileNameLength ) ;																																// ���ݕ`��ΏۂɂȂ��Ă����ʂ�a�l�o�`���ŕۑ�����
extern	int			SaveDrawScreenToDDS(            int x1, int y1, int x2, int y2, const TCHAR *FileName                        ) ;																																// ���ݕ`��ΏۂɂȂ��Ă����ʂ�c�c�r�`���ŕۑ�����
extern	int			SaveDrawScreenToDDSWithStrLen(  int x1, int y1, int x2, int y2, const TCHAR *FileName, size_t FileNameLength ) ;																																// ���ݕ`��ΏۂɂȂ��Ă����ʂ�c�c�r�`���ŕۑ�����
extern	int			SaveDrawScreenToJPEG(           int x1, int y1, int x2, int y2, const TCHAR *FileName,                        int Quality DEFAULTPARAM( = 80 ) , int Sample2x1 DEFAULTPARAM( = TRUE ) ) ;																						// ���ݕ`��ΏۂɂȂ��Ă����ʂ�i�o�d�f�`���ŕۑ����� Quality = �掿�A�l���傫���قǒሳ�k���掿,0�`100 
extern	int			SaveDrawScreenToJPEGWithStrLen( int x1, int y1, int x2, int y2, const TCHAR *FileName, size_t FileNameLength, int Quality DEFAULTPARAM( = 80 ) , int Sample2x1 DEFAULTPARAM( = TRUE ) ) ;																						// ���ݕ`��ΏۂɂȂ��Ă����ʂ�i�o�d�f�`���ŕۑ����� Quality = �掿�A�l���傫���قǒሳ�k���掿,0�`100 
extern	int			SaveDrawScreenToPNG(            int x1, int y1, int x2, int y2, const TCHAR *FileName,                        int CompressionLevel DEFAULTPARAM( = -1 ) ) ;																						// ���ݕ`��ΏۂɂȂ��Ă����ʂ�o�m�f�`���ŕۑ����� CompressionLevel = ���k���A�l���傫���قǍ����k�������ׁA�O�͖����k,0�`9
extern	int			SaveDrawScreenToPNGWithStrLen(  int x1, int y1, int x2, int y2, const TCHAR *FileName, size_t FileNameLength, int CompressionLevel DEFAULTPARAM( = -1 ) ) ;																						// ���ݕ`��ΏۂɂȂ��Ă����ʂ�o�m�f�`���ŕۑ����� CompressionLevel = ���k���A�l���傫���قǍ����k�������ׁA�O�͖����k,0�`9

// �`��Ώۂɂł���O���t�B�b�N�n���h���ۑ��֐�
// Jpeg_Quality         = 0:��掿�`100:���掿
// Png_CompressionLevel = 0:�����k�`  9:�ō����k
extern	int			SaveDrawValidGraph(                 int GrHandle, int x1, int y1, int x2, int y2, const TCHAR *FileName,                        int SaveType DEFAULTPARAM( = DX_IMAGESAVETYPE_BMP ) , int Jpeg_Quality DEFAULTPARAM( = 80 ) , int Jpeg_Sample2x1 DEFAULTPARAM( = TRUE ) , int Png_CompressionLevel DEFAULTPARAM( = -1 ) ) ;		// �`��Ώۂɂł���O���t�B�b�N�n���h����t�@�C���ŕۑ�����
extern	int			SaveDrawValidGraphWithStrLen(       int GrHandle, int x1, int y1, int x2, int y2, const TCHAR *FileName, size_t FileNameLength, int SaveType DEFAULTPARAM( = DX_IMAGESAVETYPE_BMP ) , int Jpeg_Quality DEFAULTPARAM( = 80 ) , int Jpeg_Sample2x1 DEFAULTPARAM( = TRUE ) , int Png_CompressionLevel DEFAULTPARAM( = -1 ) ) ;		// �`��Ώۂɂł���O���t�B�b�N�n���h����t�@�C���ŕۑ�����
extern	int			SaveDrawValidGraphToBMP(            int GrHandle, int x1, int y1, int x2, int y2, const TCHAR *FileName                        ) ;																																// �`��Ώۂɂł���O���t�B�b�N�n���h����a�l�o�`���ŕۑ�����
extern	int			SaveDrawValidGraphToBMPWithStrLen(  int GrHandle, int x1, int y1, int x2, int y2, const TCHAR *FileName, size_t FileNameLength ) ;																																// �`��Ώۂɂł���O���t�B�b�N�n���h����a�l�o�`���ŕۑ�����
extern	int			SaveDrawValidGraphToDDS(            int GrHandle, int x1, int y1, int x2, int y2, const TCHAR *FileName                        ) ;																																// �`��Ώۂɂł���O���t�B�b�N�n���h����c�c�r�`���ŕۑ�����
extern	int			SaveDrawValidGraphToDDSWithStrLen(  int GrHandle, int x1, int y1, int x2, int y2, const TCHAR *FileName, size_t FileNameLength ) ;																																// �`��Ώۂɂł���O���t�B�b�N�n���h����c�c�r�`���ŕۑ�����
extern	int			SaveDrawValidGraphToJPEG(           int GrHandle, int x1, int y1, int x2, int y2, const TCHAR *FileName,                        int Quality DEFAULTPARAM( = 80 ) , int Sample2x1 DEFAULTPARAM( = TRUE ) ) ;																						// �`��Ώۂɂł���O���t�B�b�N�n���h����i�o�d�f�`���ŕۑ����� Quality = �掿�A�l���傫���قǒሳ�k���掿,0�`100 
extern	int			SaveDrawValidGraphToJPEGWithStrLen( int GrHandle, int x1, int y1, int x2, int y2, const TCHAR *FileName, size_t FileNameLength, int Quality DEFAULTPARAM( = 80 ) , int Sample2x1 DEFAULTPARAM( = TRUE ) ) ;																						// �`��Ώۂɂł���O���t�B�b�N�n���h����i�o�d�f�`���ŕۑ����� Quality = �掿�A�l���傫���قǒሳ�k���掿,0�`100 
extern	int			SaveDrawValidGraphToPNG(            int GrHandle, int x1, int y1, int x2, int y2, const TCHAR *FileName,                        int CompressionLevel DEFAULTPARAM( = -1 ) ) ;																					// �`��Ώۂɂł���O���t�B�b�N�n���h����o�m�f�`���ŕۑ����� CompressionLevel = ���k���A�l���傫���قǍ����k�������ׁA�O�͖����k,0�`9
extern	int			SaveDrawValidGraphToPNGWithStrLen(  int GrHandle, int x1, int y1, int x2, int y2, const TCHAR *FileName, size_t FileNameLength, int CompressionLevel DEFAULTPARAM( = -1 ) ) ;																					// �`��Ώۂɂł���O���t�B�b�N�n���h����o�m�f�`���ŕۑ����� CompressionLevel = ���k���A�l���傫���قǍ����k�������ׁA�O�͖����k,0�`9

#endif // DX_NON_SAVEFUNCTION

// ���_�o�b�t�@�֌W�֐�
extern	int			CreateVertexBuffer(		int VertexNum, int VertexType /* DX_VERTEX_TYPE_NORMAL_3D �� */ ) ;						// ���_�o�b�t�@��쐬����( -1:�G���[  0�ȏ�:���_�o�b�t�@�n���h�� )
extern	int			DeleteVertexBuffer(		int VertexBufHandle ) ;																	// ���_�o�b�t�@��폜����
extern	int			InitVertexBuffer(		void ) ;																				// ���ׂĂ̒��_�o�b�t�@��폜����
extern	int			SetVertexBufferData(	int SetIndex, const void *VertexArray, int VertexNum, int VertexBufHandle ) ;			// ���_�o�b�t�@�ɒ��_�f�[�^��]������
extern	void *		GetBufferVertexBuffer(	int VertexBufHandle ) ;																	// ���_�o�b�t�@�n���h���̒��_�o�b�t�@�̃A�h���X��擾����
extern	int			UpdateVertexBuffer(		int VertexBufHandle, int UpdateStartIndex, int UpdateVertexNum ) ;						// ���_�o�b�t�@�n���h���̒��_�o�b�t�@�ւ̕ύX��K�p����( GetBufferVertexBuffer �Ŏ擾�����o�b�t�@�ւ̕ύX�𔽉f���� )
extern	int			CreateIndexBuffer(		int IndexNum, int IndexType /* DX_INDEX_TYPE_16BIT �� */  ) ;							// �C���f�b�N�X�o�b�t�@��쐬����( -1:�G���[�@0�ȏ�F�C���f�b�N�X�o�b�t�@�n���h�� )
extern	int			DeleteIndexBuffer(		int IndexBufHandle ) ;																	// �C���f�b�N�X�o�b�t�@��폜����
extern	int			InitIndexBuffer(		void ) ;																				// ���ׂẴC���f�b�N�X�o�b�t�@��폜����
extern	int			SetIndexBufferData(		int SetIndex, const void *IndexArray, int IndexNum, int IndexBufHandle ) ;				// �C���f�b�N�X�o�b�t�@�ɃC���f�b�N�X�f�[�^��]������
extern	void *		GetBufferIndexBuffer(	int IndexBufHandle ) ;																	// �C���f�b�N�X�o�b�t�@�n���h���̃C���f�b�N�X�o�b�t�@�̃A�h���X��擾����
extern	int			UpdateIndexBuffer(		int IndexBufHandle, int UpdateStartIndex, int UpdateIndexNum ) ;						// �C���f�b�N�X�o�b�t�@�n���h���̃C���f�b�N�X�o�b�t�@�ւ̕ύX��K�p����( GetBufferIndexBuffer �Ŏ擾�����o�b�t�@�ւ̕ύX�𔽉f���� )
extern	int			GetMaxPrimitiveCount(	void ) ;																				// �O���t�B�b�N�X�f�o�C�X���Ή����Ă����x�ɕ`��ł���v���~�e�B�u�̍ő吔��擾����
extern	int			GetMaxVertexIndex(		void ) ;																				// �O���t�B�b�N�X�f�o�C�X���Ή����Ă����x�Ɏg�p���邱�Ƃ̂ł���ő咸�_����擾����

// �V�F�[�_�[�֌W�֐�
extern	int			GetValidShaderVersion(			void ) ;												// �g�p�ł���V�F�[�_�[�̃o�[�W������擾����( 0=�g���Ȃ�  200=�V�F�[�_�[���f���Q�D�O���g�p�\  300=�V�F�[�_�[���f���R�D�O���g�p�\ )

extern	int			LoadVertexShader(				const TCHAR *FileName                        ) ;		// ���_�V�F�[�_�[�o�C�i����t�@�C������ǂݍ��ݒ��_�V�F�[�_�[�n���h����쐬����( �߂�l -1:�G���[  -1�ȊO:�V�F�[�_�[�n���h�� )
extern	int			LoadVertexShaderWithStrLen(		const TCHAR *FileName, size_t FileNameLength ) ;		// ���_�V�F�[�_�[�o�C�i����t�@�C������ǂݍ��ݒ��_�V�F�[�_�[�n���h����쐬����( �߂�l -1:�G���[  -1�ȊO:�V�F�[�_�[�n���h�� )
extern	int			LoadGeometryShader(				const TCHAR *FileName                        ) ;		// �W�I���g���V�F�[�_�[�o�C�i����t�@�C������ǂݍ��݃W�I���g���V�F�[�_�[�n���h����쐬����( �߂�l -1:�G���[  -1�ȊO:�V�F�[�_�[�n���h�� )
extern	int			LoadGeometryShaderWithStrLen(	const TCHAR *FileName, size_t FileNameLength ) ;		// �W�I���g���V�F�[�_�[�o�C�i����t�@�C������ǂݍ��݃W�I���g���V�F�[�_�[�n���h����쐬����( �߂�l -1:�G���[  -1�ȊO:�V�F�[�_�[�n���h�� )
extern	int			LoadPixelShader(				const TCHAR *FileName                        ) ;		// �s�N�Z���V�F�[�_�[�o�C�i����t�@�C������ǂݍ��݃s�N�Z���V�F�[�_�[�n���h����쐬����( �߂�l -1:�G���[  -1�ȊO:�V�F�[�_�[�n���h�� )
extern	int			LoadPixelShaderWithStrLen(		const TCHAR *FileName, size_t FileNameLength ) ;		// �s�N�Z���V�F�[�_�[�o�C�i����t�@�C������ǂݍ��݃s�N�Z���V�F�[�_�[�n���h����쐬����( �߂�l -1:�G���[  -1�ȊO:�V�F�[�_�[�n���h�� )
extern	int			LoadVertexShaderFromMem(		const void *ImageAddress, int ImageSize ) ;				// �������ɓǂݍ��܂ꂽ���_�V�F�[�_�[�o�C�i�����璸�_�V�F�[�_�[�n���h����쐬����( �߂�l -1:�G���[  -1�ȊO:�V�F�[�_�[�n���h�� )
extern	int			LoadGeometryShaderFromMem(		const void *ImageAddress, int ImageSize ) ;				// �������ɓǂݍ��܂ꂽ�W�I���g���V�F�[�_�[�o�C�i������W�I���g���V�F�[�_�[�n���h����쐬����( �߂�l -1:�G���[  -1�ȊO:�V�F�[�_�[�n���h�� )
extern	int			LoadPixelShaderFromMem(			const void *ImageAddress, int ImageSize ) ;				// �������ɓǂݍ��܂ꂽ�s�N�Z���V�F�[�_�[�o�C�i������s�N�Z���V�F�[�_�[�n���h����쐬����( �߂�l -1:�G���[  -1�ȊO:�V�F�[�_�[�n���h�� )
extern	int			DeleteShader(					int ShaderHandle ) ;									// �V�F�[�_�[�n���h���̍폜( ���_�V�F�[�_�[�E�s�N�Z���V�F�[�_�[���� )
extern	int			InitShader(						void ) ;												// �V�F�[�_�[�n���h����S�č폜����( ���_�V�F�[�_�[�n���h���E�s�N�Z���V�F�[�_�[�n���h���ǂ������ׂč폜 )

extern	int			GetConstIndexToShader(                     const TCHAR *ConstantName,                            int ShaderHandle ) ;	// �w��̖��O����萔���g�p����V�F�[�_�[�萔�̔ԍ���擾����
extern	int			GetConstIndexToShaderWithStrLen(           const TCHAR *ConstantName, size_t ConstantNameLength, int ShaderHandle ) ;	// �w��̖��O����萔���g�p����V�F�[�_�[�萔�̔ԍ���擾����
extern	int			GetConstCountToShader(                     const TCHAR *ConstantName,                            int ShaderHandle ) ;	// �w��̖��O����萔���g�p����V�F�[�_�[�萔�̐���擾����
extern	int			GetConstCountToShaderWithStrLen(           const TCHAR *ConstantName, size_t ConstantNameLength, int ShaderHandle ) ;	// �w��̖��O����萔���g�p����V�F�[�_�[�萔�̐���擾����
extern	const FLOAT4 *GetConstDefaultParamFToShader(           const TCHAR *ConstantName,                            int ShaderHandle ) ;	// �w��̖��O������������_���萔�̃f�t�H���g�p�����[�^���i�[����Ă��郁�����A�h���X��擾����
extern	const FLOAT4 *GetConstDefaultParamFToShaderWithStrLen( const TCHAR *ConstantName, size_t ConstantNameLength, int ShaderHandle ) ;	// �w��̖��O������������_���萔�̃f�t�H���g�p�����[�^���i�[����Ă��郁�����A�h���X��擾����
extern	int			SetVSConstSF(         int ConstantIndex,       float  Param ) ;						// ���_�V�F�[�_�[�� float �^�萔��ݒ肷��
extern	int			SetVSConstF(          int ConstantIndex,       FLOAT4 Param ) ;						// ���_�V�F�[�_�[�� float �^�萔��ݒ肷��
extern	int			SetVSConstFMtx(       int ConstantIndex,       MATRIX Param ) ;						// ���_�V�F�[�_�[�� float �^�萔�ɍs���ݒ肷��
extern	int			SetVSConstFMtxT(      int ConstantIndex,       MATRIX Param ) ;						// ���_�V�F�[�_�[�� float �^�萔�ɓ]�u�����s���ݒ肷��
extern	int			SetVSConstSI(         int ConstantIndex,       int    Param ) ;						// ���_�V�F�[�_�[�� int   �^�萔��ݒ肷��
extern	int			SetVSConstI(          int ConstantIndex,       INT4   Param ) ;						// ���_�V�F�[�_�[�� int   �^�萔��ݒ肷��
extern	int			SetVSConstB(          int ConstantIndex,       BOOL   Param ) ;						// ���_�V�F�[�_�[�� BOOL  �^�萔��ݒ肷��
extern	int			SetVSConstSFArray(    int ConstantIndex, const float  *ParamArray, int ParamNum ) ;	// ���_�V�F�[�_�[�� float �^�萔��ݒ肷��( �z���g���ĘA�ԃC���f�b�N�X�Ɉ�x�ɐݒ� )
extern	int			SetVSConstFArray(     int ConstantIndex, const FLOAT4 *ParamArray, int ParamNum ) ;	// ���_�V�F�[�_�[�� float �^�萔��ݒ肷��( �z���g���ĘA�ԃC���f�b�N�X�Ɉ�x�ɐݒ� )
extern	int			SetVSConstFMtxArray(  int ConstantIndex, const MATRIX *ParamArray, int ParamNum ) ;	// ���_�V�F�[�_�[�� float �^�萔�ɍs���ݒ肷��( �z���g���ĘA�ԃC���f�b�N�X�Ɉ�x�ɐݒ� )
extern	int			SetVSConstFMtxTArray( int ConstantIndex, const MATRIX *ParamArray, int ParamNum ) ;	// ���_�V�F�[�_�[�� float �^�萔�ɓ]�u�����s���ݒ肷��( �z���g���ĘA�ԃC���f�b�N�X�Ɉ�x�ɐݒ� )
extern	int			SetVSConstSIArray(    int ConstantIndex, const int    *ParamArray, int ParamNum ) ;	// ���_�V�F�[�_�[�� int   �^�萔��ݒ肷��( �z���g���ĘA�ԃC���f�b�N�X�Ɉ�x�ɐݒ� )
extern	int			SetVSConstIArray(     int ConstantIndex, const INT4   *ParamArray, int ParamNum ) ;	// ���_�V�F�[�_�[�� int   �^�萔��ݒ肷��( �z���g���ĘA�ԃC���f�b�N�X�Ɉ�x�ɐݒ� )
extern	int			SetVSConstBArray(     int ConstantIndex, const BOOL   *ParamArray, int ParamNum ) ;	// ���_�V�F�[�_�[�� BOOL  �^�萔��ݒ肷��( �z���g���ĘA�ԃC���f�b�N�X�Ɉ�x�ɐݒ� )
extern	int			ResetVSConstF(        int ConstantIndex, int ParamNum ) ;							// ���_�V�F�[�_�[�� float �^�萔�̐ݒ����Z�b�g����
extern	int			ResetVSConstI(        int ConstantIndex, int ParamNum ) ;							// ���_�V�F�[�_�[�� int   �^�萔�̐ݒ����Z�b�g����
extern	int			ResetVSConstB(        int ConstantIndex, int ParamNum ) ;							// ���_�V�F�[�_�[�� BOOL  �^�萔�̐ݒ����Z�b�g����

extern	int			SetPSConstSF(         int ConstantIndex,       float  Param ) ;						// �s�N�Z���V�F�[�_�[�� float �^�萔��ݒ肷��
extern	int			SetPSConstF(          int ConstantIndex,       FLOAT4 Param ) ;						// �s�N�Z���V�F�[�_�[�� float �^�萔��ݒ肷��
extern	int			SetPSConstFMtx(       int ConstantIndex,       MATRIX Param ) ;						// �s�N�Z���V�F�[�_�[�� float �^�萔�ɍs���ݒ肷��
extern	int			SetPSConstFMtxT(      int ConstantIndex,       MATRIX Param ) ;						// �s�N�Z���V�F�[�_�[�� float �^�萔�ɓ]�u�����s���ݒ肷��
extern	int			SetPSConstSI(         int ConstantIndex,       int    Param ) ;						// �s�N�Z���V�F�[�_�[�� int   �^�萔��ݒ肷��
extern	int			SetPSConstI(          int ConstantIndex,       INT4   Param ) ;						// �s�N�Z���V�F�[�_�[�� int   �^�萔��ݒ肷��
extern	int			SetPSConstB(          int ConstantIndex,       BOOL   Param ) ;						// �s�N�Z���V�F�[�_�[�� BOOL  �^�萔��ݒ肷��
extern	int			SetPSConstSFArray(    int ConstantIndex, const float  *ParamArray, int ParamNum ) ;	// �s�N�Z���V�F�[�_�[�� float �^�萔��ݒ肷��( �z���g���ĘA�ԃC���f�b�N�X�Ɉ�x�ɐݒ� )
extern	int			SetPSConstFArray(     int ConstantIndex, const FLOAT4 *ParamArray, int ParamNum ) ;	// �s�N�Z���V�F�[�_�[�� float �^�萔��ݒ肷��( �z���g���ĘA�ԃC���f�b�N�X�Ɉ�x�ɐݒ� )
extern	int			SetPSConstFMtxArray(  int ConstantIndex, const MATRIX *ParamArray, int ParamNum ) ;	// �s�N�Z���V�F�[�_�[�� float �^�萔�ɍs���ݒ肷��( �z���g���ĘA�ԃC���f�b�N�X�Ɉ�x�ɐݒ� )
extern	int			SetPSConstFMtxTArray( int ConstantIndex, const MATRIX *ParamArray, int ParamNum ) ;	// �s�N�Z���V�F�[�_�[�� float �^�萔�ɓ]�u�����s���ݒ肷��( �z���g���ĘA�ԃC���f�b�N�X�Ɉ�x�ɐݒ� )
extern	int			SetPSConstSIArray(    int ConstantIndex, const int    *ParamArray, int ParamNum ) ;	// �s�N�Z���V�F�[�_�[�� int   �^�萔��ݒ肷��( �z���g���ĘA�ԃC���f�b�N�X�Ɉ�x�ɐݒ� )
extern	int			SetPSConstIArray(     int ConstantIndex, const INT4   *ParamArray, int ParamNum ) ;	// �s�N�Z���V�F�[�_�[�� int   �^�萔��ݒ肷��( �z���g���ĘA�ԃC���f�b�N�X�Ɉ�x�ɐݒ� )
extern	int			SetPSConstBArray(     int ConstantIndex, const BOOL   *ParamArray, int ParamNum ) ;	// �s�N�Z���V�F�[�_�[�� BOOL  �^�萔��ݒ肷��( �z���g���ĘA�ԃC���f�b�N�X�Ɉ�x�ɐݒ� )
extern	int			ResetPSConstF(        int ConstantIndex, int ParamNum ) ;							// �s�N�Z���V�F�[�_�[�� float �^�萔�̐ݒ����Z�b�g����
extern	int			ResetPSConstI(        int ConstantIndex, int ParamNum ) ;							// �s�N�Z���V�F�[�_�[�� int   �^�萔�̐ݒ����Z�b�g����
extern	int			ResetPSConstB(        int ConstantIndex, int ParamNum ) ;							// �s�N�Z���V�F�[�_�[�� BOOL  �^�萔�̐ݒ����Z�b�g����

extern	int			SetRenderTargetToShader( int TargetIndex, int DrawScreen, int SurfaceIndex DEFAULTPARAM( = 0 ) , int MipLevel DEFAULTPARAM( = 0 ) ) ;	// �V�F�[�_�[��g�p�����`��ł̕`����ݒ肷��( DrawScreen �� -1 ��n���Ɩ����� )
extern	int			SetUseTextureToShader(   int StageIndex, int GraphHandle ) ;						// �V�F�[�_�[��g�p�����`��Ŏg�p����O���t�B�b�N�n���h����ݒ肷��
extern	int			SetUseVertexShader(      int ShaderHandle ) ;										// �V�F�[�_�[��g�p�����`��Ɏg�p���钸�_�V�F�[�_�[��ݒ肷��( -1��n���Ɖ�� )
extern	int			SetUseGeometryShader(    int ShaderHandle ) ;										// �V�F�[�_�[��g�p�����`��Ɏg�p����W�I���g���V�F�[�_�[��ݒ肷��( -1��n���Ɖ�� )
extern	int			SetUsePixelShader(       int ShaderHandle ) ;										// �V�F�[�_�[��g�p�����`��Ɏg�p����s�N�Z���V�F�[�_�[��ݒ肷��( -1��n���Ɖ�� )

extern	int			CalcPolygonBinormalAndTangentsToShader(             VERTEX3DSHADER *VertexArray, int PolygonNum ) ;														// �|���S���̒��_�̐ڐ��Ə]�@����t�u���W����v�Z���ăZ�b�g����
extern	int			CalcPolygonIndexedBinormalAndTangentsToShader(      VERTEX3DSHADER *VertexArray, int VertexNum, const unsigned short *IndexArray, int PolygonNum ) ;	// �|���S���̒��_�̐ڐ��Ə]�@����t�u���W����v�Z���ăZ�b�g����( ���_�C���f�b�N�X��g�p���� )
extern	int			CalcPolygon32bitIndexedBinormalAndTangentsToShader( VERTEX3DSHADER *VertexArray, int VertexNum, const unsigned int   *IndexArray, int PolygonNum ) ;	// �|���S���̒��_�̐ڐ��Ə]�@����t�u���W����v�Z���ăZ�b�g����( ���_�C���f�b�N�X��g�p���� )

extern	int			DrawBillboard3DToShader( VECTOR Pos, float cx, float cy, float Size, float Angle, int GrHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;							// �V�F�[�_�[��g���ăr���{�[�h��`�悷��
extern	int			DrawPolygon2DToShader(               const VERTEX2DSHADER *VertexArray, int PolygonNum ) ;																											// �V�F�[�_�[��g���ĂQ�c�|���S����`�悷��
extern	int			DrawPolygon3DToShader(               const VERTEX3DSHADER *VertexArray, int PolygonNum ) ;																											// �V�F�[�_�[��g���ĂR�c�|���S����`�悷��
extern	int			DrawPolygonIndexed2DToShader(        const VERTEX2DSHADER *VertexArray, int VertexNum, const unsigned short *IndexArray, int PolygonNum ) ;															// �V�F�[�_�[��g���ĂQ�c�|���S����`�悷��( ���_�C���f�b�N�X��g�p���� )
extern	int			DrawPolygon32bitIndexed2DToShader(   const VERTEX2DSHADER *VertexArray, int VertexNum, const unsigned int   *IndexArray, int PolygonNum ) ;															// �V�F�[�_�[��g���ĂQ�c�|���S����`�悷��( ���_�C���f�b�N�X��g�p���� )
extern	int			DrawPolygonIndexed3DToShader(        const VERTEX3DSHADER *VertexArray, int VertexNum, const unsigned short *IndexArray, int PolygonNum ) ;															// �V�F�[�_�[��g���ĂR�c�|���S����`�悷��( ���_�C���f�b�N�X��g�p���� )
extern	int			DrawPolygon32bitIndexed3DToShader(   const VERTEX3DSHADER *VertexArray, int VertexNum, const unsigned int   *IndexArray, int PolygonNum ) ;															// �V�F�[�_�[��g���ĂR�c�|���S����`�悷��( ���_�C���f�b�N�X��g�p���� )
extern	int			DrawPrimitive2DToShader(             const VERTEX2DSHADER *VertexArray, int VertexNum,                                                 int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST �� */ ) ;		// �V�F�[�_�[��g���ĂQ�c�v���~�e�B�u��`�悷��
extern	int			DrawPrimitive3DToShader(             const VERTEX3DSHADER *VertexArray, int VertexNum,                                                 int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST �� */ ) ;		// �V�F�[�_�[��g���ĂR�c�v���~�e�B�u��`�悷��
extern	int			DrawPrimitiveIndexed2DToShader(      const VERTEX2DSHADER *VertexArray, int VertexNum, const unsigned short *IndexArray, int IndexNum, int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST �� */ ) ;		// �V�F�[�_�[��g���ĂQ�c�v���~�e�B�u��`�悷��( ���_�C���f�b�N�X��g�p���� )
extern	int			DrawPrimitive32bitIndexed2DToShader( const VERTEX2DSHADER *VertexArray, int VertexNum, const unsigned int   *IndexArray, int IndexNum, int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST �� */ ) ;		// �V�F�[�_�[��g���ĂQ�c�v���~�e�B�u��`�悷��( ���_�C���f�b�N�X��g�p���� )
extern	int			DrawPrimitiveIndexed3DToShader(      const VERTEX3DSHADER *VertexArray, int VertexNum, const unsigned short *IndexArray, int IndexNum, int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST �� */ ) ;		// �V�F�[�_�[��g���ĂR�c�v���~�e�B�u��`�悷��( ���_�C���f�b�N�X��g�p���� )
extern	int			DrawPrimitive32bitIndexed3DToShader( const VERTEX3DSHADER *VertexArray, int VertexNum, const unsigned int   *IndexArray, int IndexNum, int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST �� */ ) ;		// �V�F�[�_�[��g���ĂR�c�v���~�e�B�u��`�悷��( ���_�C���f�b�N�X��g�p���� )
extern	int			DrawPolygon3DToShader_UseVertexBuffer(           int VertexBufHandle ) ;																															// �V�F�[�_�[��g���ĂR�c�|���S����`�悷��( ���_�o�b�t�@�g�p�� )
extern	int			DrawPolygonIndexed3DToShader_UseVertexBuffer(    int VertexBufHandle, int IndexBufHandle ) ;																										// �V�F�[�_�[��g���ĂR�c�|���S����`�悷��( ���_�o�b�t�@�ƃC���f�b�N�X�o�b�t�@�g�p�� )
extern	int			DrawPrimitive3DToShader_UseVertexBuffer(         int VertexBufHandle,                     int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST �� */ ) ;													// �V�F�[�_�[��g���ĂR�c�v���~�e�B�u��`�悷��( ���_�o�b�t�@�g�p�� )
extern	int			DrawPrimitive3DToShader_UseVertexBuffer2(        int VertexBufHandle,                     int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST �� */, int StartVertex, int UseVertexNum ) ;				// �V�F�[�_�[��g���ĂR�c�v���~�e�B�u��`�悷��( ���_�o�b�t�@�g�p�� )
extern	int			DrawPrimitiveIndexed3DToShader_UseVertexBuffer(  int VertexBufHandle, int IndexBufHandle, int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST �� */ ) ;													// �V�F�[�_�[��g���ĂR�c�v���~�e�B�u��`�悷��( ���_�o�b�t�@�ƃC���f�b�N�X�o�b�t�@�g�p�� )
extern	int			DrawPrimitiveIndexed3DToShader_UseVertexBuffer2( int VertexBufHandle, int IndexBufHandle, int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST �� */, int BaseVertex, int StartVertex, int UseVertexNum, int StartIndex, int UseIndexNum ) ;		// �V�F�[�_�[��g���ĂR�c�v���~�e�B�u��`�悷��( ���_�o�b�t�@�ƃC���f�b�N�X�o�b�t�@�g�p�� )

// �V�F�[�_�[�p�萔�o�b�t�@�֌W�֐�
extern	int			InitShaderConstantBuffer(		void ) ;																					// �S�ẴV�F�[�_�[�p�萔�o�b�t�@�n���h����폜����
extern	int			CreateShaderConstantBuffer(		int BufferSize ) ;																			// �V�F�[�_�[�p�萔�o�b�t�@�n���h�������������
extern	int			DeleteShaderConstantBuffer(		int SConstBufHandle ) ;																		// �V�F�[�_�[�p�萔�o�b�t�@�n���h����폜����
extern	void *		GetBufferShaderConstantBuffer(	int SConstBufHandle ) ;																		// �V�F�[�_�[�p�萔�o�b�t�@�n���h���̒萔�o�b�t�@�̃A�h���X��擾����
extern	int			UpdateShaderConstantBuffer(		int SConstBufHandle ) ;																		// �V�F�[�_�[�p�萔�o�b�t�@�n���h���̒萔�o�b�t�@�ւ̕ύX��K�p����
extern	int			SetShaderConstantBuffer(		int SConstBufHandle, int TargetShader /* DX_SHADERTYPE_VERTEX �Ȃ� */ , int Slot ) ;		// �V�F�[�_�[�p�萔�o�b�t�@�n���h���̒萔�o�b�t�@��w��̃V�F�[�_�[�̎w��̃X���b�g�ɃZ�b�g����

// �t�B���^�[�֌W�֐�
#ifndef DX_NON_FILTER
extern	int			SetGraphFilterBltBlendMode( int BlendMode /* DX_BLENDMODE_ALPHA �Ȃ� */ ) ;												// GraphFilterBlt �� GraphBlendBlt �̌��ʂ�]����ɓ]������ۂ̃u�����h���[�h��ݒ肷��( ����őΉ����Ă���̂� DX_BLENDMODE_NOBLEND �� DX_BLENDMODE_ALPHA �̂� )
extern	int			SetGraphBlendScalingFilterMode( int IsBilinearFilter ) ;																// GraphBlend �� GrHandle �� BlendGrHandle �̃T�C�Y���قȂ�ꍇ�ɓK�p�����g��t�B���^�[���[�h��ݒ肷��( IsBilinearFilter  TRUE:�o�C���j�A�t�B���^�[(�f�t�H���g)  FALSE:�j�A���X�g�t�B���^�[ )

extern	int			GraphFilter(         int    GrHandle,                                                                                                               int FilterType /* DX_GRAPH_FILTER_GAUSS �� */ , ... ) ;		// �摜�Ƀt�B���^�[������s��
extern	int			GraphFilterBlt(      int SrcGrHandle, int DestGrHandle,                                                                                             int FilterType /* DX_GRAPH_FILTER_GAUSS �� */ , ... ) ;		// �摜�̃t�B���^�[�t���]����s��
extern	int			GraphFilterRectBlt(  int SrcGrHandle, int DestGrHandle, int SrcX1, int SrcY1, int SrcX2, int SrcY2, int DestX,  int DestY,                          int FilterType /* DX_GRAPH_FILTER_GAUSS �� */ , ... ) ;		// �摜�̃t�B���^�[�t���]����s��( ��`�w�� )
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_MONO, int Cb = �F��( -255 �` 255 ), int Cr = �ԐF��( -255 �` 255 ) ) ;
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_GAUSS, int PixelWidth = �g�p�s�N�Z����( 8 , 16 , 32 �̉��ꂩ ), int Param = �ڂ����p�����[�^( 100 �Ŗ�1�s�N�Z�����̕� ) ) ;
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_DOWN_SCALE, int DivNum = ���̃T�C�Y�̉����̂P���A�Ƃ����l( 1 , 2 , 4 , 8 �̉��ꂩ ) ) ;
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_BRIGHT_CLIP, int CmpType = �N���b�v�^�C�v( DX_CMP_LESS:CmpParam�ȉ���N���b�v  ����  DX_CMP_GREATER:CmpParam�ȏ��N���b�v ), int CmpParam = �N���b�v�p�����[�^( 0 �` 255 ), int ClipFillFlag = �N���b�v�����s�N�Z����h��Ԃ����ǂ���( TRUE:�h��Ԃ�  FALSE:�h��Ԃ��Ȃ� ), unsigned int ClipFillColor = �N���b�v�����s�N�Z���ɓh��F�l( GetColor �Ŏ擾���� )( ClipFillFlag �� FALSE �̏ꍇ�͎g�p���Ȃ� ), int ClipFillAlpha = �N���b�v�����s�N�Z���ɓh�郿�l( 0 �` 255 )( ClipFillFlag �� FALSE �̏ꍇ�͎g�p���Ȃ� ) ) ;
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_BRIGHT_SCALE, int MinBright = �ϊ���ɐ^���ÂɂȂ閾�邳( 0 �` 255 ), int MaxBright = �ϊ���ɐ^�����ɂȂ閾�邳( 0 �` 255 ) ) ;
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_HSB, int HueType = Hue �̈Ӗ�( 0:���Βl  1:��Βl ), int Hue = �F���p�����[�^( HueType �� 0 �̏ꍇ = �s�N�Z���̐F���ɑ΂��鑊�Βl( -180 �` 180 )   HueType �� 1 �̏ꍇ = �F���̐�Βl( 0 �` 360 ) ), int Saturation = �ʓx( -255 �` ), int Bright = �P�x( -255 �` 255 ) ) ;
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_INVERT ) ;
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_LEVEL, int Min = �ϊ����̉����l( 0 �` 255 ), int Max = �ϊ����̏���l( 0 �` 255 ), int Gamma = �K���}�l( 100 �ŃK���}�␳�����A0 �Ƃ���ȉ��̒l�͕s�� ), int AfterMin = �ϊ���̍Œ�l( 0 �` 255 ), int AfterMax = �ϊ���̍ő�l( 0 �` 255 ) ) ;
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_TWO_COLOR, int Threshold = 臒l( 0 �` 255 ), unsigned int LowColor = 臒l���l���Ⴉ�����s�N�Z���̕ϊ���̐F�l( GetColor �Ŏ擾���� ), int LowAlpha = 臒l���l���Ⴉ�����s�N�Z���̕ϊ���̃��l( 0 �` 255 ), unsigned int HighColor = 臒l���l�����������s�N�Z���̕ϊ���̐F�l( GetColor �Ŏ擾���� ), int HighAlpha = 臒l���l�����������s�N�Z���̕ϊ���̃��l( 0 �` 255 ) ) ;
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_GRADIENT_MAP, int MapGrHandle = �O���f�[�V�����}�b�v�̃O���t�B�b�N�n���h��( ���摜�̋P�x����O���f�[�V�����}�b�v�摜�� x ���W��Z�o���܂��̂ŏc����1dot�ł�n�j ), int Reverse = �O���f�[�V�����}�b�v���E���]�t���O( TRUE : �O���f�[�V�����}�b�v����E���]���Ďg��  FALSE : ���E���]���Ȃ� ) ) ;
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_REPLACEMENT, int TargetR, int TargetG, int TargetB, int TargetA = �u���Ώۂ̐F( 0�`255 ), int R, int G, int B, int A = �u����̐F( 0�`255 ) ) ;
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_PREMUL_ALPHA ) ;			// �ʏ�̃A���t�@�`�����l���t���摜���Z�ς݃A���t�@�摜�ɕϊ�����t�B���^
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_INTERP_ALPHA ) ;			// ��Z�ς݃��摜��ʏ�̃A���t�@�`�����l���t���摜�ɕϊ�����t�B���^
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_YUV_TO_RGB ) ;				// YUV�J���[��RGB�J���[�ɕϊ�����t�B���^
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_Y2UV1_TO_RGB, int UVGrHandle = YUV�J���[��UV�����݂̂ŁA����Y�ɑ΂��ĉ𑜓x������( �Ⴕ���� 4 ���� 1 )�̃O���t�B�b�N�n���h��( U=R, V=G ) ) ;		// YUV�J���[��RGB�J���[�ɕϊ�����t�B���^( UV������ Y�����̔����E���͂S���̂P( ���E�c�Е��Ⴕ���͗��� )�̉𑜓x�����Ȃ��ꍇ�p )
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_YUV_TO_RGB_RRA ) ;				// YUV�J���[��RGB�J���[�ɕϊ�����t�B���^( ���E��������R�̒l��A���t�@�l�Ƃ��Ĉ��� )
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_Y2UV1_TO_RGB_RRA, int UVGrHandle = YUV�J���[��UV�����݂̂ŁA����Y�ɑ΂��ĉ𑜓x������( �Ⴕ���� 4 ���� 1 )�̃O���t�B�b�N�n���h��( U=R, V=G ) ) ;		// YUV�J���[��RGB�J���[�ɕϊ�����t�B���^( UV������ Y�����̔����E���͂S���̂P( ���E�c�Е��Ⴕ���͗��� )�̉𑜓x�����Ȃ��ꍇ�p )( ���E��������R�̒l��A���t�@�l�Ƃ��Ĉ��� )
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_BICUBIC_SCALE, int DestSizeX = �X�P�[�����O��̉��s�N�Z����, int DestSizeY = �X�P�[�����O��̏c�s�N�Z���� ) ;
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_LANCZOS3_SCALE, int DestSizeX = �X�P�[�����O��̉��s�N�Z����, int DestSizeY = �X�P�[�����O��̏c�s�N�Z���� ) ;
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_SSAO, int ColorWithDepthGrHandle = Z�o�b�t�@���܂܂��J���[�o�b�t�@, float KernelRadius = �Օ����𒲂ׂ�͈�, float MinDistance = �Օ������肷��ŏ��[�x�l, float MaxDistance = �Օ������肷��ő�[�x�l, float Strength = �Օ����̉e���̋���, int OcclusionColor = �I�N�����[�W�����J���[, float OcclusionPower = �I�N�����[�W�����J���[�̋��� ) ;
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_FLOAT_COLOR_SCALE, float ColorScaleR = �Ԑ����ւ̃X�P�[�����O�l, float ColorScaleG = �ΐ����ւ̃X�P�[�����O�l, float ColorScaleB = �����ւ̃X�P�[�����O�l, float ColorScaleA = �������ւ̃X�P�[�����O�l, float ColorPreSubR = �Ԑ����ɃX�P�[�����O��|����O�Ɍ��Z����l, float ColorPreSubG = �ΐ����ɃX�P�[�����O��|����O�Ɍ��Z����l, float ColorPreSubB = �����ɃX�P�[�����O��|����O�Ɍ��Z����l, float ColorPreSubA = �������ɃX�P�[�����O��|����O�Ɍ��Z����l ) ;

extern	int			GraphBlend(         int    GrHandle, int BlendGrHandle,                                                                                                                                         int BlendRatio /* �u�����h���ʂ̉e���x( 0:�O��  255:�P�O�O�� ) */ , int BlendType /* DX_GRAPH_BLEND_ADD �� */ , ... ) ;	// ��̉摜��u�����h����
extern	int			GraphBlendBlt(      int SrcGrHandle, int BlendGrHandle, int DestGrHandle,                                                                                                                       int BlendRatio /* �u�����h���ʂ̉e���x( 0:�O��  255:�P�O�O�� ) */ , int BlendType /* DX_GRAPH_BLEND_ADD �� */ , ... ) ;	// ��̉摜��u�����h���Č��ʂ�w��̉摜�ɏo�͂���
extern	int			GraphBlendRectBlt(  int SrcGrHandle, int BlendGrHandle, int DestGrHandle, int SrcX1, int SrcY1, int SrcX2, int SrcY2, int BlendX,  int BlendY,                            int DestX, int DestY, int BlendRatio /* �u�����h���ʂ̉e���x( 0:�O��  255:�P�O�O�� ) */ , int BlendType /* DX_GRAPH_BLEND_ADD �� */ , ... ) ;	// ��̉摜��u�����h���Č��ʂ�w��̉摜�ɏo�͂���( ��`�w�� )
extern	int			GraphBlendRectBlt2( int SrcGrHandle, int BlendGrHandle, int DestGrHandle, int SrcX1, int SrcY1, int SrcX2, int SrcY2, int BlendX1, int BlendY1, int BlendX2, int BlendY2, int DestX, int DestY, int BlendRatio /* �u�����h���ʂ̉e���x( 0:�O��  255:�P�O�O�� ) */ , int BlendType /* DX_GRAPH_BLEND_ADD �� */ , ... ) ;	// ��̉摜��u�����h���Č��ʂ�w��̉摜�ɏo�͂���( ��`�w��A�u�����h�摜���`�w�� )
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_NORMAL ) ; // �ʏ�
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_RGBA_SELECT_MIX, int SelectR = ( �o�͂̐ԕ��ƂȂ鐬�� DX_RGBA_SELECT_SRC_R �� ), int SelectG = ( �o�̗͂ΐ����ƂȂ鐬�� DX_RGBA_SELECT_SRC_R �� ), int SelectB = ( �o�͂̐����ƂȂ鐬�� DX_RGBA_SELECT_SRC_R �� ), int SelectA = ( �o�͂̃������ƂȂ鐬�� DX_RGBA_SELECT_SRC_R �� ) ) ;	// RGBA�̗v�f��I����č���
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_MULTIPLE ) ;	// ��Z
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_DIFFERENCE ) ;	// ���Z
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_ADD ) ;		  	// ���Z
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_SCREEN ) ;	// �X�N���[��
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_OVERLAY ) ;	// �I�[�o�[���C
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_DODGE ) ;	// �����Ă�
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_BURN ) ;	// �Ă�����
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_DARKEN ) ;	// ��r(��)
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_LIGHTEN ) ;	// ��r(��)
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_SOFTLIGHT ) ;	// �\�t�g���C�g
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_HARDLIGHT ) ;	// �n�[�h���C�g
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_EXCLUSION ) ;	// ���O
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_NORMAL_ALPHACH ) ;	// ���`�����l���t���摜�̒ʏ퍇��
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_ADD_ALPHACH ) ;	// ���`�����l���t���摜�̉��Z����
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_MULTIPLE_A_ONLY ) ;	// �A���t�@�`�����l���݂̂̏�Z
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_MASK ) ;	// �}�X�N( SrcGrHandle �� BlendGrHandle ��ʏ�`�悵����ŁASrcGrHandle �� A ��D�� )
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_PMA_NORMAL ) ; // �ʏ�( ��Z�ς݃��摜�p )
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_PMA_RGBA_SELECT_MIX ) ; // RGBA�̗v�f��I����č���( ��Z�ς݃��摜�p )
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_PMA_MULTIPLE ) ; // ��Z( ��Z�ς݃��摜�p )
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_PMA_DIFFERENCE ) ; // ���Z( ��Z�ς݃��摜�p )
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_PMA_ADD ) ; // ���Z( ��Z�ς݃��摜�p )
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_PMA_SCREEN ) ; // �X�N���[��( ��Z�ς݃��摜�p )
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_PMA_OVERLAY ) ; // �I�[�o�[���C( ��Z�ς݃��摜�p )
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_PMA_DODGE ) ; // �����Ă�( ��Z�ς݃��摜�p )
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_PMA_BURN ) ; // �Ă�����( ��Z�ς݃��摜�p )
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_PMA_DARKEN ) ; // ��r(��)( ��Z�ς݃��摜�p )
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_PMA_LIGHTEN ) ; // ��r(��)( ��Z�ς݃��摜�p )
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_PMA_SOFTLIGHT ) ; // �\�t�g���C�g( ��Z�ς݃��摜�p )
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_PMA_HARDLIGHT ) ; // �n�[�h���C�g( ��Z�ς݃��摜�p )
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_PMA_EXCLUSION ) ; // ���O( ��Z�ς݃��摜�p )
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_PMA_NORMAL_ALPHACH ) ; // ���`�����l���t���摜�̒ʏ퍇��( ��Z�ς݃��摜�p )
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_PMA_ADD_ALPHACH ) ; // ���`�����l���t���摜�̉��Z����( ��Z�ς݃��摜�p )
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_PMA_MULTIPLE_A_ONLY ) ;	// �A���t�@�`�����l���݂̂̏�Z( ��Z�ς݃��摜�p )
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_PMA_MASK ) ;	// �}�X�N( DX_GRAPH_BLEND_MASK �� ��Z�ς݃��摜�p )
#endif // DX_NON_FILTER

#ifndef DX_NON_MOVIE
// ���[�r�[�O���t�B�b�N�֌W�֐�
extern	int			PlayMovie(							const TCHAR *FileName,                        int ExRate, int PlayType ) ;	// ����t�@�C���̍Đ�
extern	int			PlayMovieWithStrLen(				const TCHAR *FileName, size_t FileNameLength, int ExRate, int PlayType ) ;	// ����t�@�C���̍Đ�
extern	int			GetMovieImageSize_File(             const TCHAR *FileName,                        int *SizeX, int *SizeY ) ;	// ����t�@�C���̉��s�N�Z�����Əc�s�N�Z������擾����
extern	int			GetMovieImageSize_File_WithStrLen(  const TCHAR *FileName, size_t FileNameLength, int *SizeX, int *SizeY ) ;	// ����t�@�C���̉��s�N�Z�����Əc�s�N�Z������擾����
extern	int			GetMovieImageSize_Mem(              const void *FileImage, int FileImageSize, int *SizeX, int *SizeY ) ;		// ��������ɓW�J���ꂽ����t�@�C���̉��s�N�Z�����Əc�s�N�Z������擾����
extern	int			OpenMovieToGraph(					const TCHAR *FileName,                        int FullColor DEFAULTPARAM( = TRUE ) ) ;		// ����t�@�C����J��
extern	int			OpenMovieToGraphWithStrLen(			const TCHAR *FileName, size_t FileNameLength, int FullColor DEFAULTPARAM( = TRUE ) ) ;		// ����t�@�C����J��
extern 	int			PlayMovieToGraph(					int GraphHandle, int PlayType DEFAULTPARAM( = DX_PLAYTYPE_BACK ) , int SysPlay DEFAULTPARAM( = 0 ) ) ;		// ����t�@�C����g�p����O���t�B�b�N�n���h���̓���t�@�C���̍Đ���J�n����
extern 	int			PauseMovieToGraph(					int GraphHandle, int SysPause DEFAULTPARAM( = 0 ) ) ;										// ����t�@�C����g�p����O���t�B�b�N�n���h���̓���t�@�C���̍Đ����~����
extern	int			AddMovieFrameToGraph(				int GraphHandle, unsigned int FrameNum ) ;									// ����t�@�C���̍Đ��t���[����i�߂�A�߂����Ƃ͏o���Ȃ�( ����t�@�C������~��ԂŁA���� Ogg Theora �̂ݗL�� )
extern	int			SeekMovieToGraph(					int GraphHandle, int Time ) ;												// ����t�@�C���̍Đ��ʒu��ݒ肷��(�~���b�P��)
extern	int			SetPlaySpeedRateMovieToGraph(		int GraphHandle, double SpeedRate ) ;										// ����t�@�C���̍Đ����x��ݒ肷��( 1.0 = ���{��  2.0 = �Q�{�� )�A�ꕔ�̃t�@�C���t�H�[�}�b�g�݂̂ŗL���ȋ@�\�ł�
extern 	int			GetMovieStateToGraph(				int GraphHandle ) ;															// ����t�@�C���̍Đ���Ԃ𓾂�
extern	int			SetMovieVolumeToGraph(				int Volume, int GraphHandle ) ;												// ����t�@�C���̉��ʂ�ݒ肷��(0�`10000)
extern	int			GetMovieVolumeToGraph(				            int GraphHandle ) ;												// ����t�@�C���̉��ʂ�擾����(0�`10000)
extern	int			ChangeMovieVolumeToGraph(			int Volume, int GraphHandle ) ;												// ����t�@�C���̉��ʂ�ݒ肷��(0�`255)
extern	int			GetMovieVolumeToGraph2(				            int GraphHandle ) ;												// ����t�@�C���̉��ʂ�擾����(0�`255)
extern	const BASEIMAGE* GetMovieBaseImageToGraph(		int GraphHandle, int *ImageUpdateFlag DEFAULTPARAM( = NULL ) , int ImageUpdateFlagSetOnly DEFAULTPARAM( = FALSE ) ) ;	// ����t�@�C���̊�{�C���[�W�f�[�^��擾����( ImageUpdateFlag �� int �^�ϐ��̃A�h���X��n���ƁA�C���[�W���X�V���ꂽ�ꍇ�� 1 ���A�X�V����Ă��Ȃ��ꍇ�� 0 ���i�[����܂��A ImageUpdateFlagSetOnly �� TRUE �ɂ���Ɩ߂�l�� BASEIMAGE �͗L���ȉ摜�f�[�^�ł͂Ȃ��Ȃ�܂����ABASEIMAGE �̍X�V�������s���܂���̂ŁAImageUpdateFlag �𗘗p���ĉ摜���X�V���ꂽ���ǂ���������`�F�b�N�������ꍇ�� TRUE �ɂ��Ă������� )
extern	int			GetMovieTotalFrameToGraph(			int GraphHandle ) ;															// ����t�@�C���̑��t���[�����𓾂�( Ogg Theora �� mp4 �ł̂ݗL�� )
extern	int			TellMovieToGraph(					int GraphHandle ) ;															// ����t�@�C���̍Đ��ʒu��擾����(�~���b�P��)
extern	int			TellMovieToGraphToFrame(			int GraphHandle ) ;															// ����t�@�C���̍Đ��ʒu��擾����(�t���[���P��)
extern	int			SeekMovieToGraphToFrame(			int GraphHandle, int Frame ) ;												// ����t�@�C���̍Đ��ʒu��ݒ肷��(�t���[���P��)
extern	LONGLONG	GetOneFrameTimeMovieToGraph(		int GraphHandle ) ;															// ����t�@�C���̂P�t���[��������̎��Ԃ�擾����(�߂�l�F�P�t���[���̎���(�P��:�}�C�N���b))
extern	int			GetLastUpdateTimeMovieToGraph(		int GraphHandle ) ;															// ����t�@�C���̃C���[�W��Ō�ɍX�V�������Ԃ𓾂�(�~���b�P��)
extern	int			UpdateMovieToGraph(					int GraphHandle ) ;															// ����t�@�C���̍X�V������s��
extern	int			SetMovieRightImageAlphaFlag(		int Flag ) ;																// �ǂݍ��ޓ���t�@�C���f���̉E�����̐Ԑ���������Ƃ��Ĉ������ǂ�����Z�b�g����( TRUE:�����Ƃ��Ĉ���  FALSE:�����Ƃ��Ĉ���Ȃ�( �f�t�H���g ) )
extern	int			SetMovieColorA8R8G8B8Flag(			int Flag ) ;																// �ǂݍ��ޓ���t�@�C����32bit�J���[�������ꍇ�AA8R8G8B8 �`���Ƃ��Ĉ������ǂ�����Z�b�g����A32bit�J���[�ł͂Ȃ�����t�@�C���ɑ΂��Ă͖���( Flag  TRUE:A8R8G8B8�Ƃ��Ĉ���  FALSE:X8R8G8B8�Ƃ��Ĉ���( �f�t�H���g ) )
extern	int			SetMovieUseYUVFormatSurfaceFlag(	int Flag ) ;																// �x�t�u�t�H�[�}�b�g�̃T�[�t�F�X���g�p�ł���ꍇ�͂x�t�u�t�H�[�}�b�g�̃T�[�t�F�X��g�p���邩�ǂ�����ݒ肷��( TRUE:�g�p����( �f�t�H���g ) FALSE:�q�f�a�t�H�[�}�b�g�̃T�[�t�F�X��g�p���� )
#endif // DX_NON_MOVIE

// �J�����֌W�֐�
extern	int			SetCameraNearFar(					float  Near, float  Far ) ;												// �J������ Near�N���b�v�ʂ� Far�N���b�v�ʂ̋�����ݒ肷��
extern	int			SetCameraNearFarD(					double Near, double Far ) ;												// �J������ Near�N���b�v�ʂ� Far�N���b�v�ʂ̋�����ݒ肷��
extern	int			SetCameraPositionAndTarget_UpVecY(  VECTOR    Position, VECTOR   Target ) ;									// �J�����̎��_�A�����_�A�A�b�v�x�N�g����ݒ肷��( �A�b�v�x�N�g���͂x���������瓱���o�� )
extern	int			SetCameraPositionAndTarget_UpVecYD( VECTOR_D  Position, VECTOR_D Target ) ;									// �J�����̎��_�A�����_�A�A�b�v�x�N�g����ݒ肷��( �A�b�v�x�N�g���͂x���������瓱���o�� )
extern	int			SetCameraPositionAndTargetAndUpVec( VECTOR    Position, VECTOR   TargetPosition, VECTOR   UpVector ) ;		// �J�����̎��_�A�����_�A�A�b�v�x�N�g����ݒ肷��
extern	int			SetCameraPositionAndTargetAndUpVecD( VECTOR_D Position, VECTOR_D TargetPosition, VECTOR_D UpVector ) ;		// �J�����̎��_�A�����_�A�A�b�v�x�N�g����ݒ肷��
extern	int			SetCameraPositionAndAngle(			VECTOR   Position, float  VRotate, float  HRotate, float  TRotate ) ;	// �J�����̎��_�A�����_�A�A�b�v�x�N�g����ݒ肷��( �����_�ƃA�b�v�x�N�g���͐�����]�p�x�A������]�p�x�A�P���]�p�x���瓱���o�� )
extern	int			SetCameraPositionAndAngleD(			VECTOR_D Position, double VRotate, double HRotate, double TRotate ) ;	// �J�����̎��_�A�����_�A�A�b�v�x�N�g����ݒ肷��( �����_�ƃA�b�v�x�N�g���͐�����]�p�x�A������]�p�x�A�P���]�p�x���瓱���o�� )
extern	int			SetCameraViewMatrix(				MATRIX   ViewMatrix ) ;													// �r���[�s��𒼐ڐݒ肷��
extern	int			SetCameraViewMatrixD(				MATRIX_D ViewMatrix ) ;													// �r���[�s��𒼐ڐݒ肷��
extern	int			SetCameraScreenCenter(				float x, float y ) ;													// ��ʏ�ɂ�����J���������Ă���f���̒��S�̍��W��ݒ肷��
extern	int			SetCameraScreenCenterD(				double x, double y ) ;													// ��ʏ�ɂ�����J���������Ă���f���̒��S�̍��W��ݒ肷��

extern	int			SetupCamera_Perspective(			float  Fov ) ;															// ���ߖ@�J������Z�b�g�A�b�v����
extern	int			SetupCamera_PerspectiveD(			double Fov ) ;															// ���ߖ@�J������Z�b�g�A�b�v����
extern	int			SetupCamera_Ortho(					float  Size ) ;															// ���ˉe�J������Z�b�g�A�b�v����
extern	int			SetupCamera_OrthoD(					double Size ) ;															// ���ˉe�J������Z�b�g�A�b�v����
extern	int			SetupCamera_ProjectionMatrix(		MATRIX   ProjectionMatrix ) ;											// �ˉe�s��𒼐ڐݒ肷��
extern	int			SetupCamera_ProjectionMatrixD(		MATRIX_D ProjectionMatrix ) ;											// �ˉe�s��𒼐ڐݒ肷��
extern	int			SetCameraDotAspect(					float  DotAspect ) ;													// �J�����̃h�b�g�A�X�y�N�g���ݒ肷��
extern	int			SetCameraDotAspectD(				double DotAspect ) ;													// �J�����̃h�b�g�A�X�y�N�g���ݒ肷��

extern	int			CheckCameraViewClip(				VECTOR   CheckPos ) ;													// �w��̍��W���J�����̎��E�ɓ����Ă��邩�ǂ����𔻒肷��( �߂�l TRUE:���E�ɓ����Ă��Ȃ�  FALSE:���E�ɓ����Ă��� )
extern	int			CheckCameraViewClipD(				VECTOR_D CheckPos ) ;													// �w��̍��W���J�����̎��E�ɓ����Ă��邩�ǂ����𔻒肷��( �߂�l TRUE:���E�ɓ����Ă��Ȃ�  FALSE:���E�ɓ����Ă��� )
extern	int			CheckCameraViewClip_Dir(			VECTOR   CheckPos ) ;													// �w��̍��W���J�����̎��E�ɓ����Ă��邩�ǂ����𔻒肷��A�߂�l�ŊO��Ă��������m�邱�Ƃ��ł���( �߂�l 0:���E�ɓ����Ă���  0�ȊO:���E�ɓ����Ă��Ȃ�( DX_CAMERACLIP_LEFT �� DX_CAMERACLIP_RIGHT �� or ���Z�ō������ꂽ��́Aand ���Z�ŕ�����m�F�ł��� ) )
extern	int			CheckCameraViewClip_DirD(			VECTOR_D CheckPos ) ;													// �w��̍��W���J�����̎��E�ɓ����Ă��邩�ǂ����𔻒肷��A�߂�l�ŊO��Ă��������m�邱�Ƃ��ł���( �߂�l 0:���E�ɓ����Ă���  0�ȊO:���E�ɓ����Ă��Ȃ�( DX_CAMERACLIP_LEFT �� DX_CAMERACLIP_RIGHT �� or ���Z�ō������ꂽ��́Aand ���Z�ŕ�����m�F�ł��� ) )
extern	int			CheckCameraViewClip_Box(			VECTOR   BoxPos1, VECTOR   BoxPos2 ) ;									// ��̍��W�ŕ\�����{�b�N�X���J�����̎��E�ɓ����Ă��邩�ǂ����𔻒肷��( �߂�l TRUE:���E�ɓ����Ă��Ȃ�  FALSE:���E�ɓ����Ă��� )
extern	int			CheckCameraViewClip_BoxD(			VECTOR_D BoxPos1, VECTOR_D BoxPos2 ) ;									// ��̍��W�ŕ\�����{�b�N�X���J�����̎��E�ɓ����Ă��邩�ǂ����𔻒肷��( �߂�l TRUE:���E�ɓ����Ă��Ȃ�  FALSE:���E�ɓ����Ă��� )

extern	float		GetCameraNear(						void ) ;																// �J������ Near �N���b�v�ʂ̋�����擾����
extern	double		GetCameraNearD(						void ) ;																// �J������ Near �N���b�v�ʂ̋�����擾����
extern	float		GetCameraFar(						void ) ;																// �J������ Far �N���b�v�ʂ̋�����擾����
extern	double		GetCameraFarD(						void ) ;																// �J������ Far �N���b�v�ʂ̋�����擾����

extern	VECTOR		GetCameraPosition(					void ) ;																// �J�����̈ʒu��擾����
extern	VECTOR_D	GetCameraPositionD(					void ) ;																// �J�����̈ʒu��擾����
extern	VECTOR		GetCameraTarget(					void ) ;																// �J�����̒����_��擾����
extern	VECTOR_D	GetCameraTargetD(					void ) ;																// �J�����̒����_��擾����
extern	VECTOR		GetCameraUpVector(					void ) ;																// �J�����̐��ʕ����ɐ����ȏ�����̃x�N�g����擾����
extern	VECTOR_D	GetCameraUpVectorD(					void ) ;																// �J�����̐��ʕ����ɐ����ȏ�����̃x�N�g����擾����
extern	VECTOR		GetCameraDownVector(				void ) ;																// �J�����̐��ʕ����ɐ����ȉ������̃x�N�g����擾����
extern	VECTOR_D	GetCameraDownVectorD(				void ) ;																// �J�����̐��ʕ����ɐ����ȉ������̃x�N�g����擾����
extern	VECTOR		GetCameraRightVector(				void ) ;																// �J�����̐��ʕ����ɐ����ȉE�����̃x�N�g����擾����
extern	VECTOR_D	GetCameraRightVectorD(				void ) ;																// �J�����̐��ʕ����ɐ����ȉE�����̃x�N�g����擾����
extern	VECTOR		GetCameraLeftVector(				void ) ;																// �J�����̐��ʕ����ɐ����ȍ������̃x�N�g����擾����
extern	VECTOR_D	GetCameraLeftVectorD(				void ) ;																// �J�����̐��ʕ����ɐ����ȍ������̃x�N�g����擾����
extern	VECTOR		GetCameraFrontVector(				void ) ;																// �J�����̐��ʕ����̃x�N�g����擾����
extern	VECTOR_D	GetCameraFrontVectorD(				void ) ;																// �J�����̐��ʕ����̃x�N�g����擾����
extern	VECTOR		GetCameraBackVector(				void ) ;																// �J�����̌������̃x�N�g����擾����
extern	VECTOR_D	GetCameraBackVectorD(				void ) ;																// �J�����̌������̃x�N�g����擾����
extern	float		GetCameraAngleHRotate(				void ) ;																// �J�����̐��������̌�����擾����
extern	double		GetCameraAngleHRotateD(				void ) ;																// �J�����̐��������̌�����擾����
extern	float		GetCameraAngleVRotate(				void ) ;																// �J�����̐��������̌�����擾����
extern	double		GetCameraAngleVRotateD(				void ) ;																// �J�����̐��������̌�����擾����
extern	float		GetCameraAngleTRotate(				void ) ;																// �J�����̌����̔P��p�x��擾����
extern	double		GetCameraAngleTRotateD(				void ) ;																// �J�����̌����̔P��p�x��擾����

extern	MATRIX		GetCameraViewMatrix(				void ) ;																// �r���[�s���擾����
extern	MATRIX_D	GetCameraViewMatrixD(				void ) ;																// �r���[�s���擾����
extern	MATRIX		GetCameraBillboardMatrix(			void ) ;																// �r���{�[�h�s���擾����
extern	MATRIX_D	GetCameraBillboardMatrixD(			void ) ;																// �r���{�[�h�s���擾����
extern	int			GetCameraScreenCenter(				float  *x, float  *y ) ;												// ��ʏ�ɂ�����J���������Ă���f���̒��S�̍��W��擾����
extern	int			GetCameraScreenCenterD(				double *x, double *y ) ;												// ��ʏ�ɂ�����J���������Ă���f���̒��S�̍��W��擾����
extern	float		GetCameraFov(						void ) ;																// �J�����̎���p��擾����
extern	double		GetCameraFovD(						void ) ;																// �J�����̎���p��擾����
extern	float		GetCameraSize(						void ) ;																// �J�����̎���T�C�Y��擾����
extern	double		GetCameraSizeD(						void ) ;																// �J�����̎���T�C�Y��擾����
extern	MATRIX		GetCameraProjectionMatrix(			void ) ;																// �ˉe�s���擾����
extern	MATRIX_D	GetCameraProjectionMatrixD(			void ) ;																// �ˉe�s���擾����
extern	float		GetCameraDotAspect(					void ) ;																// �J�����̃h�b�g�A�X�y�N�g��𓾂�
extern	double		GetCameraDotAspectD(				void ) ;																// �J�����̃h�b�g�A�X�y�N�g��𓾂�
extern	MATRIX		GetCameraViewportMatrix(			void ) ;																// �r���[�|�[�g�s���擾����
extern	MATRIX_D	GetCameraViewportMatrixD(			void ) ;																// �r���[�|�[�g�s���擾����
extern	MATRIX		GetCameraAPIViewportMatrix(			void ) ;																// Direct3D�Ŏ����K�p�����r���[�|�[�g�s���擾����
extern	MATRIX_D	GetCameraAPIViewportMatrixD(		void ) ;																// Direct3D�Ŏ����K�p�����r���[�|�[�g�s���擾����

// ���C�g�֌W�֐�
extern	int			SetUseLighting(				int Flag ) ;																	// ���C�e�B���O��g�p���邩�ǂ�����ݒ肷��
extern	int			SetMaterialUseVertDifColor( int UseFlag ) ;																	// �R�c�`��̃��C�e�B���O�v�Z�Œ��_�J���[�̃f�B�t���[�Y�J���[��g�p���邩�ǂ�����ݒ肷��
extern	int			SetMaterialUseVertSpcColor( int UseFlag ) ;																	// �R�c�`��̃��C�e�B���O�v�Z�Œ��_�J���[�̃X�y�L�����J���[��g�p���邩�ǂ�����ݒ肷��
extern	int			SetMaterialParam(			MATERIALPARAM Material ) ;														// �R�c�`��̃��C�e�B���O�v�Z�Ŏg�p����}�e���A���p�����[�^��ݒ肷��
extern	int			SetUseSpecular(				int UseFlag ) ;																	// �R�c�`��ɃX�y�L������g�p���邩�ǂ�����ݒ肷��
extern	int			SetGlobalAmbientLight(		COLOR_F Color ) ;																// �O���[�o���A���r�G���g���C�g�J���[��ݒ肷��
extern	int			SetUseLightAngleAttenuation( int UseFlag ) ;																// �R�c�`��̃��C�e�B���O�v�Z�Ŋp�x������s�����ǂ�����ݒ肷��( TRUE:�p�x������s��( �f�t�H���g )  FALSE:�p�x������s��Ȃ� )
extern	int			SetUseHalfLambertLighting(	 int UseFlag ) ;																	// �R�c�`��̃��C�e�B���O�v�Z�Ńn�[�t�����o�[�g��g�p���邩�ǂ�����ݒ肷��( TRUE:�n�[�t�����o�[�g��g�p����  FALSE:�n�[�t�����o�[�g��g�p���Ȃ�( �f�t�H���g ) )

extern	int			ChangeLightTypeDir(			VECTOR Direction ) ;															// �f�t�H���g���C�g�̃^�C�v��f�B���N�V���i�����C�g�ɂ���
extern	int			ChangeLightTypeSpot(		VECTOR Position, VECTOR Direction, float OutAngle, float InAngle, float Range, float Atten0, float Atten1, float Atten2 ) ;	// �f�t�H���g���C�g�̃^�C�v��X�|�b�g���C�g�ɂ���
extern	int			ChangeLightTypePoint(		VECTOR Position, float Range, float Atten0, float Atten1, float Atten2 ) ;		// �f�t�H���g���C�g�̃^�C�v��|�C���g���C�g�ɂ���
extern	int			GetLightType(				void ) ;																		// �f�t�H���g���C�g�̃^�C�v��擾����( �߂�l�� DX_LIGHTTYPE_DIRECTIONAL �� )
extern	int			SetLightEnable(				int EnableFlag ) ;																// �f�t�H���g���C�g��g�p���邩�ǂ�����ݒ肷��
extern	int			GetLightEnable(				void ) ;																		// �f�t�H���g���C�g��g�p���邩�ǂ�����擾����( �߂�l�@TRUE:�L��  FALSE:���� )
extern	int			SetLightDifColor(			COLOR_F Color ) ;																// �f�t�H���g���C�g�̃f�B�t���[�Y�J���[��ݒ肷��
extern	COLOR_F		GetLightDifColor(			void ) ;																		// �f�t�H���g���C�g�̃f�B�t���[�Y�J���[��擾����
extern	int			SetLightSpcColor(			COLOR_F Color ) ;																// �f�t�H���g���C�g�̃X�y�L�����J���[��ݒ肷��
extern	COLOR_F		GetLightSpcColor(			void ) ;																		// �f�t�H���g���C�g�̃X�y�L�����J���[��擾����
extern	int			SetLightAmbColor(			COLOR_F Color ) ;																// �f�t�H���g���C�g�̃A���r�G���g�J���[��ݒ肷��
extern	COLOR_F		GetLightAmbColor(			void ) ;																		// �f�t�H���g���C�g�̃A���r�G���g�J���[��擾����
extern	int			SetLightDirection(			VECTOR Direction ) ;															// �f�t�H���g���C�g�̕�����ݒ肷��
extern	VECTOR		GetLightDirection(			void ) ;																		// �f�t�H���g���C�g�̕�����擾����
extern	int			SetLightPosition(			VECTOR Position ) ;																// �f�t�H���g���C�g�̈ʒu��ݒ肷��
extern	VECTOR		GetLightPosition(			void ) ;																		// �f�t�H���g���C�g�̈ʒu��擾����
extern	int			SetLightRangeAtten(			float Range, float Atten0, float Atten1, float Atten2 ) ;						// �f�t�H���g���C�g�̋��������p�����[�^��ݒ肷��( �L�������A���������W���O�A�P�A�Q )
extern	int			GetLightRangeAtten(			float *Range, float *Atten0, float *Atten1, float *Atten2 )	;					// �f�t�H���g���C�g�̋��������p�����[�^��擾����( �L�������A���������W���O�A�P�A�Q )
extern	int			SetLightAngle(				float OutAngle, float InAngle ) ;												// �f�t�H���g���C�g�̃X�|�b�g���C�g�̃p�����[�^��ݒ肷��( �O���R�[���p�x�A����R�[���p�x )
extern	int			GetLightAngle(				float *OutAngle, float *InAngle ) ;												// �f�t�H���g���C�g�̃X�|�b�g���C�g�̃p�����[�^��擾����( �O���R�[���p�x�A����R�[���p�x )
extern	int			SetLightUseShadowMap(		int SmSlotIndex, int UseFlag ) ;												// �f�t�H���g���C�g�� SetUseShadowMap �Ŏw�肵���V���h�E�}�b�v��K�p���邩�ǂ�����ݒ肷��( SmSlotIndex:�V���h�E�}�b�v�X���b�g( SetUseShadowMap �̑������ɐݒ肷��l ) UseFlag:�K�p�ɂ��邩�ǂ����̃t���O( TRUE:�K�p����( �f�t�H���g )  FALSE:�K�p���Ȃ� ) )

extern	int			CreateDirLightHandle(       VECTOR Direction ) ;															// �f�B���N�V���i�����C�g�n���h����쐬����
extern	int			CreateSpotLightHandle(      VECTOR Position, VECTOR Direction, float OutAngle, float InAngle, float Range, float Atten0, float Atten1, float Atten2 ) ;	// �X�|�b�g���C�g�n���h����쐬����
extern	int			CreatePointLightHandle(     VECTOR Position, float Range, float Atten0, float Atten1, float Atten2 ) ;		// �|�C���g���C�g�n���h����쐬����
extern	int			DeleteLightHandle(          int LHandle ) ;																	// ���C�g�n���h����폜����
extern	int			DeleteLightHandleAll(       void ) ;																		// ���C�g�n���h����S�č폜����
extern	int			SetLightTypeHandle(         int LHandle, int LightType ) ;													// ���C�g�n���h���̃��C�g�̃^�C�v��ύX����( DX_LIGHTTYPE_DIRECTIONAL �� )
extern	int			SetLightEnableHandle(       int LHandle, int EnableFlag ) ;													// ���C�g�n���h���̃��C�g���ʂ̗L���A������ݒ肷��( TRUE:�L��  FALSE:���� )
extern	int			SetLightDifColorHandle(     int LHandle, COLOR_F Color ) ;													// ���C�g�n���h���̃��C�g�̃f�B�t���[�Y�J���[��ݒ肷��
extern	int			SetLightSpcColorHandle(     int LHandle, COLOR_F Color ) ;													// ���C�g�n���h���̃��C�g�̃X�y�L�����J���[��ݒ肷��
extern	int			SetLightAmbColorHandle(     int LHandle, COLOR_F Color ) ;													// ���C�g�n���h���̃��C�g�̃A���r�G���g�J���[��ݒ肷��
extern	int			SetLightDirectionHandle(    int LHandle, VECTOR Direction ) ;												// ���C�g�n���h���̃��C�g�̕�����ݒ肷��
extern	int			SetLightPositionHandle(     int LHandle, VECTOR Position ) ;												// ���C�g�n���h���̃��C�g�̈ʒu��ݒ肷��
extern	int			SetLightRangeAttenHandle(   int LHandle, float Range, float Atten0, float Atten1, float Atten2 ) ;			// ���C�g�n���h���̃��C�g�̋��������p�����[�^��ݒ肷��( �L�������A���������W���O�A�P�A�Q )
extern	int			SetLightAngleHandle(        int LHandle, float OutAngle, float InAngle ) ;									// ���C�g�n���h���̃��C�g�̃X�|�b�g���C�g�̃p�����[�^��ݒ肷��( �O���R�[���p�x�A����R�[���p�x )
extern	int			SetLightUseShadowMapHandle(	int LHandle, int SmSlotIndex, int UseFlag ) ;									// ���C�g�n���h���̃��C�g�� SetUseShadowMap �Ŏw�肵���V���h�E�}�b�v��K�p���邩�ǂ�����ݒ肷��( SmSlotIndex:�V���h�E�}�b�v�X���b�g( SetUseShadowMap �̑������ɐݒ肷��l ) UseFlag:�K�p�ɂ��邩�ǂ����̃t���O( TRUE:�K�p����( �f�t�H���g )  FALSE:�K�p���Ȃ� ) )
extern	int			GetLightTypeHandle(         int LHandle ) ;																	// ���C�g�n���h���̃��C�g�̃^�C�v��擾����( �߂�l�� DX_LIGHTTYPE_DIRECTIONAL �� )
extern	int			GetLightEnableHandle(       int LHandle ) ;																	// ���C�g�n���h���̃��C�g���ʂ̗L���A������擾����( TRUE:�L��  FALSE:���� )
extern	COLOR_F		GetLightDifColorHandle(     int LHandle ) ;																	// ���C�g�n���h���̃��C�g�̃f�B�t���[�Y�J���[��擾����
extern	COLOR_F		GetLightSpcColorHandle(     int LHandle ) ;																	// ���C�g�n���h���̃��C�g�̃X�y�L�����J���[��擾����
extern	COLOR_F		GetLightAmbColorHandle(     int LHandle ) ;																	// ���C�g�n���h���̃��C�g�̃A���r�G���g�J���[��擾����
extern	VECTOR		GetLightDirectionHandle(    int LHandle ) ;																	// ���C�g�n���h���̃��C�g�̕�����擾����
extern	VECTOR		GetLightPositionHandle(     int LHandle ) ;																	// ���C�g�n���h���̃��C�g�̈ʒu��擾����
extern	int			GetLightRangeAttenHandle(   int LHandle, float *Range, float *Atten0, float *Atten1, float *Atten2 ) ;		// ���C�g�n���h���̃��C�g�̋��������p�����[�^��擾����( �L�������A���������W���O�A�P�A�Q )
extern	int			GetLightAngleHandle(        int LHandle, float *OutAngle, float *InAngle ) ;								// ���C�g�n���h���̃��C�g�̃X�|�b�g���C�g�̃p�����[�^��擾����( �O���R�[���p�x�A����R�[���p�x )

extern	int			GetEnableLightHandleNum(	void ) ;																		// �L���ɂȂ��Ă��郉�C�g�n���h���̐���擾����
extern	int			GetEnableLightHandle(		int Index ) ;																	// �L���ɂȂ��Ă��郉�C�g�n���h����擾����

// �F���擾�p�֐�
extern	int			GetTexFormatIndex(			const IMAGEFORMATDESC *Format ) ;												// �e�N�X�`���t�H�[�}�b�g�̃C���f�b�N�X�𓾂�








// DxMask.cpp �֐��v���g�^�C�v�錾

#ifndef DX_NON_MASK

// �}�X�N�֌W 
extern	int			CreateMaskScreen(					void ) ;																						// �}�X�N�X�N���[����쐬����
extern	int			DeleteMaskScreen(					void ) ;																						// �}�X�N�X�N���[����폜����
extern	int			DrawMaskToDirectData(				int x, int y, int Width, int Height, const void *MaskData , int TransMode ) ;					// �}�X�N�X�N���[���Ƀ�������̃r�b�g�}�b�v�f�[�^��]������( MaskData �� 1byte �� 1dot �\���P���C�������� Width byte �̃f�[�^�z��̐擪�A�h���X )
extern	int			DrawFillMaskToDirectData(			int x1, int y1, int x2, int y2,  int Width, int Height, const void *MaskData ) ;				// �}�X�N�X�N���[���Ƀ�������̃r�b�g�}�b�v�f�[�^�Ŏw���`���h��Ԃ��悤�ɓ]������

extern	int			SetUseMaskScreenFlag(				int ValidFlag ) ;																				// �}�X�N�X�N���[����g�p���邩�ǂ�����ݒ肷��( ValidFlag:�g�p���邩�ǂ���( TRUE:�g�p����  FALSE:�g�p���Ȃ�( �f�t�H���g ) )
extern	int			GetUseMaskScreenFlag(				void ) ;																						// �}�X�N�X�N���[����g�p���邩�ǂ�����擾����
extern	int			FillMaskScreen(						int Flag ) ;																					// �}�X�N�X�N���[����w��̐F�œh��Ԃ�
extern	int			SetMaskScreenGraph(					int GraphHandle ) ;																				// �}�X�N�X�N���[���Ƃ��Ďg�p����O���t�B�b�N�̃n���h����ݒ肷��A-1��n���Ɖ��( �����œn���O���t�B�b�N�n���h���� MakeScreen �ō쐬�����u�A���t�@�`�����l���t���̕`��Ώۂɂł���O���t�B�b�N�n���h���v�ł���K�v������܂�( �A���t�@�`�����l�����}�X�N�Ɏg�p����܂� ) )
extern	int			SetMaskScreenGraphUseChannel(		int UseChannel /* DX_MASKGRAPH_CH_A �� */ ) ;													// �}�X�N�X�N���[���Ƃ��Ďg�p����O���t�B�b�N�́A�ǂ̃`�����l����}�X�N�Ƃ��Ďg�p���邩��ݒ肷��( �f�t�H���g�� DX_MASKGRAPH_CH_A�A ���ADX_MASKGRAPH_CH_A�ȊO��g�p����ꍇ�̓O���t�B�b�N�X�f�o�C�X���V�F�[�_�[���f��2.0�ȍ~�ɑΉ����Ă���K�v������܂� )

extern	int			InitMask(							void ) ;																						// �}�X�N�n���h������ׂč폜����
extern	int			MakeMask(							int Width, int Height ) ;																		// �}�X�N�n���h����쐬����
extern	int			GetMaskSize(						int *WidthBuf, int *HeightBuf, int MaskHandle ) ;												// �}�X�N�n���h�������}�X�N�C���[�W�̃T�C�Y��擾����
extern	int			GetMaskBaseImageInfo(				BASEIMAGE *BaseImage, int MaskHandle ) ;														// �}�X�N�n���h�������}�X�N�C���[�W��BASEIMAGE�f�[�^��擾����( �t�H�[�}�b�g���ύX�����悤�ȑ�������Ɛ���ɓ��삵�Ȃ��Ȃ�܂��A���ƁAReleaseBaseImage �͎��s����K�v�͂���܂��� )
extern	int			SetDataToMask(						int Width, int Height, const void *MaskData, int MaskHandle ) ;									// �}�X�N�n���h���Ƀr�b�g�}�b�v�C���[�W��]������
extern	int			DeleteMask(							int MaskHandle ) ;																				// �}�X�N�n���h����폜����
extern	int			GraphImageBltToMask(				const BASEIMAGE *BaseImage, int ImageX, int ImageY, int MaskHandle ) ;							// �}�X�N�n���h����BASEIMAGE�f�[�^��]������
extern	int			LoadMask(							const TCHAR *FileName                        ) ;																			// �摜�t�@�C����ǂݍ��݃}�X�N�n���h����쐬����
extern	int			LoadMaskWithStrLen(					const TCHAR *FileName, size_t FileNameLength ) ;																			// �摜�t�@�C����ǂݍ��݃}�X�N�n���h����쐬����
extern	int			LoadDivMask(						const TCHAR *FileName,                        int AllNum, int XNum, int YNum, int XSize, int YSize, int *HandleArray ) ;	// �摜�t�@�C���𕪊��ǂݍ��݂��ă}�X�N�n���h����쐬����
extern	int			LoadDivMaskWithStrLen(				const TCHAR *FileName, size_t FileNameLength, int AllNum, int XNum, int YNum, int XSize, int YSize, int *HandleArray ) ;	// �摜�t�@�C���𕪊��ǂݍ��݂��ă}�X�N�n���h����쐬����
extern	int			CreateMaskFromMem(					const void *FileImage, int FileImageSize ) ;																				// ��������ɂ���摜�t�@�C���C���[�W��ǂݍ��݃}�X�N�n���h����쐬����
extern	int			CreateDivMaskFromMem(				const void *FileImage, int FileImageSize, int AllNum, int XNum, int YNum, int XSize, int YSize, int *HandleArray ) ;		// ��������ɂ���摜�t�@�C���C���[�W�𕪊��ǂݍ��݂��ă}�X�N�n���h����쐬����
extern	int			DrawMask(							int x, int y, int MaskHandle, int TransMode ) ;													// �}�X�N�X�N���[���Ƀ}�X�N�n���h���̎��}�X�N�C���[�W���������
#ifndef DX_NON_FONT
extern	int			DrawFormatStringMask(				int x, int y, int Flag,                 const TCHAR *FormatString, ... ) ;						// �����w�肠��̕������}�X�N�X�N���[���ɕ`�悷��
extern	int			DrawFormatStringMaskToHandle(		int x, int y, int Flag, int FontHandle, const TCHAR *FormatString, ... ) ;						// �����w�肠��̕������}�X�N�X�N���[���ɕ`�悷��( �t�H���g�n���h���w��� )( SetFontCacheToTextureFlag( FALSE ) ; �ɂ��č쐬�����t�H���g�n���h���̂ݎg�p�\ )
extern	int			DrawStringMask(						int x, int y, int Flag,                 const TCHAR *String ) ;									// �������}�X�N�X�N���[���ɕ`�悷��
extern	int			DrawNStringMask(					int x, int y, int Flag,                 const TCHAR *String, size_t StringLength ) ;			// �������}�X�N�X�N���[���ɕ`�悷��
extern	int			DrawStringMaskToHandle(				int x, int y, int Flag, int FontHandle, const TCHAR *String ) ;									// �������}�X�N�X�N���[���ɕ`�悷��( �t�H���g�n���h���w��� )( SetFontCacheToTextureFlag( FALSE ) ; �ɂ��č쐬�����t�H���g�n���h���̂ݎg�p�\ )
extern	int			DrawNStringMaskToHandle(			int x, int y, int Flag, int FontHandle, const TCHAR *String, size_t StringLength ) ;			// �������}�X�N�X�N���[���ɕ`�悷��( �t�H���g�n���h���w��� )( SetFontCacheToTextureFlag( FALSE ) ; �ɂ��č쐬�����t�H���g�n���h���̂ݎg�p�\ )
#endif // DX_NON_FONT
extern	int			DrawFillMask(						int x1, int y1, int x2, int y2, int MaskHandle ) ;												// �}�X�N�n���h�������}�X�N�C���[�W��}�X�N�X�N���[�������ς��ɕ`�悷��( �^�C����ɕ��ׂ� )
extern	int			SetMaskReverseEffectFlag(			int ReverseFlag ) ;																				// �}�X�N�C���[�W��̐��l�ɑ΂�����ʂ�t�]������( ���o�[�W�����Ƃ̌݊����ׂ̈̋@�\ )

extern 	int			GetMaskScreenData(					int x1, int y1, int x2, int y2, int MaskHandle ) ;												// �}�X�N�X�N���[���̎w���`������}�X�N�n���h���ɓ]������
extern	int			GetMaskUseFlag(						void ) ;																						// �}�X�N�X�N���[����g�p����ݒ�ɂȂ��Ă��邩�ǂ�����擾����

#endif // DX_NON_MASK

#endif // DX_NOTUSE_DRAWFUNCTION















// DxFont.cpp �֐��v���g�^�C�v�錾

#ifndef DX_NON_FONT

// �t�H���g�A������`��֌W�֐�
extern	int			EnumFontName(                           TCHAR *NameBuffer, int NameBufferNum, int JapanOnlyFlag DEFAULTPARAM( = TRUE ) ) ;																				// �g�p�\�ȃt�H���g�̖��O��񋓂���( NameBuffer �� 64�o�C�g��؂�Ŗ��O���i�[����܂� )
extern	int			EnumFontNameEx(                         TCHAR *NameBuffer, int NameBufferNum,                                                       int CharSet DEFAULTPARAM( = -1 ) /* DX_CHARSET_DEFAULT �� */ ) ;	// �g�p�\�ȃt�H���g�̖��O��񋓂���( NameBuffer �� 64�o�C�g��؂�Ŗ��O���i�[����܂� )( �����Z�b�g�w��� )
extern	int			EnumFontNameEx2(						TCHAR *NameBuffer, int NameBufferNum, const TCHAR *EnumFontName,                            int CharSet DEFAULTPARAM( = -1 ) /* DX_CHARSET_DEFAULT �� */ ) ;	// �w��̃t�H���g���̃t�H���g��񋓂���
extern	int			EnumFontNameEx2WithStrLen(				TCHAR *NameBuffer, int NameBufferNum, const TCHAR *EnumFontName, size_t EnumFontNameLength, int CharSet DEFAULTPARAM( = -1 ) /* DX_CHARSET_DEFAULT �� */ ) ;	// �w��̃t�H���g���̃t�H���g��񋓂���
extern	int			CheckFontName(							const TCHAR *FontName,                        int CharSet DEFAULTPARAM( = -1 ) /* DX_CHARSET_DEFAULT �� */ ) ;													// �w��̃t�H���g���̃t�H���g�����݂��邩�ǂ�����`�F�b�N����( �߂�l  TRUE:���݂���  FALSE:���݂��Ȃ� )
extern	int			CheckFontNameWithStrLen(				const TCHAR *FontName, size_t FontNameLength, int CharSet DEFAULTPARAM( = -1 ) /* DX_CHARSET_DEFAULT �� */ ) ;													// �w��̃t�H���g���̃t�H���g�����݂��邩�ǂ�����`�F�b�N����( �߂�l  TRUE:���݂���  FALSE:���݂��Ȃ� )

extern	int			InitFontToHandle(                       void ) ;																						// �S�Ẵt�H���g�n���h����폜����

extern	int			CreateFontToHandle(						const TCHAR *FontName,                        int Size, int Thick, int FontType DEFAULTPARAM( = -1 ) , int CharSet DEFAULTPARAM( = -1 ) , int EdgeSize DEFAULTPARAM( = -1 ) , int Italic DEFAULTPARAM( = FALSE ) , int Handle DEFAULTPARAM( = -1 ) ) ;		// �t�H���g�n���h����쐬����
extern	int			CreateFontToHandleWithStrLen(			const TCHAR *FontName, size_t FontNameLength, int Size, int Thick, int FontType DEFAULTPARAM( = -1 ) , int CharSet DEFAULTPARAM( = -1 ) , int EdgeSize DEFAULTPARAM( = -1 ) , int Italic DEFAULTPARAM( = FALSE ) , int Handle DEFAULTPARAM( = -1 ) ) ;		// �t�H���g�n���h����쐬����
extern	int			LoadFontDataToHandle(					const TCHAR *FileName,                            int EdgeSize DEFAULTPARAM( = 0 ) ) ;			// �t�H���g�f�[�^�t�@�C������t�H���g�n���h����쐬����
extern	int			LoadFontDataToHandleWithStrLen(			const TCHAR *FileName, size_t FileNameLength,     int EdgeSize DEFAULTPARAM( = 0 ) ) ;			// �t�H���g�f�[�^�t�@�C������t�H���g�n���h����쐬����
extern	int			LoadFontDataFromMemToHandle(			const void *FontDataImage, int FontDataImageSize, int EdgeSize DEFAULTPARAM( = 0 ) ) ;			// ��������̃t�H���g�f�[�^�t�@�C���C���[�W����t�H���g�n���h����쐬����
extern	int			SetFontSpaceToHandle(                   int Pixel, int FontHandle ) ;																	// �t�H���g�n���h���̎��Ԃ�ύX����
extern	int			SetFontLineSpaceToHandle(               int Pixel, int FontHandle ) ;																	// �t�H���g�n���h���̍s�Ԃ�ύX����
extern	int			SetFontCharCodeFormatToHandle(			int CharCodeFormat /* DX_CHARCODEFORMAT_SHIFTJIS �� */ , int FontHandle ) ;						// �w��̃t�H���g�n���h����g�p����֐��̈����ɓn��������̕����R�[�h�`����ݒ肷��( UNICODE�łł͖��� )
extern	int			DeleteFontToHandle(                     int FontHandle ) ;																				// �t�H���g�n���h����폜����
extern	int			SetFontLostFlag(                        int FontHandle, int *LostFlag ) ;																// �t�H���g�n���h����폜�����ۂ� TRUE ��������ϐ��̃A�h���X��ݒ肷��
extern	int			AddFontImageToHandle(					int FontHandle, const TCHAR *Char,                    int GrHandle, int DrawX, int DrawY, int AddX ) ;	// �w��̕����̑���ɕ`�悷��O���t�B�b�N�n���h����o�^����
extern	int			AddFontImageToHandleWithStrLen(			int FontHandle, const TCHAR *Char, size_t CharLength, int GrHandle, int DrawX, int DrawY, int AddX ) ;	// �w��̕����̑���ɕ`�悷��O���t�B�b�N�n���h����o�^����
extern	int			SubFontImageToHandle(					int FontHandle, const TCHAR *Char                    ) ;												// �w��̕����̑���ɕ`�悷��O���t�B�b�N�n���h���̓o�^��������
extern	int			SubFontImageToHandleWithStrLen(			int FontHandle, const TCHAR *Char, size_t CharLength ) ;												// �w��̕����̑���ɕ`�悷��O���t�B�b�N�n���h���̓o�^��������
extern	int			AddSubstitutionFontToHandle(			int FontHandle, int SubstitutionFontHandle, int DrawX, int DrawY ) ;							// ��փt�H���g�n���h��( FontHandle �ɖ���������`�悵�悤�Ƃ����Ƃ��ɑ���Ɏg�p�����t�H���g�n���h�� )��o�^����
extern	int			SubSubstitutionFontToHandle(			int FontHandle, int SubstitutionFontHandle ) ;													// ��փt�H���g�n���h���̓o�^��������

extern	int			ChangeFont(                             const TCHAR *FontName,                        int CharSet DEFAULTPARAM( = -1 ) /* DX_CHARSET_SHFTJIS �� */ ) ;	// �f�t�H���g�t�H���g�n���h���Ŏg�p����t�H���g��ύX
extern	int			ChangeFontWithStrLen(                   const TCHAR *FontName, size_t FontNameLength, int CharSet DEFAULTPARAM( = -1 ) /* DX_CHARSET_SHFTJIS �� */ ) ;	// �f�t�H���g�t�H���g�n���h���Ŏg�p����t�H���g��ύX
extern	int			ChangeFontFromHandle(					int FontHandle ) ;																				// �f�t�H���g�t�H���g�n���h���Ƃ��Ďg�p����t�H���g�n���h����ύX����
extern	int			ChangeFontType(                         int FontType ) ;																				// �f�t�H���g�t�H���g�n���h���̃t�H���g�^�C�v�̕ύX
extern	const TCHAR *GetFontName(							void ) ;																						// �f�t�H���g�t�H���g�n���h���̃t�H���g����擾����
extern	int			SetFontSize(                            int FontSize ) ;																				// �f�t�H���g�t�H���g�n���h���̃T�C�Y��ݒ肷��
extern	int			GetFontSize(                            void ) ;																						// �f�t�H���g�t�H���g�n���h���̃T�C�Y��擾����
extern	int			GetFontEdgeSize(                        void ) ;																						// �f�t�H���g�t�H���g�n���h���̉��T�C�Y��擾����
extern	int			SetFontThickness(                       int ThickPal ) ;																				// �f�t�H���g�t�H���g�n���h���̑�����ݒ肷��
extern	int			SetFontSpace(                           int Pixel ) ;																					// �f�t�H���g�t�H���g�n���h���̎��Ԃ�ύX����
extern	int			GetFontSpace(                           void ) ;																						// �f�t�H���g�t�H���g�n���h���̎��Ԃ�擾����
extern	int			SetFontLineSpace(                       int Pixel ) ;																					// �f�t�H���g�t�H���g�n���h���̍s�Ԃ�ύX����
extern	int			GetFontLineSpace(                       void ) ;																						// �f�t�H���g�t�H���g�n���h���̍s�Ԃ�擾����
extern	int			SetFontCharCodeFormat(					int CharCodeFormat /* DX_CHARCODEFORMAT_SHIFTJIS �� */ ) ;										// �f�t�H���g�t�H���g�n���h����g�p����֐��̈����ɓn��������̕����R�[�h�`����ݒ肷��( UNICODE�łł͖��� )
extern	int			SetDefaultFontState(                    const TCHAR *FontName,                        int Size, int Thick, int FontType DEFAULTPARAM( = -1 ) , int CharSet DEFAULTPARAM( = -1 ) , int EdgeSize DEFAULTPARAM( = -1 ) , int Italic DEFAULTPARAM( = FALSE ) ) ;	// �f�t�H���g�t�H���g�n���h���̐ݒ��ύX����
extern	int			SetDefaultFontStateWithStrLen(          const TCHAR *FontName, size_t FontNameLength, int Size, int Thick, int FontType DEFAULTPARAM( = -1 ) , int CharSet DEFAULTPARAM( = -1 ) , int EdgeSize DEFAULTPARAM( = -1 ) , int Italic DEFAULTPARAM( = FALSE ) ) ;	// �f�t�H���g�t�H���g�n���h���̐ݒ��ύX����
extern	int			GetDefaultFontHandle(                   void ) ;																								// �f�t�H���g�t�H���g�n���h����擾����
extern	int			GetFontMaxCacheCharNum(					void ) ;																								// �f�t�H���g�t�H���g�n���h���̃L���b�V���ł��镶���̐���擾����
extern	int			GetFontMaxWidth(                        void ) ;																								// �f�t�H���g�t�H���g�n���h���̕����̍ő啝��擾����
extern	int			GetFontAscent(                          void ) ;																								// �f�t�H���g�t�H���g�n���h���̕`��ʒu����x�[�X���C���܂ł̍�����擾����
extern	int			GetDrawStringWidth(                     const TCHAR *String, int StrLen,          int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;									// �f�t�H���g�t�H���g�n���h����g�p����������̕`�敝��擾����
extern	int			GetDrawNStringWidth(                    const TCHAR *String, size_t StringLength, int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;									// �f�t�H���g�t�H���g�n���h����g�p����������̕`�敝��擾����
extern	int			GetDrawFormatStringWidth(               const TCHAR *FormatString, ... ) ;																		// �f�t�H���g�t�H���g�n���h����g�p���������t��������̕`�敝��擾����
extern	int			GetDrawExtendStringWidth(               double ExRateX, const TCHAR *String, int StrLen,          int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;					// �f�t�H���g�t�H���g�n���h����g�p����������̕`�敝��擾����( �g�嗦�t�� )
extern	int			GetDrawExtendNStringWidth(              double ExRateX, const TCHAR *String, size_t StringLength, int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;					// �f�t�H���g�t�H���g�n���h����g�p����������̕`�敝��擾����( �g�嗦�t�� )
extern	int			GetDrawExtendFormatStringWidth(         double ExRateX, const TCHAR *FormatString, ... ) ;														// �f�t�H���g�t�H���g�n���h����g�p���������t��������̕`�敝��擾����( �g�嗦�t�� )
extern	int			GetDrawStringSize(                      int *SizeX, int *SizeY, int *LineCount, const TCHAR *String, int StrLen,          int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;											// �f�t�H���g�t�H���g�n���h����g�p����������̕`�敝�E�����E�s����擾����
extern	int			GetDrawNStringSize(                     int *SizeX, int *SizeY, int *LineCount, const TCHAR *String, size_t StringLength, int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;											// �f�t�H���g�t�H���g�n���h����g�p����������̕`�敝�E�����E�s����擾����
extern	int			GetDrawFormatStringSize(                int *SizeX, int *SizeY, int *LineCount, const TCHAR *FormatString, ... ) ;																				// �f�t�H���g�t�H���g�n���h����g�p���������t��������̕`�敝�E�����E�s����擾����
extern	int			GetDrawExtendStringSize(                int *SizeX, int *SizeY, int *LineCount, double ExRateX, double ExRateY, const TCHAR *String, int StrLen,          int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;			// �f�t�H���g�t�H���g�n���h����g�p����������̕`�敝�E�����E�s����擾����( �g�嗦�t�� )
extern	int			GetDrawExtendNStringSize(               int *SizeX, int *SizeY, int *LineCount, double ExRateX, double ExRateY, const TCHAR *String, size_t StringLength, int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;			// �f�t�H���g�t�H���g�n���h����g�p����������̕`�敝�E�����E�s����擾����( �g�嗦�t�� )
extern	int			GetDrawExtendFormatStringSize(          int *SizeX, int *SizeY, int *LineCount, double ExRateX, double ExRateY, const TCHAR *FormatString, ... ) ;												// �f�t�H���g�t�H���g�n���h����g�p���������t��������̕`�敝�E�����E�s����擾����( �g�嗦�t�� )
extern	int			GetDrawStringCharInfo(                  DRAWCHARINFO *InfoBuffer, size_t InfoBufferSize, const TCHAR *String, int StrLen,          int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;									// �f�t�H���g�t�H���g�n���h����g�p����������̂P�������̏���擾����
extern	int			GetDrawNStringCharInfo(                 DRAWCHARINFO *InfoBuffer, size_t InfoBufferSize, const TCHAR *String, size_t StringLength, int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;									// �f�t�H���g�t�H���g�n���h����g�p����������̂P�������̏���擾����
extern	int			GetDrawFormatStringCharInfo(            DRAWCHARINFO *InfoBuffer, size_t InfoBufferSize, const TCHAR *FormatString, ... ) ;																		// �f�t�H���g�t�H���g�n���h����g�p���������t��������̂P�������̏���擾����
extern	int			GetDrawExtendStringCharInfo(            DRAWCHARINFO *InfoBuffer, size_t InfoBufferSize, double ExRateX, double ExRateY, const TCHAR *String, int StrLen,          int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;	// �f�t�H���g�t�H���g�n���h����g�p����������̂P�������̏���擾����
extern	int			GetDrawExtendNStringCharInfo(           DRAWCHARINFO *InfoBuffer, size_t InfoBufferSize, double ExRateX, double ExRateY, const TCHAR *String, size_t StringLength, int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;	// �f�t�H���g�t�H���g�n���h����g�p����������̂P�������̏���擾����
extern	int			GetDrawExtendFormatStringCharInfo(      DRAWCHARINFO *InfoBuffer, size_t InfoBufferSize, double ExRateX, double ExRateY, const TCHAR *FormatString, ... ) ;										// �f�t�H���g�t�H���g�n���h����g�p���������t��������̂P�������̏���擾����
extern	int			GetDrawStringKerningPairInfo(			const TCHAR *PairChar,                        int *KernAmount ) ;								// �f�t�H���g�t�H���g�n���h����g�p������̕����̃y�A�̃J�[�j���O����擾����( PairChar:�J�[�j���O���𒲂ׂ�y�A�ƂȂ�2�����̕�����( 2�����ȏ゠���Ă�擪��2���������g�p����܂� )  KernAmount:2�����ڂ̕������{�̈ʒu���炸�炷�h�b�g����������int�^�ϐ��̃A�h���X )
extern	int			GetDrawStringKerningPairInfoWithStrLen(	const TCHAR *PairChar, size_t PairCharLength, int *KernAmount ) ;								// �f�t�H���g�t�H���g�n���h����g�p������̕����̃y�A�̃J�[�j���O����擾����( PairChar:�J�[�j���O���𒲂ׂ�y�A�ƂȂ�2�����̕�����( 2�����ȏ゠���Ă�擪��2���������g�p����܂� )  KernAmount:2�����ڂ̕������{�̈ʒu���炸�炷�h�b�g����������int�^�ϐ��̃A�h���X )

extern	const TCHAR *GetFontNameToHandle(					int FontHandle ) ;																				// �t�H���g�n���h���̃t�H���g����擾����
extern	int			GetFontMaxCacheCharNumToHandle(			int FontHandle ) ;																				// �t�H���g�n���h���̃L���b�V���ł��镶���̐���擾����
extern	int			GetFontMaxWidthToHandle(                int FontHandle ) ;																				// �t�H���g�n���h���̕����̍ő啝��擾����
extern	int			GetFontAscentToHandle(                  int FontHandle ) ;																				// �t�H���g�n���h���̕`��ʒu����x�[�X���C���܂ł̍�����擾����
extern	int			GetFontSizeToHandle(                    int FontHandle ) ;																				// �t�H���g�n���h���̃T�C�Y��擾����
extern	int			GetFontEdgeSizeToHandle(                int FontHandle ) ;																				// �t�H���g�n���h���̉��T�C�Y��擾����
extern	int			GetFontSpaceToHandle(                   int FontHandle ) ;																				// �t�H���g�n���h���̎��Ԃ�擾����
extern	int			GetFontLineSpaceToHandle(               int FontHandle ) ;																				// �t�H���g�n���h���̍s�Ԃ�擾����
extern	int			GetFontCharInfo(                        int FontHandle, const TCHAR *Char,                    int *DrawX, int *DrawY, int *NextCharX, int *SizeX, int *SizeY ) ;	// �t�H���g�n���h���̎w��̕����̕`�����擾����
extern	int			GetFontCharInfoWithStrLen(              int FontHandle, const TCHAR *Char, size_t CharLength, int *DrawX, int *DrawY, int *NextCharX, int *SizeX, int *SizeY ) ;	// �t�H���g�n���h���̎w��̕����̕`�����擾����
extern	int			GetDrawStringWidthToHandle(             const TCHAR   *String, int StrLen,          int FontHandle, int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;						// �t�H���g�n���h����g�p����������̕`�敝��擾����
extern	int			GetDrawNStringWidthToHandle(            const TCHAR   *String, size_t StringLength, int FontHandle, int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;						// �t�H���g�n���h����g�p����������̕`�敝��擾����
extern	int			GetDrawFormatStringWidthToHandle(       int FontHandle, const TCHAR *FormatString, ... ) ;																// �t�H���g�n���h����g�p���������t��������̕`�敝��擾����
extern	int			GetDrawExtendStringWidthToHandle(       double ExRateX, const TCHAR *String, int StrLen,          int FontHandle, int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;			// �t�H���g�n���h����g�p����������̕`�敝��擾����
extern	int			GetDrawExtendNStringWidthToHandle(      double ExRateX, const TCHAR *String, size_t StringLength, int FontHandle, int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;			// �t�H���g�n���h����g�p����������̕`�敝��擾����
extern	int			GetDrawExtendFormatStringWidthToHandle( double ExRateX, int FontHandle, const TCHAR *FormatString, ... ) ;												// �t�H���g�n���h����g�p���������t��������̕`�敝��擾����
extern	int			GetDrawStringSizeToHandle(              int *SizeX, int *SizeY, int *LineCount, const TCHAR   *String, int StrLen,          int FontHandle, int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;											// �t�H���g�n���h����g�p����������̕`�敝�E�����E�s����擾����
extern	int			GetDrawNStringSizeToHandle(             int *SizeX, int *SizeY, int *LineCount, const TCHAR   *String, size_t StringLength, int FontHandle, int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;											// �t�H���g�n���h����g�p����������̕`�敝�E�����E�s����擾����
extern	int			GetDrawFormatStringSizeToHandle(        int *SizeX, int *SizeY, int *LineCount, int FontHandle, const TCHAR *FormatString, ... ) ;																					// �t�H���g�n���h����g�p���������t��������̕`�敝�E�����E�s����擾����
extern	int			GetDrawExtendStringSizeToHandle(        int *SizeX, int *SizeY, int *LineCount, double ExRateX, double ExRateY, const TCHAR *String, int StrLen,          int FontHandle, int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;				// �t�H���g�n���h����g�p����������̕`�敝�E�����E�s����擾����
extern	int			GetDrawExtendNStringSizeToHandle(       int *SizeX, int *SizeY, int *LineCount, double ExRateX, double ExRateY, const TCHAR *String, size_t StringLength, int FontHandle, int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;				// �t�H���g�n���h����g�p����������̕`�敝�E�����E�s����擾����
extern	int			GetDrawExtendFormatStringSizeToHandle(  int *SizeX, int *SizeY, int *LineCount, double ExRateX, double ExRateY, int FontHandle, const TCHAR *FormatString, ... ) ;													// �t�H���g�n���h����g�p���������t��������̕`�敝�E�����E�s����擾����
extern	int			GetDrawStringCharInfoToHandle(              DRAWCHARINFO *InfoBuffer, size_t InfoBufferSize, const TCHAR *String, int StrLen,          int FontHandle, int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;									// �t�H���g�n���h����g�p����������̂P�������̏���擾����
extern	int			GetDrawNStringCharInfoToHandle(             DRAWCHARINFO *InfoBuffer, size_t InfoBufferSize, const TCHAR *String, size_t StringLength, int FontHandle, int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;									// �t�H���g�n���h����g�p����������̂P�������̏���擾����
extern	int			GetDrawFormatStringCharInfoToHandle(        DRAWCHARINFO *InfoBuffer, size_t InfoBufferSize, int FontHandle, const TCHAR *FormatString, ... ) ;																		// �t�H���g�n���h����g�p���������t��������̂P�������̏���擾����
extern	int			GetDrawExtendStringCharInfoToHandle(        DRAWCHARINFO *InfoBuffer, size_t InfoBufferSize, double ExRateX, double ExRateY, const TCHAR *String, int StrLen,          int FontHandle, int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;	// �t�H���g�n���h����g�p����������̂P�������̏���擾����
extern	int			GetDrawExtendNStringCharInfoToHandle(       DRAWCHARINFO *InfoBuffer, size_t InfoBufferSize, double ExRateX, double ExRateY, const TCHAR *String, size_t StringLength, int FontHandle, int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;	// �t�H���g�n���h����g�p����������̂P�������̏���擾����
extern	int			GetDrawExtendFormatStringCharInfoToHandle(  DRAWCHARINFO *InfoBuffer, size_t InfoBufferSize, double ExRateX, double ExRateY, int FontHandle, const TCHAR *FormatString, ... ) ;										// �t�H���g�n���h����g�p���������t��������̂P�������̏���擾����
extern	int			GetDrawStringKerningPairInfoToHandle(	        const TCHAR *PairChar,                        int *KernAmount, int FontHandle ) ;		// �t�H���g�n���h����g�p������̕����̃y�A�̃J�[�j���O����擾����( PairChar:�J�[�j���O���𒲂ׂ�y�A�ƂȂ�2�����̕�����( 2�����ȏ゠���Ă�擪��2���������g�p����܂� )  KernAmount:2�����ڂ̕������{�̈ʒu���炸�炷�h�b�g����������int�^�ϐ��̃A�h���X )
extern	int			GetDrawStringKerningPairInfoToHandleWithStrLen(	const TCHAR *PairChar, size_t PairCharLength, int *KernAmount, int FontHandle ) ;		// �t�H���g�n���h����g�p������̕����̃y�A�̃J�[�j���O����擾����( PairChar:�J�[�j���O���𒲂ׂ�y�A�ƂȂ�2�����̕�����( 2�����ȏ゠���Ă�擪��2���������g�p����܂� )  KernAmount:2�����ڂ̕������{�̈ʒu���炸�炷�h�b�g����������int�^�ϐ��̃A�h���X )
extern	int			GetFontStateToHandle(                   TCHAR   *FontName, int *Size, int *Thick, int FontHandle, int *FontType DEFAULTPARAM( = NULL ) , int *CharSet DEFAULTPARAM( = NULL ) , int *EdgeSize DEFAULTPARAM( = NULL ) , int *Italic DEFAULTPARAM( = NULL ) ) ;						// �t�H���g�n���h���̏���擾����
extern	int			CheckFontCacheToTextureFlag(            int FontHandle ) ;																				// �t�H���g�n���h�����e�N�X�`���L���b�V����g�p���Ă��邩�ǂ�����擾����
extern	int			CheckFontChacheToTextureFlag(           int FontHandle ) ;																				// CheckFontCacheToTextureFlag �̌뎚��
extern	int			CheckFontHandleValid(                   int FontHandle ) ;																				// �t�H���g�n���h�����L�����ǂ�����擾����
extern	int			ClearFontCacheToHandle(					int FontHandle ) ;																				// �t�H���g�n���h���̃L���b�V���������������

extern	int			SetFontCacheToTextureFlag(              int Flag ) ;																					// �t�H���g�̃L���b�V���Ƀe�N�X�`����g�p���邩�ǂ�����ݒ肷��( TRUE:�e�N�X�`����g�p����( �f�t�H���g )  FALSE:�e�N�X�`���͎g�p���Ȃ� )
extern	int			GetFontCacheToTextureFlag(              void ) ;																						// �t�H���g�̃L���b�V���Ƀe�N�X�`����g�p���邩�ǂ�����ݒ肷��
extern	int			SetFontChacheToTextureFlag(             int Flag ) ;																					// SetFontCacheToTextureFlag �̌뎚��
extern	int			GetFontChacheToTextureFlag(             void ) ;																						// GetFontCacheToTextureFlag �̌뎚��
extern	int			SetFontCacheTextureColorBitDepth(		int ColorBitDepth ) ;																			// �t�H���g�̃L���b�V���Ƃ��Ďg�p����e�N�X�`���̃J���[�r�b�g�[�x��ݒ肷��( 16 ���� 32 �̂ݎw��\  �f�t�H���g�� 32 )
extern	int			GetFontCacheTextureColorBitDepth(		void ) ;																						// �t�H���g�̃L���b�V���Ƃ��Ďg�p����e�N�X�`���̃J���[�r�b�g�[�x��擾����
extern	int			SetFontCacheCharNum(                    int CharNum ) ;																					// �t�H���g�L���b�V���ŃL���b�V���ł��镶������ݒ肷��
extern	int			GetFontCacheCharNum(                    void ) ;																						// �t�H���g�L���b�V���ŃL���b�V���ł��镶������擾����( �߂�l  0:�f�t�H���g  1�ȏ�:�w�蕶���� )
extern	int			SetFontCacheUsePremulAlphaFlag(         int Flag ) ;																					// �t�H���g�L���b�V���Ƃ��ĕۑ�����摜�̌`�����Z�ς݃��`�����l���t���摜�ɂ��邩�ǂ�����ݒ肷��( TRUE:��Z�ς݃���g�p����  FLASE:��Z�ς݃���g�p���Ȃ�( �f�t�H���g ) )
extern	int			GetFontCacheUsePremulAlphaFlag(         void ) ;																						// �t�H���g�L���b�V���Ƃ��ĕۑ�����摜�̌`�����Z�ς݃��`�����l���t���摜�ɂ��邩�ǂ�����擾����
extern	int			SetFontUseAdjustSizeFlag(               int Flag ) ;																					// �t�H���g�̃T�C�Y��␳���鏈����s�����ǂ�����ݒ肷��( Flag  TRUE:�s��( �f�t�H���g )  FALSE:�s��Ȃ� )
extern	int			GetFontUseAdjustSizeFlag(               void ) ;																						// �t�H���g�̃T�C�Y��␳���鏈����s�����ǂ�����擾����
extern	int			SetFontOnlyDrawType(					int OnlyType ) ;																				// �t�H���g�̕`��ŉ��̂݁A���͖{�̂̂ݕ`���s�����ǂ�����ݒ肷��( OnlyType  0:�ʏ�`�� 1:�{�̂̂ݕ`�� 2:���̂ݕ`�� )
extern	int			GetFontOnlyDrawType(					void ) ;																						// �t�H���g�̕`��ŉ��̂݁A���͖{�̂̂ݕ`���s�����ǂ�����擾����( �߂�l  0:�ʏ�`�� 1:�{�̂̂ݕ`�� 2:���̂ݕ`�� )
extern	int			SetFontIgnoreLFFlag(					int Flag ) ;																					// DrawString �Ȃǂ� \n �𖳎����邩�ǂ�����ݒ肷��( TRUE : ��������    FALSE : �������Ȃ�( �f�t�H���g ) )
extern	int			GetFontIgnoreLFFlag(					void ) ;																						// DrawString �Ȃǂ� \n �𖳎����邩�ǂ�����擾����( TRUE : ��������    FALSE : �������Ȃ�( �f�t�H���g ) )


// FontCacheStringDraw �̑���� DrawString ��g���Ă�������
extern	int			FontCacheStringDrawToHandle(            int x, int y, const TCHAR *StrData,                       unsigned int Color, unsigned int EdgeColor, BASEIMAGE *DestImage, const RECT *ClipRect /* NULL �� */ , int FontHandle, int VerticalFlag DEFAULTPARAM( = FALSE ) , SIZE *DrawSizeP DEFAULTPARAM( = NULL ) ) ;
extern	int			FontCacheStringDrawToHandleWithStrLen(  int x, int y, const TCHAR *StrData, size_t StrDataLength, unsigned int Color, unsigned int EdgeColor, BASEIMAGE *DestImage, const RECT *ClipRect /* NULL �� */ , int FontHandle, int VerticalFlag DEFAULTPARAM( = FALSE ) , SIZE *DrawSizeP DEFAULTPARAM( = NULL ) ) ;
extern	int			FontBaseImageBlt(                       int x, int y, const TCHAR *StrData,                       BASEIMAGE *DestImage, BASEIMAGE *DestEdgeImage,                 int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;	// ��{�C���[�W�ɕ������`�悷��( �f�t�H���g�t�H���g�n���h����g�p���� )
extern	int			FontBaseImageBltWithStrLen(             int x, int y, const TCHAR *StrData, size_t StrDataLength, BASEIMAGE *DestImage, BASEIMAGE *DestEdgeImage,                 int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;	// ��{�C���[�W�ɕ������`�悷��( �f�t�H���g�t�H���g�n���h����g�p���� )
extern	int			FontBaseImageBltToHandle(               int x, int y, const TCHAR *StrData,                       BASEIMAGE *DestImage, BASEIMAGE *DestEdgeImage, int FontHandle, int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;	// ��{�C���[�W�ɕ������`�悷��
extern	int			FontBaseImageBltToHandleWithStrLen(     int x, int y, const TCHAR *StrData, size_t StrDataLength, BASEIMAGE *DestImage, BASEIMAGE *DestEdgeImage, int FontHandle, int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;	// ��{�C���[�W�ɕ������`�悷��

extern	int			MultiByteCharCheck(                     const char *Buf, int CharSet /* DX_CHARSET_SHFTJIS */ ) ;										// �Q�o�C�g���������ׂ�( TRUE:�Q�o�C�g����  FALSE:�P�o�C�g���� )

// ������`��֐�
extern	int			DrawString(                             int x, int y,                                              const TCHAR *String,                      unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;							// �f�t�H���g�t�H���g�n���h����g�p���ĕ������`�悷��
extern	int			DrawNString(                            int x, int y,                                              const TCHAR *String, size_t StringLength, unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;							// �f�t�H���g�t�H���g�n���h����g�p���ĕ������`�悷��
extern	int			DrawVString(                            int x, int y,                                              const TCHAR *String,                      unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;							// �f�t�H���g�t�H���g�n���h����g�p���ĕ������`�悷��( �c���� )
extern	int			DrawNVString(                           int x, int y,                                              const TCHAR *String, size_t StringLength, unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;							// �f�t�H���g�t�H���g�n���h����g�p���ĕ������`�悷��( �c���� )
extern	int			DrawFormatString(                       int x, int y,                                 unsigned int Color,                         const TCHAR *FormatString, ... ) ;																	// �f�t�H���g�t�H���g�n���h����g�p���ď����w�蕶�����`�悷��
extern	int			DrawFormatVString(                      int x, int y,                                 unsigned int Color,                         const TCHAR *FormatString, ... ) ;																	// �f�t�H���g�t�H���g�n���h����g�p���ď����w�蕶�����`�悷��( �c���� )
extern	int			DrawFormatString2(                      int x, int y,                                 unsigned int Color, unsigned int EdgeColor, const TCHAR *FormatString, ... ) ;																	// �f�t�H���g�t�H���g�n���h����g�p���ď����w�蕶�����`�悷��( ���̐F�����t�� )
extern	int			DrawFormatVString2(                     int x, int y,                                 unsigned int Color, unsigned int EdgeColor, const TCHAR *FormatString, ... ) ;																	// �f�t�H���g�t�H���g�n���h����g�p���ď����w�蕶�����`�悷��( ���̐F�����t�� )( �c���� )
extern	int			DrawExtendString(                       int x, int y, double ExRateX, double ExRateY,              const TCHAR *String,                      unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;							// �f�t�H���g�t�H���g�n���h����g�p���ĕ�����̊g��`��
extern	int			DrawExtendNString(                      int x, int y, double ExRateX, double ExRateY,              const TCHAR *String, size_t StringLength, unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;							// �f�t�H���g�t�H���g�n���h����g�p���ĕ�����̊g��`��
extern	int			DrawExtendVString(                      int x, int y, double ExRateX, double ExRateY,              const TCHAR *String,                      unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;							// �f�t�H���g�t�H���g�n���h����g�p���ĕ�����̊g��`��( �c���� )
extern	int			DrawExtendNVString(                     int x, int y, double ExRateX, double ExRateY,              const TCHAR *String, size_t StringLength, unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;							// �f�t�H���g�t�H���g�n���h����g�p���ĕ�����̊g��`��( �c���� )
extern	int			DrawExtendFormatString(                 int x, int y, double ExRateX, double ExRateY, unsigned int Color,                         const TCHAR *FormatString, ... ) ;																	// �f�t�H���g�t�H���g�n���h����g�p���ď����w�蕶�����g��`�悷��
extern	int			DrawExtendFormatVString(                int x, int y, double ExRateX, double ExRateY, unsigned int Color,                         const TCHAR *FormatString, ... ) ;																	// �f�t�H���g�t�H���g�n���h����g�p���ď����w�蕶�����g��`�悷��( �c���� )
extern	int			DrawExtendFormatString2(                int x, int y, double ExRateX, double ExRateY, unsigned int Color, unsigned int EdgeColor, const TCHAR *FormatString, ... ) ;																	// �f�t�H���g�t�H���g�n���h����g�p���ď����w�蕶�����g��`�悷��( ���̐F�����t�� )
extern	int			DrawExtendFormatVString2(               int x, int y, double ExRateX, double ExRateY, unsigned int Color, unsigned int EdgeColor, const TCHAR *FormatString, ... ) ;																	// �f�t�H���g�t�H���g�n���h����g�p���ď����w�蕶�����g��`�悷��( ���̐F�����t�� )( �c���� )
extern	int			DrawRotaString(							int x, int y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) , int VerticalFlag DEFAULTPARAM( = FALSE ) , const TCHAR *String       DEFAULTPARAM( = NULL )                           ) ;		// �f�t�H���g�t�H���g�n���h����g�p���ĕ�������]�`�悷��
extern	int			DrawRotaNString(						int x, int y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) , int VerticalFlag DEFAULTPARAM( = FALSE ) , const TCHAR *String       DEFAULTPARAM( = NULL ) , size_t StringLength DEFAULTPARAM( = 0 ) ) ;		// �f�t�H���g�t�H���g�n���h����g�p���ĕ�������]�`�悷��
extern	int			DrawRotaFormatString(					int x, int y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) , int VerticalFlag DEFAULTPARAM( = FALSE ) , const TCHAR *FormatString DEFAULTPARAM( = NULL ) , ...                     ) ;		// �f�t�H���g�t�H���g�n���h����g�p���ď����w�蕶������]�`�悷��
extern	int			DrawModiString(							int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) , int VerticalFlag DEFAULTPARAM( = FALSE ) , const TCHAR *String       DEFAULTPARAM( = NULL )                           ) ;		// �f�t�H���g�t�H���g�n���h����g�p���ĕ������ό`�`�悷��
extern	int			DrawModiNString(						int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) , int VerticalFlag DEFAULTPARAM( = FALSE ) , const TCHAR *String       DEFAULTPARAM( = NULL ) , size_t StringLength DEFAULTPARAM( = 0 ) ) ;		// �f�t�H���g�t�H���g�n���h����g�p���ĕ������ό`�`�悷��
extern	int			DrawModiFormatString(					int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) , int VerticalFlag DEFAULTPARAM( = FALSE ) , const TCHAR *FormatString DEFAULTPARAM( = NULL ) , ...                     ) ;		// �f�t�H���g�t�H���g�n���h����g�p���ď����w�蕶�����ό`�`�悷��

extern	int			DrawStringF(                            float x, float y,                                              const TCHAR *String,                      unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;						// �f�t�H���g�t�H���g�n���h����g�p���ĕ������`�悷��( ���W�w�肪 float �� )
extern	int			DrawNStringF(                           float x, float y,                                              const TCHAR *String, size_t StringLength, unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;						// �f�t�H���g�t�H���g�n���h����g�p���ĕ������`�悷��( ���W�w�肪 float �� )
extern	int			DrawVStringF(                           float x, float y,                                              const TCHAR *String,                      unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;						// �f�t�H���g�t�H���g�n���h����g�p���ĕ������`�悷��( �c���� )( ���W�w�肪 float �� )
extern	int			DrawNVStringF(                          float x, float y,                                              const TCHAR *String, size_t StringLength, unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;						// �f�t�H���g�t�H���g�n���h����g�p���ĕ������`�悷��( �c���� )( ���W�w�肪 float �� )
extern	int			DrawFormatStringF(                      float x, float y,                                 unsigned int Color,                         const TCHAR *FormatString, ... ) ;																// �f�t�H���g�t�H���g�n���h����g�p���ď����w�蕶�����`�悷��( ���W�w�肪 float �� )
extern	int			DrawFormatVStringF(                     float x, float y,                                 unsigned int Color,                         const TCHAR *FormatString, ... ) ;																// �f�t�H���g�t�H���g�n���h����g�p���ď����w�蕶�����`�悷��( �c���� )( ���W�w�肪 float �� )
extern	int			DrawFormatString2F(                     float x, float y,                                 unsigned int Color, unsigned int EdgeColor, const TCHAR *FormatString, ... ) ;																// �f�t�H���g�t�H���g�n���h����g�p���ď����w�蕶�����`�悷��( ���̐F�����t�� )( ���W�w�肪 float �� )
extern	int			DrawFormatVString2F(                    float x, float y,                                 unsigned int Color, unsigned int EdgeColor, const TCHAR *FormatString, ... ) ;																// �f�t�H���g�t�H���g�n���h����g�p���ď����w�蕶�����`�悷��( ���̐F�����t�� )( �c���� )( ���W�w�肪 float �� )
extern	int			DrawExtendStringF(                      float x, float y, double ExRateX, double ExRateY,              const TCHAR *String,                      unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;						// �f�t�H���g�t�H���g�n���h����g�p���ĕ�����̊g��`��( ���W�w�肪 float �� )
extern	int			DrawExtendNStringF(                     float x, float y, double ExRateX, double ExRateY,              const TCHAR *String, size_t StringLength, unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;						// �f�t�H���g�t�H���g�n���h����g�p���ĕ�����̊g��`��( ���W�w�肪 float �� )
extern	int			DrawExtendVStringF(                     float x, float y, double ExRateX, double ExRateY,              const TCHAR *String,                      unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;						// �f�t�H���g�t�H���g�n���h����g�p���ĕ�����̊g��`��( �c���� )( ���W�w�肪 float �� )
extern	int			DrawExtendNVStringF(                    float x, float y, double ExRateX, double ExRateY,              const TCHAR *String, size_t StringLength, unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;						// �f�t�H���g�t�H���g�n���h����g�p���ĕ�����̊g��`��( �c���� )( ���W�w�肪 float �� )
extern	int			DrawExtendFormatStringF(                float x, float y, double ExRateX, double ExRateY, unsigned int Color,                         const TCHAR *FormatString, ... ) ;																// �f�t�H���g�t�H���g�n���h����g�p���ď����w�蕶�����g��`�悷��( ���W�w�肪 float �� )
extern	int			DrawExtendFormatVStringF(               float x, float y, double ExRateX, double ExRateY, unsigned int Color,                         const TCHAR *FormatString, ... ) ;																// �f�t�H���g�t�H���g�n���h����g�p���ď����w�蕶�����g��`�悷��( �c���� )( ���W�w�肪 float �� )
extern	int			DrawExtendFormatString2F(               float x, float y, double ExRateX, double ExRateY, unsigned int Color, unsigned int EdgeColor, const TCHAR *FormatString, ... ) ;																// �f�t�H���g�t�H���g�n���h����g�p���ď����w�蕶�����g��`�悷��( ���̐F�����t�� )( ���W�w�肪 float �� )
extern	int			DrawExtendFormatVString2F(              float x, float y, double ExRateX, double ExRateY, unsigned int Color, unsigned int EdgeColor, const TCHAR *FormatString, ... ) ;																// �f�t�H���g�t�H���g�n���h����g�p���ď����w�蕶�����g��`�悷��( ���̐F�����t�� )( �c���� )( ���W�w�肪 float �� )
extern	int			DrawRotaStringF(						float x, float y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) , int VerticalFlag DEFAULTPARAM( = FALSE ) , const TCHAR *String       DEFAULTPARAM( = NULL )                           ) ;		// �f�t�H���g�t�H���g�n���h����g�p���ĕ�������]�`�悷��( ���W�w�肪 float �� )
extern	int			DrawRotaNStringF(						float x, float y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) , int VerticalFlag DEFAULTPARAM( = FALSE ) , const TCHAR *String       DEFAULTPARAM( = NULL ) , size_t StringLength DEFAULTPARAM( = 0 ) ) ;		// �f�t�H���g�t�H���g�n���h����g�p���ĕ�������]�`�悷��( ���W�w�肪 float �� )
extern	int			DrawRotaFormatStringF(					float x, float y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) , int VerticalFlag DEFAULTPARAM( = FALSE ) , const TCHAR *FormatString DEFAULTPARAM( = NULL ) , ...                     ) ;		// �f�t�H���g�t�H���g�n���h����g�p���ď����w�蕶������]�`�悷��( ���W�w�肪 float �� )
extern	int			DrawModiStringF(						float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) , int VerticalFlag DEFAULTPARAM( = FALSE ) , const TCHAR *String       DEFAULTPARAM( = NULL )                           ) ;		// �f�t�H���g�t�H���g�n���h����g�p���ĕ������ό`�`�悷��( ���W�w�肪 float �� )
extern	int			DrawModiNStringF(						float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) , int VerticalFlag DEFAULTPARAM( = FALSE ) , const TCHAR *String       DEFAULTPARAM( = NULL ) , size_t StringLength DEFAULTPARAM( = 0 ) ) ;		// �f�t�H���g�t�H���g�n���h����g�p���ĕ������ό`�`�悷��( ���W�w�肪 float �� )
extern	int			DrawModiFormatStringF(					float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) , int VerticalFlag DEFAULTPARAM( = FALSE ) , const TCHAR *FormatString DEFAULTPARAM( = NULL ) , ...                     ) ;		// �f�t�H���g�t�H���g�n���h����g�p���ď����w�蕶�����ό`�`�悷��( ���W�w�肪 float �� )

extern	int			DrawNumberToI(                          int x, int y,                          int    Num, int RisesNum, unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;											// �f�t�H���g�t�H���g�n���h����g�p���Đ����^�̐��l��`�悷��
extern	int			DrawNumberToF(                          int x, int y,                          double Num, int Length,   unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;											// �f�t�H���g�t�H���g�n���h����g�p���ĕ��������_�^�̐��l��`�悷��
extern	int			DrawNumberPlusToI(                      int x, int y, const TCHAR *NoteString, int    Num, int RisesNum, unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;											// �f�t�H���g�t�H���g�n���h����g�p���Đ����^�̐��l�Ƃ��̐���̕�������x�ɕ`�悷��
extern 	int			DrawNumberPlusToF(                      int x, int y, const TCHAR *NoteString, double Num, int Length,   unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;											// �f�t�H���g�t�H���g�n���h����g�p���ĕ��������_�^�̐��l�Ƃ��̐���̕�������x�ɕ`�悷��

extern	int			DrawStringToZBuffer(                    int x, int y, const TCHAR *String,                                                                                        int WriteZMode /* DX_ZWRITE_MASK �� */ ) ;												// �f�t�H���g�t�H���g�n���h����g�p���Ăy�o�b�t�@�ɑ΂��ĕ������`�悷��
extern	int			DrawNStringToZBuffer(                   int x, int y, const TCHAR *String, size_t StringLength,                                                                   int WriteZMode /* DX_ZWRITE_MASK �� */ ) ;												// �f�t�H���g�t�H���g�n���h����g�p���Ăy�o�b�t�@�ɑ΂��ĕ������`�悷��
extern	int			DrawVStringToZBuffer(                   int x, int y, const TCHAR *String,                                                                                        int WriteZMode /* DX_ZWRITE_MASK �� */ ) ;												// �f�t�H���g�t�H���g�n���h����g�p���Ăy�o�b�t�@�ɑ΂��ĕ������`�悷��( �c���� )
extern	int			DrawNVStringToZBuffer(                  int x, int y, const TCHAR *String, size_t StringLength,                                                                   int WriteZMode /* DX_ZWRITE_MASK �� */ ) ;												// �f�t�H���g�t�H���g�n���h����g�p���Ăy�o�b�t�@�ɑ΂��ĕ������`�悷��( �c���� )
extern	int			DrawFormatStringToZBuffer(              int x, int y,                                                                                        int WriteZMode /* DX_ZWRITE_MASK �� */ , const TCHAR *FormatString, ... ) ;									// �f�t�H���g�t�H���g�n���h����g�p���Ăy�o�b�t�@�ɑ΂��ď����w�蕶�����`�悷��
extern	int			DrawFormatVStringToZBuffer(             int x, int y,                                                                                        int WriteZMode /* DX_ZWRITE_MASK �� */ , const TCHAR *FormatString, ... ) ;									// �f�t�H���g�t�H���g�n���h����g�p���Ăy�o�b�t�@�ɑ΂��ď����w�蕶�����`�悷��( �c���� )
extern	int			DrawExtendStringToZBuffer(              int x, int y, double ExRateX, double ExRateY, const TCHAR *String,                                                        int WriteZMode /* DX_ZWRITE_MASK �� */ ) ;												// �f�t�H���g�t�H���g�n���h����g�p���Ăy�o�b�t�@�ɑ΂��ĕ������g��`�悷��
extern	int			DrawExtendNStringToZBuffer(             int x, int y, double ExRateX, double ExRateY, const TCHAR *String, size_t StringLength,                                   int WriteZMode /* DX_ZWRITE_MASK �� */ ) ;												// �f�t�H���g�t�H���g�n���h����g�p���Ăy�o�b�t�@�ɑ΂��ĕ������g��`�悷��
extern	int			DrawExtendVStringToZBuffer(             int x, int y, double ExRateX, double ExRateY, const TCHAR *String,                                                        int WriteZMode /* DX_ZWRITE_MASK �� */ ) ;												// �f�t�H���g�t�H���g�n���h����g�p���Ăy�o�b�t�@�ɑ΂��ĕ������g��`�悷��( �c���� )
extern	int			DrawExtendNVStringToZBuffer(            int x, int y, double ExRateX, double ExRateY, const TCHAR *String, size_t StringLength,                                   int WriteZMode /* DX_ZWRITE_MASK �� */ ) ;												// �f�t�H���g�t�H���g�n���h����g�p���Ăy�o�b�t�@�ɑ΂��ĕ������g��`�悷��( �c���� )
extern	int			DrawExtendFormatStringToZBuffer(        int x, int y, double ExRateX, double ExRateY,                                                        int WriteZMode /* DX_ZWRITE_MASK �� */ , const TCHAR *FormatString, ... ) ;									// �f�t�H���g�t�H���g�n���h����g�p���Ăy�o�b�t�@�ɑ΂��ď����w�蕶�����g��`�悷��
extern	int			DrawExtendFormatVStringToZBuffer(       int x, int y, double ExRateX, double ExRateY,                                                        int WriteZMode /* DX_ZWRITE_MASK �� */ , const TCHAR *FormatString, ... ) ;									// �f�t�H���g�t�H���g�n���h����g�p���Ăy�o�b�t�@�ɑ΂��ď����w�蕶�����g��`�悷��( �c���� )
extern	int			DrawRotaStringToZBuffer(				int x, int y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, int WriteZMode /* DX_ZWRITE_MASK �� */ , int VerticalFlag , const TCHAR *String                            ) ;	// �f�t�H���g�t�H���g�n���h����g�p���Ăy�o�b�t�@�ɑ΂��ĕ�������]�`�悷��
extern	int			DrawRotaNStringToZBuffer(				int x, int y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, int WriteZMode /* DX_ZWRITE_MASK �� */ , int VerticalFlag , const TCHAR *String,       size_t StringLength ) ;	// �f�t�H���g�t�H���g�n���h����g�p���Ăy�o�b�t�@�ɑ΂��ĕ�������]�`�悷��
extern	int			DrawRotaFormatStringToZBuffer(			int x, int y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, int WriteZMode /* DX_ZWRITE_MASK �� */ , int VerticalFlag , const TCHAR *FormatString , ...                ) ;	// �f�t�H���g�t�H���g�n���h����g�p���Ăy�o�b�t�@�ɑ΂��ď����w�蕶������]�`�悷��
extern	int			DrawModiStringToZBuffer(				int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4,                                      int WriteZMode /* DX_ZWRITE_MASK �� */ , int VerticalFlag , const TCHAR *String                            ) ;	// �f�t�H���g�t�H���g�n���h����g�p���Ăy�o�b�t�@�ɑ΂��ĕ������ό`�`�悷��
extern	int			DrawModiNStringToZBuffer(				int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4,                                      int WriteZMode /* DX_ZWRITE_MASK �� */ , int VerticalFlag , const TCHAR *String,       size_t StringLength ) ;	// �f�t�H���g�t�H���g�n���h����g�p���Ăy�o�b�t�@�ɑ΂��ĕ������ό`�`�悷��
extern	int			DrawModiFormatStringToZBuffer(			int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4,                                      int WriteZMode /* DX_ZWRITE_MASK �� */ , int VerticalFlag , const TCHAR *FormatString , ...                ) ;	// �f�t�H���g�t�H���g�n���h����g�p���Ăy�o�b�t�@�ɑ΂��ď����w�蕶�����ό`�`�悷��


extern	int			DrawStringToHandle(                     int x, int y, const TCHAR *String,                      unsigned int Color, int FontHandle, unsigned int EdgeColor DEFAULTPARAM( = 0 ) , int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;									// �t�H���g�n���h����g�p���ĕ������`�悷��
extern	int			DrawNStringToHandle(                    int x, int y, const TCHAR *String, size_t StringLength, unsigned int Color, int FontHandle, unsigned int EdgeColor DEFAULTPARAM( = 0 ) , int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;									// �t�H���g�n���h����g�p���ĕ������`�悷��
extern	int			DrawVStringToHandle(                    int x, int y, const TCHAR *String,                      unsigned int Color, int FontHandle, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;																				// �t�H���g�n���h����g�p���ĕ������`�悷��( �c���� )
extern	int			DrawNVStringToHandle(                   int x, int y, const TCHAR *String, size_t StringLength, unsigned int Color, int FontHandle, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;																				// �t�H���g�n���h����g�p���ĕ������`�悷��( �c���� )
extern	int			DrawFormatStringToHandle(               int x, int y, unsigned int Color,                         int FontHandle, const TCHAR *FormatString, ... ) ;																											// �t�H���g�n���h����g�p���ď����w�蕶�����`�悷��
extern	int			DrawFormatVStringToHandle(              int x, int y, unsigned int Color,                         int FontHandle, const TCHAR *FormatString, ... ) ;																											// �t�H���g�n���h����g�p���ď����w�蕶�����`�悷��( �c���� )
extern	int			DrawFormatString2ToHandle(              int x, int y, unsigned int Color, unsigned int EdgeColor, int FontHandle, const TCHAR *FormatString, ... ) ;																											// �t�H���g�n���h����g�p���ď����w�蕶�����`�悷��( ���̐F�����t�� )
extern	int			DrawFormatVString2ToHandle(             int x, int y, unsigned int Color, unsigned int EdgeColor, int FontHandle, const TCHAR *FormatString, ... ) ;																											// �t�H���g�n���h����g�p���ď����w�蕶�����`�悷��( ���̐F�����t�� )( �c���� )
extern	int			DrawExtendStringToHandle(               int x, int y, double ExRateX, double ExRateY, const TCHAR *String,                      unsigned int Color, int FontHandle, unsigned int EdgeColor DEFAULTPARAM( = 0 ) , int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;	// �t�H���g�n���h����g�p���ĕ������g��`�悷��
extern	int			DrawExtendNStringToHandle(              int x, int y, double ExRateX, double ExRateY, const TCHAR *String, size_t StringLength, unsigned int Color, int FontHandle, unsigned int EdgeColor DEFAULTPARAM( = 0 ) , int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;	// �t�H���g�n���h����g�p���ĕ������g��`�悷��
extern	int			DrawExtendVStringToHandle(              int x, int y, double ExRateX, double ExRateY, const TCHAR *String,                      unsigned int Color, int FontHandle, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;												// �t�H���g�n���h����g�p���ĕ������g��`�悷��( �c���� )
extern	int			DrawExtendNVStringToHandle(             int x, int y, double ExRateX, double ExRateY, const TCHAR *String, size_t StringLength, unsigned int Color, int FontHandle, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;												// �t�H���g�n���h����g�p���ĕ������g��`�悷��( �c���� )
extern	int			DrawExtendFormatStringToHandle(         int x, int y, double ExRateX, double ExRateY, unsigned int Color,                         int FontHandle, const TCHAR *FormatString, ... ) ;																			// �t�H���g�n���h����g�p���ď����w�蕶�����g��`�悷��
extern	int			DrawExtendFormatVStringToHandle(        int x, int y, double ExRateX, double ExRateY, unsigned int Color,                         int FontHandle, const TCHAR *FormatString, ... ) ;																			// �t�H���g�n���h����g�p���ď����w�蕶�����g��`�悷��( �c���� )
extern	int			DrawExtendFormatString2ToHandle(        int x, int y, double ExRateX, double ExRateY, unsigned int Color, unsigned int EdgeColor, int FontHandle, const TCHAR *FormatString, ... ) ;																			// �t�H���g�n���h����g�p���ď����w�蕶�����g��`�悷��( ���̐F�����t�� )
extern	int			DrawExtendFormatVString2ToHandle(       int x, int y, double ExRateX, double ExRateY, unsigned int Color, unsigned int EdgeColor, int FontHandle, const TCHAR *FormatString, ... ) ;																			// �t�H���g�n���h����g�p���ď����w�蕶�����g��`�悷��( ���̐F�����t�� )( �c���� )
extern	int			DrawRotaStringToHandle(					int x, int y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, unsigned int Color, int FontHandle, unsigned int EdgeColor, int VerticalFlag, const TCHAR *String                            ) ;		// �t�H���g�n���h����g�p���ĕ�������]�`�悷��
extern	int			DrawRotaNStringToHandle(				int x, int y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, unsigned int Color, int FontHandle, unsigned int EdgeColor, int VerticalFlag, const TCHAR *String,       size_t StringLength ) ;		// �t�H���g�n���h����g�p���ĕ�������]�`�悷��
extern	int			DrawRotaFormatStringToHandle(			int x, int y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, unsigned int Color, int FontHandle, unsigned int EdgeColor, int VerticalFlag, const TCHAR *FormatString, ...                 ) ;		// �t�H���g�n���h����g�p���ď����w�蕶������]�`�悷��
extern	int			DrawModiStringToHandle(					int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, unsigned int Color, int FontHandle, unsigned int EdgeColor, int VerticalFlag, const TCHAR *String                            ) ;	// �t�H���g�n���h����g�p���ĕ������ό`�`�悷��
extern	int			DrawModiNStringToHandle(				int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, unsigned int Color, int FontHandle, unsigned int EdgeColor, int VerticalFlag, const TCHAR *String,       size_t StringLength ) ;	// �t�H���g�n���h����g�p���ĕ������ό`�`�悷��
extern	int			DrawModiFormatStringToHandle(			int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, unsigned int Color, int FontHandle, unsigned int EdgeColor, int VerticalFlag, const TCHAR *FormatString, ...                 ) ;	// �t�H���g�n���h����g�p���ď����w�蕶�����ό`�`�悷��

extern	int			DrawStringFToHandle(                    float x, float y, const TCHAR *String,                      unsigned int Color, int FontHandle, unsigned int EdgeColor DEFAULTPARAM( = 0 ) , int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;									// �t�H���g�n���h����g�p���ĕ������`�悷��( ���W�w�肪 float �� )
extern	int			DrawNStringFToHandle(                   float x, float y, const TCHAR *String, size_t StringLength, unsigned int Color, int FontHandle, unsigned int EdgeColor DEFAULTPARAM( = 0 ) , int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;									// �t�H���g�n���h����g�p���ĕ������`�悷��( ���W�w�肪 float �� )
extern	int			DrawVStringFToHandle(                   float x, float y, const TCHAR *String,                      unsigned int Color, int FontHandle, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;																				// �t�H���g�n���h����g�p���ĕ������`�悷��( �c���� )( ���W�w�肪 float �� )
extern	int			DrawNVStringFToHandle(                  float x, float y, const TCHAR *String, size_t StringLength, unsigned int Color, int FontHandle, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;																				// �t�H���g�n���h����g�p���ĕ������`�悷��( �c���� )( ���W�w�肪 float �� )
extern	int			DrawFormatStringFToHandle(              float x, float y, unsigned int Color,                         int FontHandle, const TCHAR *FormatString, ... ) ;																											// �t�H���g�n���h����g�p���ď����w�蕶�����`�悷��( ���W�w�肪 float �� )
extern	int			DrawFormatVStringFToHandle(             float x, float y, unsigned int Color,                         int FontHandle, const TCHAR *FormatString, ... ) ;																											// �t�H���g�n���h����g�p���ď����w�蕶�����`�悷��( �c���� )( ���W�w�肪 float �� )
extern	int			DrawFormatString2FToHandle(             float x, float y, unsigned int Color, unsigned int EdgeColor, int FontHandle, const TCHAR *FormatString, ... ) ;																											// �t�H���g�n���h����g�p���ď����w�蕶�����`�悷��( ���̐F�����t�� )( ���W�w�肪 float �� )
extern	int			DrawFormatVString2FToHandle(            float x, float y, unsigned int Color, unsigned int EdgeColor, int FontHandle, const TCHAR *FormatString, ... ) ;																											// �t�H���g�n���h����g�p���ď����w�蕶�����`�悷��( ���̐F�����t�� )( �c���� )( ���W�w�肪 float �� )
extern	int			DrawExtendStringFToHandle(              float x, float y, double ExRateX, double ExRateY, const TCHAR *String,                      unsigned int Color, int FontHandle, unsigned int EdgeColor DEFAULTPARAM( = 0 ) , int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;	// �t�H���g�n���h����g�p���ĕ������g��`�悷��( ���W�w�肪 float �� )
extern	int			DrawExtendNStringFToHandle(             float x, float y, double ExRateX, double ExRateY, const TCHAR *String, size_t StringLength, unsigned int Color, int FontHandle, unsigned int EdgeColor DEFAULTPARAM( = 0 ) , int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;	// �t�H���g�n���h����g�p���ĕ������g��`�悷��( ���W�w�肪 float �� )
extern	int			DrawExtendVStringFToHandle(             float x, float y, double ExRateX, double ExRateY, const TCHAR *String,                      unsigned int Color, int FontHandle, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;												// �t�H���g�n���h����g�p���ĕ������g��`�悷��( �c���� )( ���W�w�肪 float �� )
extern	int			DrawExtendNVStringFToHandle(            float x, float y, double ExRateX, double ExRateY, const TCHAR *String, size_t StringLength, unsigned int Color, int FontHandle, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;												// �t�H���g�n���h����g�p���ĕ������g��`�悷��( �c���� )( ���W�w�肪 float �� )
extern	int			DrawExtendFormatStringFToHandle(        float x, float y, double ExRateX, double ExRateY, unsigned int Color,                         int FontHandle, const TCHAR *FormatString, ... ) ;																			// �t�H���g�n���h����g�p���ď����w�蕶�����g��`�悷��( ���W�w�肪 float �� )
extern	int			DrawExtendFormatVStringFToHandle(       float x, float y, double ExRateX, double ExRateY, unsigned int Color,                         int FontHandle, const TCHAR *FormatString, ... ) ;																			// �t�H���g�n���h����g�p���ď����w�蕶�����g��`�悷��( �c���� )( ���W�w�肪 float �� )
extern	int			DrawExtendFormatString2FToHandle(       float x, float y, double ExRateX, double ExRateY, unsigned int Color, unsigned int EdgeColor, int FontHandle, const TCHAR *FormatString, ... ) ;																			// �t�H���g�n���h����g�p���ď����w�蕶�����g��`�悷��( ���̐F�����t�� )( ���W�w�肪 float �� )
extern	int			DrawExtendFormatVString2FToHandle(      float x, float y, double ExRateX, double ExRateY, unsigned int Color, unsigned int EdgeColor, int FontHandle, const TCHAR *FormatString, ... ) ;																			// �t�H���g�n���h����g�p���ď����w�蕶�����g��`�悷��( ���̐F�����t�� )( �c���� )( ���W�w�肪 float �� )
extern	int			DrawRotaStringFToHandle(				float x, float y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, unsigned int Color, int FontHandle, unsigned int EdgeColor DEFAULTPARAM( = 0 ) , int VerticalFlag DEFAULTPARAM( = FALSE ) , const TCHAR *String       DEFAULTPARAM( = NULL )                           ) ;		// �t�H���g�n���h����g�p���ĕ�������]�`�悷��( ���W�w�肪 float �� )
extern	int			DrawRotaNStringFToHandle(				float x, float y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, unsigned int Color, int FontHandle, unsigned int EdgeColor DEFAULTPARAM( = 0 ) , int VerticalFlag DEFAULTPARAM( = FALSE ) , const TCHAR *String       DEFAULTPARAM( = NULL ) , size_t StringLength DEFAULTPARAM( = 0 ) ) ;		// �t�H���g�n���h����g�p���ĕ�������]�`�悷��( ���W�w�肪 float �� )
extern	int			DrawRotaFormatStringFToHandle(			float x, float y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, unsigned int Color, int FontHandle, unsigned int EdgeColor DEFAULTPARAM( = 0 ) , int VerticalFlag DEFAULTPARAM( = FALSE ) , const TCHAR *FormatString DEFAULTPARAM( = NULL ) , ...                     ) ;		// �t�H���g�n���h����g�p���ď����w�蕶������]�`�悷��( ���W�w�肪 float �� )
extern	int			DrawModiStringFToHandle(				float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, unsigned int Color, int FontHandle, unsigned int EdgeColor, int VerticalFlag, const TCHAR *String                            ) ;		// �t�H���g�n���h����g�p���ĕ������ό`�`�悷��( ���W�w�肪 float �� )
extern	int			DrawModiNStringFToHandle(				float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, unsigned int Color, int FontHandle, unsigned int EdgeColor, int VerticalFlag, const TCHAR *String,       size_t StringLength ) ;		// �t�H���g�n���h����g�p���ĕ������ό`�`�悷��( ���W�w�肪 float �� )
extern	int			DrawModiFormatStringFToHandle(			float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, unsigned int Color, int FontHandle, unsigned int EdgeColor, int VerticalFlag, const TCHAR *FormatString, ...                 ) ;		// �t�H���g�n���h����g�p���ď����w�蕶�����ό`�`�悷��( ���W�w�肪 float �� )

extern	int			DrawNumberToIToHandle(                  int x, int y,                          int    Num, int RisesNum, unsigned int Color, int FontHandle, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;											// �t�H���g�n���h����g�p���Đ����^�̐��l��`�悷��
extern	int			DrawNumberToFToHandle(                  int x, int y,                          double Num, int Length,   unsigned int Color, int FontHandle, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;											// �t�H���g�n���h����g�p���ĕ��������_�^�̐��l��`�悷��
extern	int			DrawNumberPlusToIToHandle(              int x, int y, const TCHAR *NoteString, int    Num, int RisesNum, unsigned int Color, int FontHandle, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;											// �t�H���g�n���h����g�p���Đ����^�̐��l�Ƃ��̐���̕�������x�ɕ`�悷��
extern	int			DrawNumberPlusToFToHandle(              int x, int y, const TCHAR *NoteString, double Num, int Length,   unsigned int Color, int FontHandle, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;											// �t�H���g�n���h����g�p���ĕ��������_�^�̐��l�Ƃ��̐���̕�������x�ɕ`�悷��

extern	int			DrawStringToHandleToZBuffer(            int x, int y, const TCHAR *String,                      int FontHandle,                                                                   int WriteZMode /* DX_ZWRITE_MASK �� */ , int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;			// �t�H���g�n���h����g�p���Ăy�o�b�t�@�ɑ΂��ĕ������`�悷��
extern	int			DrawNStringToHandleToZBuffer(           int x, int y, const TCHAR *String, size_t StringLength, int FontHandle,                                                                   int WriteZMode /* DX_ZWRITE_MASK �� */ , int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;			// �t�H���g�n���h����g�p���Ăy�o�b�t�@�ɑ΂��ĕ������`�悷��
extern	int			DrawVStringToHandleToZBuffer(           int x, int y, const TCHAR *String,                      int FontHandle,                                                                   int WriteZMode /* DX_ZWRITE_MASK �� */ ) ;													// �t�H���g�n���h����g�p���Ăy�o�b�t�@�ɑ΂��ĕ������`�悷��( �c���� )
extern	int			DrawNVStringToHandleToZBuffer(          int x, int y, const TCHAR *String, size_t StringLength, int FontHandle,                                                                   int WriteZMode /* DX_ZWRITE_MASK �� */ ) ;													// �t�H���g�n���h����g�p���Ăy�o�b�t�@�ɑ΂��ĕ������`�悷��( �c���� )
extern	int			DrawFormatStringToHandleToZBuffer(      int x, int y, int FontHandle,                                                                                        int WriteZMode /* DX_ZWRITE_MASK �� */ , const TCHAR *FormatString, ... ) ;										// �t�H���g�n���h����g�p���Ăy�o�b�t�@�ɑ΂��ď����w�蕶�����`�悷��
extern	int			DrawFormatVStringToHandleToZBuffer(     int x, int y, int FontHandle,                                                                                        int WriteZMode /* DX_ZWRITE_MASK �� */ , const TCHAR *FormatString, ... ) ;										// �t�H���g�n���h����g�p���Ăy�o�b�t�@�ɑ΂��ď����w�蕶�����`�悷��( �c���� )
extern	int			DrawExtendStringToHandleToZBuffer(      int x, int y, double ExRateX, double ExRateY, const TCHAR *String,                      int FontHandle,                                   int WriteZMode /* DX_ZWRITE_MASK �� */ , int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;			// �t�H���g�n���h����g�p���Ăy�o�b�t�@�ɑ΂��ĕ������g��`�悷��
extern	int			DrawExtendNStringToHandleToZBuffer(     int x, int y, double ExRateX, double ExRateY, const TCHAR *String, size_t StringLength, int FontHandle,                                   int WriteZMode /* DX_ZWRITE_MASK �� */ , int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;			// �t�H���g�n���h����g�p���Ăy�o�b�t�@�ɑ΂��ĕ������g��`�悷��
extern	int			DrawExtendVStringToHandleToZBuffer(     int x, int y, double ExRateX, double ExRateY, const TCHAR *String,                      int FontHandle,                                   int WriteZMode /* DX_ZWRITE_MASK �� */ ) ;													// �t�H���g�n���h����g�p���Ăy�o�b�t�@�ɑ΂��ĕ������g��`�悷��( �c���� )
extern	int			DrawExtendNVStringToHandleToZBuffer(    int x, int y, double ExRateX, double ExRateY, const TCHAR *String, size_t StringLength, int FontHandle,                                   int WriteZMode /* DX_ZWRITE_MASK �� */ ) ;													// �t�H���g�n���h����g�p���Ăy�o�b�t�@�ɑ΂��ĕ������g��`�悷��( �c���� )
extern	int			DrawExtendFormatStringToHandleToZBuffer(   int x, int y, double ExRateX, double ExRateY, int FontHandle,                                                      int WriteZMode /* DX_ZWRITE_MASK �� */ , const TCHAR *FormatString, ... ) ;										// �t�H���g�n���h����g�p���Ăy�o�b�t�@�ɑ΂��ď����w�蕶�����g��`�悷��
extern	int			DrawExtendFormatVStringToHandleToZBuffer(  int x, int y, double ExRateX, double ExRateY, int FontHandle,                                                      int WriteZMode /* DX_ZWRITE_MASK �� */ , const TCHAR *FormatString, ... ) ;										// �t�H���g�n���h����g�p���Ăy�o�b�t�@�ɑ΂��ď����w�蕶�����g��`�悷��( �c���� )
extern	int			DrawRotaStringToHandleToZBuffer(		int x, int y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, int FontHandle, int WriteZMode /* DX_ZWRITE_MASK �� */ , int VerticalFlag, const TCHAR *String                            ) ;		// �t�H���g�n���h����g�p���Ăy�o�b�t�@�ɑ΂��ĕ�������]�`�悷��
extern	int			DrawRotaNStringToHandleToZBuffer(		int x, int y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, int FontHandle, int WriteZMode /* DX_ZWRITE_MASK �� */ , int VerticalFlag, const TCHAR *String,       size_t StringLength ) ;		// �t�H���g�n���h����g�p���Ăy�o�b�t�@�ɑ΂��ĕ�������]�`�悷��
extern	int			DrawRotaFormatStringToHandleToZBuffer(	int x, int y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, int FontHandle, int WriteZMode /* DX_ZWRITE_MASK �� */ , int VerticalFlag, const TCHAR *FormatString, ...                 ) ;		// �t�H���g�n���h����g�p���Ăy�o�b�t�@�ɑ΂��ď����w�蕶������]�`�悷��
extern	int			DrawModiStringToHandleToZBuffer(		int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int FontHandle, int WriteZMode /* DX_ZWRITE_MASK �� */ , int VerticalFlag, const TCHAR *String                            ) ;											// �t�H���g�n���h����g�p���Ăy�o�b�t�@�ɑ΂��ĕ������ό`�`�悷��
extern	int			DrawModiNStringToHandleToZBuffer(		int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int FontHandle, int WriteZMode /* DX_ZWRITE_MASK �� */ , int VerticalFlag, const TCHAR *String,       size_t StringLength ) ;											// �t�H���g�n���h����g�p���Ăy�o�b�t�@�ɑ΂��ĕ������ό`�`�悷��
extern	int			DrawModiFormatStringToHandleToZBuffer(	int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int FontHandle, int WriteZMode /* DX_ZWRITE_MASK �� */ , int VerticalFlag, const TCHAR *FormatString, ...                 ) ;											// �t�H���g�n���h����g�p���Ăy�o�b�t�@�ɑ΂��ď����w�蕶�����ό`�`�悷��

#endif // DX_NON_FONT








// DxMath.cpp �֐��v���g�^�C�v�錾

// ���Z���C�u����
extern	int			ConvertMatrixFtoD(             MATRIX_D *Out, const MATRIX   *In ) ;															// float�^�v�f�̍s���double�^�v�f�̍s��ɕϊ�����
extern	int			ConvertMatrixDtoF(             MATRIX   *Out, const MATRIX_D *In ) ;															// double�^�v�f�̍s���float�^�v�f�̍s��ɕϊ�����
extern	int			CreateIdentityMatrix(          MATRIX   *Out ) ;																				// �P�ʍs���쐬����
extern	int			CreateIdentityMatrixD(         MATRIX_D *Out ) ;																				// �P�ʍs���쐬����
extern	int			CreateLookAtMatrix(            MATRIX   *Out, const VECTOR   *Eye, const VECTOR   *At, const VECTOR   *Up ) ;					// �r���[�s���쐬����
extern	int			CreateLookAtMatrixD(           MATRIX_D *Out, const VECTOR_D *Eye, const VECTOR_D *At, const VECTOR_D *Up ) ;					// �r���[�s���쐬����
extern	int			CreateLookAtMatrix2(           MATRIX   *Out, const VECTOR   *Eye, double XZAngle, double Oira ) ;								// �r���[�s���쐬����(�������]�l�Ŏw��)
extern	int			CreateLookAtMatrix2D(          MATRIX_D *Out, const VECTOR_D *Eye, double XZAngle, double Oira ) ;								// �r���[�s���쐬����(�������]�l�Ŏw��)
extern	int			CreateLookAtMatrixRH(          MATRIX   *Out, const VECTOR   *Eye, const VECTOR   *At, const VECTOR   *Up ) ;					// �r���[�s���쐬����(�E����W�n�p)
extern	int			CreateLookAtMatrixRHD(         MATRIX_D *Out, const VECTOR_D *Eye, const VECTOR_D *At, const VECTOR_D *Up ) ;					// �r���[�s���쐬����(�E����W�n�p)
extern	int			CreateMultiplyMatrix(          MATRIX   *Out, const MATRIX   *In1, const MATRIX   *In2 ) ;										// �s��̐ς���߂�
extern	int			CreateMultiplyMatrixD(         MATRIX_D *Out, const MATRIX_D *In1, const MATRIX_D *In2 ) ;										// �s��̐ς���߂�
extern	int			CreatePerspectiveFovMatrix(    MATRIX   *Out, float  fov,  float  zn, float  zf, float  aspect DEFAULTPARAM( = -1.0f ) ) ;		// �ˉe�s���쐬����
extern	int			CreatePerspectiveFovMatrixD(   MATRIX_D *Out, double fov,  double zn, double zf, double aspect DEFAULTPARAM( = -1.0f ) ) ;		// �ˉe�s���쐬����
extern	int			CreatePerspectiveFovMatrixRH(  MATRIX   *Out, float  fov,  float  zn, float  zf, float  aspect DEFAULTPARAM( = -1.0f ) ) ;		// �ˉe�s���쐬����(�E����W�n�p)
extern	int			CreatePerspectiveFovMatrixRHD( MATRIX_D *Out, double fov,  double zn, double zf, double aspect DEFAULTPARAM( = -1.0f ) ) ;		// �ˉe�s���쐬����(�E����W�n�p)
extern	int			CreateOrthoMatrix(             MATRIX   *Out, float  size, float  zn, float  zf, float  aspect DEFAULTPARAM( = -1.0f ) ) ;		// ���ˉe�s���쐬����
extern	int			CreateOrthoMatrixD(            MATRIX_D *Out, double size, double zn, double zf, double aspect DEFAULTPARAM( = -1.0f ) ) ;		// ���ˉe�s���쐬����
extern	int			CreateOrthoMatrixRH(           MATRIX   *Out, float  size, float  zn, float  zf, float  aspect DEFAULTPARAM( = -1.0f ) ) ;		// ���ˉe�s���쐬����(�E����W�n�p)
extern	int			CreateOrthoMatrixRHD(          MATRIX_D *Out, double size, double zn, double zf, double aspect DEFAULTPARAM( = -1.0f ) ) ;		// ���ˉe�s���쐬����(�E����W�n�p)
extern	int			CreateScalingMatrix(           MATRIX   *Out, float  sx, float  sy, float  sz ) ;												// �X�P�[�����O�s���쐬����
extern	int			CreateScalingMatrixD(          MATRIX_D *Out, double sx, double sy, double sz ) ;												// �X�P�[�����O�s���쐬����
extern	int			CreateRotationXMatrix(         MATRIX   *Out, float  Angle ) ;																	// �w���𒆐S�Ƃ�����]�s���쐬����
extern	int			CreateRotationXMatrixD(        MATRIX_D *Out, double Angle ) ;																	// �w���𒆐S�Ƃ�����]�s���쐬����
extern	int			CreateRotationYMatrix(         MATRIX   *Out, float  Angle ) ;																	// �x���𒆐S�Ƃ�����]�s���쐬����
extern	int			CreateRotationYMatrixD(        MATRIX_D *Out, double Angle ) ;																	// �x���𒆐S�Ƃ�����]�s���쐬����
extern	int			CreateRotationZMatrix(         MATRIX   *Out, float  Angle ) ;																	// �y���𒆐S�Ƃ�����]�s���쐬����
extern	int			CreateRotationZMatrixD(        MATRIX_D *Out, double Angle ) ;																	// �y���𒆐S�Ƃ�����]�s���쐬����
extern	int			CreateTranslationMatrix(       MATRIX   *Out, float  x, float  y, float  z ) ;													// ���s�ړ��s���쐬����
extern	int			CreateTranslationMatrixD(      MATRIX_D *Out, double x, double y, double z ) ;													// ���s�ړ��s���쐬����
extern	int			CreateTransposeMatrix(         MATRIX   *Out, const MATRIX   *In ) ;															// �]�u�s���쐬����
extern	int			CreateTransposeMatrixD(        MATRIX_D *Out, const MATRIX_D *In ) ;															// �]�u�s���쐬����
extern	int			CreateInverseMatrix(           MATRIX   *Out, const MATRIX   *In ) ;															// �t�s���쐬����
extern	int			CreateInverseMatrixD(          MATRIX_D *Out, const MATRIX_D *In ) ;															// �t�s���쐬����
extern	int			CreateViewportMatrix(          MATRIX   *Out, float  CenterX, float  CenterY, float  Width, float  Height ) ;					// �r���[�|�[�g�s���쐬����
extern	int			CreateViewportMatrixD(         MATRIX_D *Out, double CenterX, double CenterY, double Width, double Height ) ;					// �r���[�|�[�g�s���쐬����
extern	int			CreateRotationXYZMatrix(       MATRIX   *Out, float  XRot, float  YRot, float  ZRot ) ;											// �w����]���x����]���y����]����������s���쐬����
extern	int			CreateRotationXYZMatrixD(      MATRIX_D *Out, double XRot, double YRot, double ZRot ) ;											// �w����]���x����]���y����]����������s���쐬����
extern	int			CreateRotationXZYMatrix(       MATRIX   *Out, float  XRot, float  YRot, float  ZRot ) ;											// �w����]���y����]���x����]����������s���쐬����
extern	int			CreateRotationXZYMatrixD(      MATRIX_D *Out, double XRot, double YRot, double ZRot ) ;											// �w����]���y����]���x����]����������s���쐬����
extern	int			CreateRotationYXZMatrix(       MATRIX   *Out, float  XRot, float  YRot, float  ZRot ) ;											// �x����]���w����]���y����]����������s���쐬����
extern	int			CreateRotationYXZMatrixD(      MATRIX_D *Out, double XRot, double YRot, double ZRot ) ;											// �x����]���w����]���y����]����������s���쐬����
extern	int			CreateRotationYZXMatrix(       MATRIX   *Out, float  XRot, float  YRot, float  ZRot ) ;											// �x����]���y����]���w����]����������s���쐬����
extern	int			CreateRotationYZXMatrixD(      MATRIX_D *Out, double XRot, double YRot, double ZRot ) ;											// �x����]���y����]���w����]����������s���쐬����
extern	int			CreateRotationZXYMatrix(       MATRIX   *Out, float  XRot, float  YRot, float  ZRot ) ;											// �y����]���w����]���x����]����������s���쐬����
extern	int			CreateRotationZXYMatrixD(      MATRIX_D *Out, double XRot, double YRot, double ZRot ) ;											// �y����]���w����]���x����]����������s���쐬����
extern	int			CreateRotationZYXMatrix(       MATRIX   *Out, float  XRot, float  YRot, float  ZRot ) ;											// �y����]���x����]���w����]����������s���쐬����
extern	int			CreateRotationZYXMatrixD(      MATRIX_D *Out, double XRot, double YRot, double ZRot ) ;											// �y����]���x����]���w����]����������s���쐬����
extern	int			GetMatrixXYZRotation(          const MATRIX   *In, float  *OutXRot, float  *OutYRot, float  *OutZRot ) ;						// �s�񂩂�w�x�y����]�̒l��擾����( �߂�l�@-1:�W���o�����b�N����  0:���� )
extern	int			GetMatrixXYZRotationD(         const MATRIX_D *In, double *OutXRot, double *OutYRot, double *OutZRot ) ;						// �s�񂩂�w�x�y����]�̒l��擾����( �߂�l�@-1:�W���o�����b�N����  0:���� )
extern	int			GetMatrixXZYRotation(          const MATRIX   *In, float  *OutXRot, float  *OutYRot, float  *OutZRot ) ;						// �s�񂩂�w�y�x����]�̒l��擾����( �߂�l�@-1:�W���o�����b�N����  0:���� )
extern	int			GetMatrixXZYRotationD(         const MATRIX_D *In, double *OutXRot, double *OutYRot, double *OutZRot ) ;						// �s�񂩂�w�y�x����]�̒l��擾����( �߂�l�@-1:�W���o�����b�N����  0:���� )
extern	int			GetMatrixYXZRotation(          const MATRIX   *In, float  *OutXRot, float  *OutYRot, float  *OutZRot ) ;						// �s�񂩂�x�w�y����]�̒l��擾����( �߂�l�@-1:�W���o�����b�N����  0:���� )
extern	int			GetMatrixYXZRotationD(         const MATRIX_D *In, double *OutXRot, double *OutYRot, double *OutZRot ) ;						// �s�񂩂�x�w�y����]�̒l��擾����( �߂�l�@-1:�W���o�����b�N����  0:���� )
extern	int			GetMatrixYZXRotation(          const MATRIX   *In, float  *OutXRot, float  *OutYRot, float  *OutZRot ) ;						// �s�񂩂�x�y�w����]�̒l��擾����( �߂�l�@-1:�W���o�����b�N����  0:���� )
extern	int			GetMatrixYZXRotationD(         const MATRIX_D *In, double *OutXRot, double *OutYRot, double *OutZRot ) ;						// �s�񂩂�x�y�w����]�̒l��擾����( �߂�l�@-1:�W���o�����b�N����  0:���� )
extern	int			GetMatrixZXYRotation(          const MATRIX   *In, float  *OutXRot, float  *OutYRot, float  *OutZRot ) ;						// �s�񂩂�y�w�x����]�̒l��擾����( �߂�l�@-1:�W���o�����b�N����  0:���� )
extern	int			GetMatrixZXYRotationD(         const MATRIX_D *In, double *OutXRot, double *OutYRot, double *OutZRot ) ;						// �s�񂩂�y�w�x����]�̒l��擾����( �߂�l�@-1:�W���o�����b�N����  0:���� )
extern	int			GetMatrixZYXRotation(          const MATRIX   *In, float  *OutXRot, float  *OutYRot, float  *OutZRot ) ;						// �s�񂩂�y�x�w����]�̒l��擾����( �߂�l�@-1:�W���o�����b�N����  0:���� )
extern	int			GetMatrixZYXRotationD(         const MATRIX_D *In, double *OutXRot, double *OutYRot, double *OutZRot ) ;						// �s�񂩂�y�x�w����]�̒l��擾����( �߂�l�@-1:�W���o�����b�N����  0:���� )
extern	int			VectorConvertFtoD(             VECTOR_D *Out, const VECTOR   *In ) ;															// float�^�̃x�N�g����double�^�̃x�N�g���ɕϊ�����
extern	int			VectorConvertDtoF(             VECTOR   *Out, const VECTOR_D *In ) ;															// double�^�̃x�N�g����float�^�̃x�N�g���ɕϊ�����
extern	int			VectorNormalize(               VECTOR   *Out, const VECTOR   *In ) ;															// �x�N�g���𐳋K������
extern	int			VectorNormalizeD(              VECTOR_D *Out, const VECTOR_D *In ) ;															// �x�N�g���𐳋K������
extern	int			VectorScale(                   VECTOR   *Out, const VECTOR   *In, float  Scale ) ;												// �x�N�g����X�J���[�{����
extern	int			VectorScaleD(                  VECTOR_D *Out, const VECTOR_D *In, double Scale ) ;												// �x�N�g����X�J���[�{����
extern	int			VectorMultiply(                VECTOR   *Out, const VECTOR   *In1, const VECTOR   *In2 ) ;										// �x�N�g���̊|���Z�����
extern	int			VectorMultiplyD(               VECTOR_D *Out, const VECTOR_D *In1, const VECTOR_D *In2 ) ;										// �x�N�g���̊|���Z�����
extern	int			VectorSub(                     VECTOR   *Out, const VECTOR   *In1, const VECTOR   *In2 ) ;										// Out = In1 - In2 �̃x�N�g���v�Z����� 
extern	int			VectorSubD(                    VECTOR_D *Out, const VECTOR_D *In1, const VECTOR_D *In2 ) ;										// Out = In1 - In2 �̃x�N�g���v�Z����� 
extern	int			VectorAdd(                     VECTOR   *Out, const VECTOR   *In1, const VECTOR   *In2 ) ;										// Out = In1 + In2 �̃x�N�g���v�Z����� 
extern	int			VectorAddD(                    VECTOR_D *Out, const VECTOR_D *In1, const VECTOR_D *In2 ) ;										// Out = In1 + In2 �̃x�N�g���v�Z����� 
extern	int			VectorOuterProduct(            VECTOR   *Out, const VECTOR   *In1, const VECTOR   *In2 ) ;										// In1��In2�̊O�ς�v�Z����
extern	int			VectorOuterProductD(           VECTOR_D *Out, const VECTOR_D *In1, const VECTOR_D *In2 ) ;										// In1��In2�̊O�ς�v�Z����
extern	float 		VectorInnerProduct(            const VECTOR   *In1, const VECTOR   *In2 ) ;														// In1��In2�̓�ς�v�Z����
extern	double		VectorInnerProductD(           const VECTOR_D *In1, const VECTOR_D *In2 ) ;														// In1��In2�̓�ς�v�Z����
extern	int			VectorRotationX(               VECTOR   *Out, const VECTOR   *In, double Angle ) ;												// �x�N�g���̂w������ɂ�����]��s��
extern	int			VectorRotationXD(              VECTOR_D *Out, const VECTOR_D *In, double Angle ) ;												// �x�N�g���̂w������ɂ�����]��s��
extern	int			VectorRotationY(               VECTOR   *Out, const VECTOR   *In, double Angle ) ;												// �x�N�g���̂x������ɂ�����]��s��
extern	int			VectorRotationYD(              VECTOR_D *Out, const VECTOR_D *In, double Angle ) ;												// �x�N�g���̂x������ɂ�����]��s��
extern	int			VectorRotationZ(               VECTOR   *Out, const VECTOR   *In, double Angle ) ;												// �x�N�g���̂y������ɂ�����]��s��
extern	int			VectorRotationZD(              VECTOR_D *Out, const VECTOR_D *In, double Angle ) ;												// �x�N�g���̂y������ɂ�����]��s��
extern	int			VectorTransform(               VECTOR   *Out, const VECTOR   *InVec, const MATRIX   *InMatrix ) ;								// �x�N�g���s���4x4�����s����Z����( w �� 1 �Ɖ��� )
extern	int			VectorTransformD(              VECTOR_D *Out, const VECTOR_D *InVec, const MATRIX_D *InMatrix ) ;								// �x�N�g���s���4x4�����s����Z����( w �� 1 �Ɖ��� )
extern	int			VectorTransformSR(             VECTOR   *Out, const VECTOR   *InVec, const MATRIX   *InMatrix ) ;								// �x�N�g���s���4x4�����s��̉�]�����݂̂��Z����
extern	int			VectorTransformSRD(            VECTOR_D *Out, const VECTOR_D *InVec, const MATRIX_D *InMatrix ) ;								// �x�N�g���s���4x4�����s��̉�]�����݂̂��Z����
extern	int			VectorTransform4(              VECTOR   *Out, float  *V4Out, const VECTOR   *InVec, const float  *V4In, const MATRIX   *InMatrix ) ; // �x�N�g���s���4x4�����s����Z����( w �̗v�f��n�� )
extern	int			VectorTransform4D(             VECTOR_D *Out, double *V4Out, const VECTOR_D *InVec, const double *V4In, const MATRIX_D *InMatrix ) ; // �x�N�g���s���4x4�����s����Z����( w �̗v�f��n�� )

extern	int			Segment_Segment_Analyse(      const VECTOR   *SegmentAPos1, const VECTOR   *SegmentAPos2, const VECTOR   *SegmentBPos1, const VECTOR   *SegmentBPos2, SEGMENT_SEGMENT_RESULT   *Result ) ;								// ��̐����̍Őڋߓ_�����͂���
extern	int			Segment_Segment_AnalyseD(     const VECTOR_D *SegmentAPos1, const VECTOR_D *SegmentAPos2, const VECTOR_D *SegmentBPos1, const VECTOR_D *SegmentBPos2, SEGMENT_SEGMENT_RESULT_D *Result ) ;								// ��̐����̍Őڋߓ_�����͂���
extern	int			Segment_Point_Analyse(        const VECTOR   *SegmentPos1, const VECTOR   *SegmentPos2, const VECTOR   *PointPos, SEGMENT_POINT_RESULT   *Result ) ;																	// �����Ɠ_�̍Őڋߓ_�����͂���
extern	int			Segment_Point_AnalyseD(       const VECTOR_D *SegmentPos1, const VECTOR_D *SegmentPos2, const VECTOR_D *PointPos, SEGMENT_POINT_RESULT_D *Result ) ;																	// �����Ɠ_�̍Őڋߓ_�����͂���
extern	int			Segment_Triangle_Analyse(     const VECTOR   *SegmentPos1, const VECTOR   *SegmentPos2, const VECTOR   *TrianglePos1, const VECTOR   *TrianglePos2, const VECTOR   *TrianglePos3, SEGMENT_TRIANGLE_RESULT   *Result ) ;	// �����ƎO�p�`�̍Őڋߓ_�����͂���
extern	int			Segment_Triangle_AnalyseD(    const VECTOR_D *SegmentPos1, const VECTOR_D *SegmentPos2, const VECTOR_D *TrianglePos1, const VECTOR_D *TrianglePos2, const VECTOR_D *TrianglePos3, SEGMENT_TRIANGLE_RESULT_D *Result ) ;	// �����ƎO�p�`�̍Őڋߓ_�����͂���
extern	int			Triangle_Point_Analyse(       const VECTOR   *TrianglePos1, const VECTOR   *TrianglePos2, const VECTOR   *TrianglePos3, const VECTOR   *PointPos, TRIANGLE_POINT_RESULT   *Result ) ;									// �O�p�`�Ɠ_�̍Őڋߓ_�����͂���
extern	int			Triangle_Point_AnalyseD(      const VECTOR_D *TrianglePos1, const VECTOR_D *TrianglePos2, const VECTOR_D *TrianglePos3, const VECTOR_D *PointPos, TRIANGLE_POINT_RESULT_D *Result ) ;									// �O�p�`�Ɠ_�̍Őڋߓ_�����͂���
extern	int			Plane_Point_Analyse(          const VECTOR   *PlanePos, const VECTOR   *PlaneNormal, const VECTOR   *PointPos, PLANE_POINT_RESULT   *Result ) ;																			// ���ʂƓ_�̍ŋߓ_�����͂���
extern	int			Plane_Point_AnalyseD(         const VECTOR_D *PlanePos, const VECTOR_D *PlaneNormal, const VECTOR_D *PointPos, PLANE_POINT_RESULT_D *Result ) ;																			// ���ʂƓ_�̍ŋߓ_�����͂���

extern	void		TriangleBarycenter(           VECTOR   TrianglePos1, VECTOR   TrianglePos2, VECTOR   TrianglePos3, VECTOR   Position, float  *TrianglePos1Weight, float  *TrianglePos2Weight, float  *TrianglePos3Weight ) ;	// �w��̍��W����O�p�`�̏d�S����߂�
extern	void		TriangleBarycenterD(          VECTOR_D TrianglePos1, VECTOR_D TrianglePos2, VECTOR_D TrianglePos3, VECTOR_D Position, double *TrianglePos1Weight, double *TrianglePos2Weight, double *TrianglePos3Weight ) ;	// �w��̍��W����O�p�`�̏d�S����߂�

extern	float 		Segment_Segment_MinLength(           VECTOR   SegmentAPos1, VECTOR   SegmentAPos2, VECTOR   SegmentBPos1, VECTOR   SegmentBPos2 ) ;														// ��̐����̍ŋߓ_�Ԃ̋����𓾂�
extern	double		Segment_Segment_MinLengthD(          VECTOR_D SegmentAPos1, VECTOR_D SegmentAPos2, VECTOR_D SegmentBPos1, VECTOR_D SegmentBPos2 ) ;														// ��̐����̍ŋߓ_�Ԃ̋����𓾂�
extern	float 		Segment_Segment_MinLength_Square(    VECTOR   SegmentAPos1, VECTOR   SegmentAPos2, VECTOR   SegmentBPos1, VECTOR   SegmentBPos2 ) ;														// ��̐����̍ŋߓ_�Ԃ̋����̓��𓾂�
extern	double		Segment_Segment_MinLength_SquareD(   VECTOR_D SegmentAPos1, VECTOR_D SegmentAPos2, VECTOR_D SegmentBPos1, VECTOR_D SegmentBPos2 ) ;														// ��̐����̍ŋߓ_�Ԃ̋����̓��𓾂�
extern	float 		Segment_Triangle_MinLength(          VECTOR   SegmentPos1, VECTOR   SegmentPos2, VECTOR   TrianglePos1, VECTOR   TrianglePos2, VECTOR   TrianglePos3 ) ;								// �����ƎO�p�`�̍ŋߓ_�Ԃ̋����𓾂� 
extern	double		Segment_Triangle_MinLengthD(         VECTOR_D SegmentPos1, VECTOR_D SegmentPos2, VECTOR_D TrianglePos1, VECTOR_D TrianglePos2, VECTOR_D TrianglePos3 ) ;								// �����ƎO�p�`�̍ŋߓ_�Ԃ̋����𓾂� 
extern	float 		Segment_Triangle_MinLength_Square(   VECTOR   SegmentPos1, VECTOR   SegmentPos2, VECTOR   TrianglePos1, VECTOR   TrianglePos2, VECTOR   TrianglePos3 ) ;								// �����ƎO�p�`�̍ŋߓ_�Ԃ̋����̓��𓾂� 
extern	double		Segment_Triangle_MinLength_SquareD(  VECTOR_D SegmentPos1, VECTOR_D SegmentPos2, VECTOR_D TrianglePos1, VECTOR_D TrianglePos2, VECTOR_D TrianglePos3 ) ;								// �����ƎO�p�`�̍ŋߓ_�Ԃ̋����̓��𓾂� 
extern	float 		Segment_Point_MinLength(             VECTOR   SegmentPos1, VECTOR   SegmentPos2, VECTOR   PointPos ) ;																					// �����Ɠ_�̈�ԋ߂������𓾂�
extern	double		Segment_Point_MinLengthD(            VECTOR_D SegmentPos1, VECTOR_D SegmentPos2, VECTOR_D PointPos ) ;																					// �����Ɠ_�̈�ԋ߂������𓾂�
extern	float 		Segment_Point_MinLength_Square(      VECTOR   SegmentPos1, VECTOR   SegmentPos2, VECTOR   PointPos ) ;																					// �����Ɠ_�̈�ԋ߂������̓��𓾂�
extern	double		Segment_Point_MinLength_SquareD(     VECTOR_D SegmentPos1, VECTOR_D SegmentPos2, VECTOR_D PointPos ) ;																					// �����Ɠ_�̈�ԋ߂������̓��𓾂�
extern	float 		Triangle_Point_MinLength(            VECTOR   TrianglePos1, VECTOR   TrianglePos2, VECTOR   TrianglePos3, VECTOR   PointPos ) ;															// �O�p�`�Ɠ_�̈�ԋ߂������𓾂�
extern	double		Triangle_Point_MinLengthD(           VECTOR_D TrianglePos1, VECTOR_D TrianglePos2, VECTOR_D TrianglePos3, VECTOR_D PointPos ) ;															// �O�p�`�Ɠ_�̈�ԋ߂������𓾂�
extern	float 		Triangle_Point_MinLength_Square(     VECTOR   TrianglePos1, VECTOR   TrianglePos2, VECTOR   TrianglePos3, VECTOR   PointPos ) ;															// �O�p�`�Ɠ_�̈�ԋ߂������̓��𓾂�
extern	double		Triangle_Point_MinLength_SquareD(    VECTOR_D TrianglePos1, VECTOR_D TrianglePos2, VECTOR_D TrianglePos3, VECTOR_D PointPos ) ;															// �O�p�`�Ɠ_�̈�ԋ߂������̓��𓾂�
extern	float 		Triangle_Triangle_MinLength(         VECTOR   Triangle1Pos1, VECTOR   Triangle1Pos2, VECTOR   Triangle1Pos3, VECTOR   Triangle2Pos1, VECTOR   Triangle2Pos2, VECTOR   Triangle2Pos3 ) ;	// ��̎O�p�`�̍ŋߓ_�Ԃ̋����𓾂�
extern	double		Triangle_Triangle_MinLengthD(        VECTOR_D Triangle1Pos1, VECTOR_D Triangle1Pos2, VECTOR_D Triangle1Pos3, VECTOR_D Triangle2Pos1, VECTOR_D Triangle2Pos2, VECTOR_D Triangle2Pos3 ) ;	// ��̎O�p�`�̍ŋߓ_�Ԃ̋����𓾂�
extern	float 		Triangle_Triangle_MinLength_Square(  VECTOR   Triangle1Pos1, VECTOR   Triangle1Pos2, VECTOR   Triangle1Pos3, VECTOR   Triangle2Pos1, VECTOR   Triangle2Pos2, VECTOR   Triangle2Pos3 ) ;	// ��̎O�p�`�̍ŋߓ_�Ԃ̋����̓��𓾂�
extern	double		Triangle_Triangle_MinLength_SquareD( VECTOR_D Triangle1Pos1, VECTOR_D Triangle1Pos2, VECTOR_D Triangle1Pos3, VECTOR_D Triangle2Pos1, VECTOR_D Triangle2Pos2, VECTOR_D Triangle2Pos3 ) ;	// ��̎O�p�`�̍ŋߓ_�Ԃ̋����̓��𓾂�
extern	VECTOR  	Plane_Point_MinLength_Position(      VECTOR   PlanePos, VECTOR   PlaneNormal, VECTOR   PointPos ) ;																						// �_�Ɉ�ԋ߂����ʏ�̍��W�𓾂�
extern	VECTOR_D	Plane_Point_MinLength_PositionD(     VECTOR_D PlanePos, VECTOR_D PlaneNormal, VECTOR_D PointPos ) ;																						// �_�Ɉ�ԋ߂����ʏ�̍��W�𓾂�
extern	float 		Plane_Point_MinLength(               VECTOR   PlanePos, VECTOR   PlaneNormal, VECTOR   PointPos ) ;																						// ���ʂƓ_�̈�ԋ߂������𓾂�
extern	double		Plane_Point_MinLengthD(              VECTOR_D PlanePos, VECTOR_D PlaneNormal, VECTOR_D PointPos ) ;																						// ���ʂƓ_�̈�ԋ߂������𓾂�

extern	HITRESULT_LINE   HitCheck_Line_Triangle(         VECTOR   LinePos1, VECTOR   LinePos2, VECTOR   TrianglePos1, VECTOR   TrianglePos2, VECTOR   TrianglePos3 ) ;										// �O�p�`�Ɛ��̓����蔻��
extern	HITRESULT_LINE_D HitCheck_Line_TriangleD(        VECTOR_D LinePos1, VECTOR_D LinePos2, VECTOR_D TrianglePos1, VECTOR_D TrianglePos2, VECTOR_D TrianglePos3 ) ;										// �O�p�`�Ɛ��̓����蔻��
extern	int			HitCheck_Triangle_Triangle(          VECTOR   Triangle1Pos1, VECTOR   Triangle1Pos2, VECTOR   Triangle1Pos3, VECTOR   Triangle2Pos1, VECTOR   Triangle2Pos2, VECTOR   Triangle2Pos3 ) ;	// �O�p�`�ƎO�p�`�̓����蔻��( TRUE:�������Ă���  FALSE:�������Ă��Ȃ� )
extern	int			HitCheck_Triangle_TriangleD(         VECTOR_D Triangle1Pos1, VECTOR_D Triangle1Pos2, VECTOR_D Triangle1Pos3, VECTOR_D Triangle2Pos1, VECTOR_D Triangle2Pos2, VECTOR_D Triangle2Pos3 ) ;	// �O�p�`�ƎO�p�`�̓����蔻��( TRUE:�������Ă���  FALSE:�������Ă��Ȃ� )
extern	int			HitCheck_Triangle_Triangle_2D(       VECTOR   Triangle1Pos1, VECTOR   Triangle1Pos2, VECTOR   Triangle1Pos3, VECTOR   Triangle2Pos1, VECTOR   Triangle2Pos2, VECTOR   Triangle2Pos3 ) ;	// �O�p�`�ƎO�p�`�̓����蔻��( �Q�c�� )( TRUE:�������Ă���  FALSE:�������Ă��Ȃ� )
extern	int			HitCheck_Triangle_TriangleD_2D(      VECTOR_D Triangle1Pos1, VECTOR_D Triangle1Pos2, VECTOR_D Triangle1Pos3, VECTOR_D Triangle2Pos1, VECTOR_D Triangle2Pos2, VECTOR_D Triangle2Pos3 ) ;	// �O�p�`�ƎO�p�`�̓����蔻��( �Q�c�� )( TRUE:�������Ă���  FALSE:�������Ă��Ȃ� )
extern	HITRESULT_LINE   HitCheck_Line_Cube(             VECTOR   LinePos1, VECTOR   LinePos2, VECTOR   CubePos1, VECTOR   CubePos2 );																		// ���Ɣ��̓����蔻��
extern	HITRESULT_LINE_D HitCheck_Line_CubeD(            VECTOR_D LinePos1, VECTOR_D LinePos2, VECTOR_D CubePos1, VECTOR_D CubePos2 );																		// ���Ɣ��̓����蔻��
extern	int			HitCheck_Point_Cone(                 VECTOR   PointPos, VECTOR   ConeTopPos, VECTOR   ConeBottomPos, float  ConeR ) ;																	// �_�Ɖ~���̓����蔻��( TRUE:�������Ă���  FALSE:�������Ă��Ȃ� )
extern	int			HitCheck_Point_ConeD(                VECTOR_D PointPos, VECTOR_D ConeTopPos, VECTOR_D ConeBottomPos, double ConeR ) ;																	// �_�Ɖ~���̓����蔻��( TRUE:�������Ă���  FALSE:�������Ă��Ȃ� )
extern	int			HitCheck_Line_Sphere(                VECTOR   LinePos1, VECTOR   LinePos2, VECTOR   SphereCenterPos, float  SphereR ) ;																	// ���Ƌ��̓����蔻��( TRUE:�������Ă���  FALSE:�������Ă��Ȃ� )
extern	int			HitCheck_Line_SphereD(               VECTOR_D LinePos1, VECTOR_D LinePos2, VECTOR_D SphereCenterPos, double SphereR ) ;																	// ���Ƌ��̓����蔻��( TRUE:�������Ă���  FALSE:�������Ă��Ȃ� )
extern	int			HitCheck_Sphere_Sphere(              VECTOR   Sphere1CenterPos, float  Sphere1R, VECTOR   Sphere2CenterPos, float  Sphere2R ) ;															// ���Ƌ��̓����蔻��( TRUE:�������Ă���  FALSE:�������Ă��Ȃ� )
extern	int			HitCheck_Sphere_SphereD(             VECTOR_D Sphere1CenterPos, double Sphere1R, VECTOR_D Sphere2CenterPos, double Sphere2R ) ;															// ���Ƌ��̓����蔻��( TRUE:�������Ă���  FALSE:�������Ă��Ȃ� )
extern	int			HitCheck_Sphere_Capsule(             VECTOR   SphereCenterPos, float  SphereR, VECTOR   CapPos1, VECTOR   CapPos2, float  CapR ) ;														// ���ƃJ�v�Z���̓����蔻��( TRUE:�������Ă���  FALSE:�������Ă��Ȃ� )
extern	int			HitCheck_Sphere_CapsuleD(            VECTOR_D SphereCenterPos, double SphereR, VECTOR_D CapPos1, VECTOR_D CapPos2, double CapR ) ;														// ���ƃJ�v�Z���̓����蔻��( TRUE:�������Ă���  FALSE:�������Ă��Ȃ� )
extern	int			HitCheck_Sphere_Triangle(            VECTOR   SphereCenterPos, float  SphereR, VECTOR   TrianglePos1, VECTOR   TrianglePos2, VECTOR   TrianglePos3 ) ;									// ���ƎO�p�`�̓����蔻��( TRUE:�������Ă���  FALSE:�������Ă��Ȃ� )
extern	int			HitCheck_Sphere_TriangleD(           VECTOR_D SphereCenterPos, double SphereR, VECTOR_D TrianglePos1, VECTOR_D TrianglePos2, VECTOR_D TrianglePos3 ) ;									// ���ƎO�p�`�̓����蔻��( TRUE:�������Ă���  FALSE:�������Ă��Ȃ� )
extern	int			HitCheck_Capsule_Capsule(            VECTOR   Cap1Pos1, VECTOR   Cap1Pos2, float  Cap1R, VECTOR   Cap2Pos1, VECTOR   Cap2Pos2, float  Cap2R ) ;											// �J�v�Z�����m�̓����蔻��( TRUE:�������Ă���  FALSE:�������Ă��Ȃ� )
extern	int			HitCheck_Capsule_CapsuleD(           VECTOR_D Cap1Pos1, VECTOR_D Cap1Pos2, double Cap1R, VECTOR_D Cap2Pos1, VECTOR_D Cap2Pos2, double Cap2R ) ;											// �J�v�Z�����m�̓����蔻��( TRUE:�������Ă���  FALSE:�������Ă��Ȃ� )
extern	int			HitCheck_Capsule_Triangle(           VECTOR   CapPos1, VECTOR   CapPos2, float  CapR, VECTOR   TrianglePos1, VECTOR   TrianglePos2, VECTOR   TrianglePos3 ) ;							// �J�v�Z���ƎO�p�`�̓����蔻��( TRUE:�������Ă���  FALSE:�������Ă��Ȃ� )
extern	int			HitCheck_Capsule_TriangleD(          VECTOR_D CapPos1, VECTOR_D CapPos2, double CapR, VECTOR_D TrianglePos1, VECTOR_D TrianglePos2, VECTOR_D TrianglePos3 ) ;							// �J�v�Z���ƎO�p�`�̓����蔻��( TRUE:�������Ă���  FALSE:�������Ă��Ȃ� )

// ���̑�
extern	int			RectClipping( RECT *Rect, const RECT *ClippuRect ) ;									// ��`�̃N���b�s���O
extern	int			RectAdjust(   RECT *Rect ) ;															// ��`�� left �� right ���l���傫���ꍇ�Ȃǂ̌���␳����
extern	int			GetRectSize(  const RECT *Rect, int *Width, int *Height ) ;								// ��`�̕��ƍ�������߂�

// �\�L�ȗ���
extern	MATRIX		MGetIdent(          void ) ;															// �P�ʍs���擾����
extern	MATRIX_D	MGetIdentD(         void ) ;															// �P�ʍs���擾����
extern	MATRIX		MMult(              MATRIX   In1, MATRIX   In2 ) ;										// �s��̏�Z��s��
extern	MATRIX_D	MMultD(             MATRIX_D In1, MATRIX_D In2 ) ;										// �s��̏�Z��s��
extern	MATRIX		MScale(             MATRIX   InM, float  Scale ) ;										// �s��̃X�P�[�����O��s��
extern	MATRIX_D	MScaleD(            MATRIX_D InM, double Scale ) ;										// �s��̃X�P�[�����O��s��
extern	MATRIX		MAdd(               MATRIX   In1, MATRIX   In2 ) ;										// �s��̑����Z��s��
extern	MATRIX_D	MAddD(              MATRIX_D In1, MATRIX_D In2 ) ;										// �s��̑����Z��s��
extern	MATRIX		MGetScale(          VECTOR   Scale ) ;													// �g��s���擾����
extern	MATRIX_D	MGetScaleD(         VECTOR_D Scale ) ;													// �g��s���擾����
extern	MATRIX		MGetRotX(           float  XAxisRotate ) ;												// �w����]�s���擾����
extern	MATRIX_D	MGetRotXD(          double XAxisRotate ) ;												// �w����]�s���擾����
extern	MATRIX		MGetRotY(           float  YAxisRotate ) ;												// �x����]�s���擾����
extern	MATRIX_D	MGetRotYD(          double YAxisRotate ) ;												// �x����]�s���擾����
extern	MATRIX		MGetRotZ(           float  ZAxisRotate ) ;												// �y����]�s���擾����
extern	MATRIX_D	MGetRotZD(          double ZAxisRotate ) ;												// �y����]�s���擾����
extern	MATRIX		MGetRotAxis(        VECTOR   RotateAxis, float  Rotate ) ;								// �w�莲�Ŏw��p�x��]����s���擾����
extern	MATRIX_D	MGetRotAxisD(       VECTOR_D RotateAxis, double Rotate ) ;								// �w�莲�Ŏw��p�x��]����s���擾����
extern	MATRIX		MGetRotVec2(        VECTOR   In1, VECTOR   In2 ) ;										// In1 �̌������� In2 �̌����֕ϊ������]�s���擾����( In2 �� In1 ���^�t�̃x�N�g���̏ꍇ�͉�]���͕s�� )
extern	MATRIX_D	MGetRotVec2D(       VECTOR_D In1, VECTOR_D In2 ) ;										// In1 �̌������� In2 �̌����֕ϊ������]�s���擾����( In2 �� In1 ���^�t�̃x�N�g���̏ꍇ�͉�]���͕s�� )
extern	MATRIX		MGetTranslate(      VECTOR   Trans ) ;													// ���s�ړ��s���擾����
extern	MATRIX_D	MGetTranslateD(     VECTOR_D Trans ) ;													// ���s�ړ��s���擾����
extern	MATRIX		MGetAxis1(          VECTOR   XAxis, VECTOR   YAxis, VECTOR   ZAxis, VECTOR   Pos ) ;	// �w��̂R�����[�J���̃x�N�g�����{����̃x�N�g���ɕϊ�����s���擾����( x' = XAxis.x * x + YAixs.x * y + ZAxis.z * z + Pos.x   y' = XAxis.y * x + YAixs.y * y + ZAxis.y * z + Pos.y      z' = XAxis.z * x + YAixs.z * y + ZAxis.z * z + Pos.z )
extern	MATRIX_D	MGetAxis1D(         VECTOR_D XAxis, VECTOR_D YAxis, VECTOR_D ZAxis, VECTOR_D Pos ) ;	// �w��̂R�����[�J���̃x�N�g�����{����̃x�N�g���ɕϊ�����s���擾����( x' = XAxis.x * x + YAixs.x * y + ZAxis.z * z + Pos.x   y' = XAxis.y * x + YAixs.y * y + ZAxis.y * z + Pos.y      z' = XAxis.z * x + YAixs.z * y + ZAxis.z * z + Pos.z )
extern	MATRIX		MGetAxis2(          VECTOR   XAxis, VECTOR   YAxis, VECTOR   ZAxis, VECTOR   Pos ) ;	// ��{����̃x�N�g����w��̂R����ɓ��e�����x�N�g���ɕϊ�����s���擾����( x' = XAxis.x * ( x - Pos.x ) + XAxis.y * ( x - Pos.x ) + XAxis.z * ( x - Pos.x )    y' = YAxis.x * ( x - Pos.x ) + YAxis.y * ( x - Pos.x ) + YAxis.z * ( x - Pos.x )    z' = ZAxis.x * ( x - Pos.x ) + ZAxis.y * ( x - Pos.x ) + ZAxis.z * ( x - Pos.x ) )
extern	MATRIX_D	MGetAxis2D(         VECTOR_D XAxis, VECTOR_D YAxis, VECTOR_D ZAxis, VECTOR_D Pos ) ;	// ��{����̃x�N�g����w��̂R����ɓ��e�����x�N�g���ɕϊ�����s���擾����( x' = XAxis.x * ( x - Pos.x ) + XAxis.y * ( x - Pos.x ) + XAxis.z * ( x - Pos.x )    y' = YAxis.x * ( x - Pos.x ) + YAxis.y * ( x - Pos.x ) + YAxis.z * ( x - Pos.x )    z' = ZAxis.x * ( x - Pos.x ) + ZAxis.y * ( x - Pos.x ) + ZAxis.z * ( x - Pos.x ) )
extern	MATRIX		MTranspose(         MATRIX   InM ) ;													// �]�u�s���擾����
extern	MATRIX_D	MTransposeD(        MATRIX_D InM ) ;													// �]�u�s���擾����
extern	MATRIX		MInverse(           MATRIX   InM ) ;													// �t�s���擾����
extern	MATRIX_D	MInverseD(          MATRIX_D InM ) ;													// �t�s���擾����
extern  VECTOR		MGetSize(           MATRIX   InM ) ;													// �g��s��̂w���A�x���A�y���̊g�嗦��擾����
extern  VECTOR_D	MGetSizeD(          MATRIX_D InM ) ;													// �g��s��̂w���A�x���A�y���̊g�嗦��擾����
extern	MATRIX		MGetRotElem(        MATRIX   InM ) ;													// �s��̉�]������擾����
extern	MATRIX_D	MGetRotElemD(       MATRIX_D InM ) ;													// �s��̉�]������擾����

#ifdef __cplusplus

// �s��̕��s�ړ�������擾����
__inline VECTOR MGetTranslateElem( MATRIX &InM )
{
	VECTOR Result ;

	Result.x = InM.m[ 3 ][ 0 ] ;
	Result.y = InM.m[ 3 ][ 1 ] ;
	Result.z = InM.m[ 3 ][ 2 ] ;

	return Result ;
}

// �s��̕��s�ړ�������擾����
__inline VECTOR_D MGetTranslateElemD( MATRIX_D &InM )
{
	VECTOR_D Result ;

	Result.x = InM.m[ 3 ][ 0 ] ;
	Result.y = InM.m[ 3 ][ 1 ] ;
	Result.z = InM.m[ 3 ][ 2 ] ;

	return Result ;
}

// �x�N�g���l�̕ϊ�
__inline VECTOR_D VConvFtoD( const VECTOR &In )
{
	VECTOR_D Result ;

	Result.x = In.x ;
	Result.y = In.y ;
	Result.z = In.z ;

	return Result ;
}

__inline VECTOR VConvDtoF( const VECTOR_D &In )
{
	VECTOR Result ;

	Result.x = ( float )In.x ;
	Result.y = ( float )In.y ;
	Result.z = ( float )In.z ;

	return Result ;
}

#endif // __cplusplus

// �x�N�g���l�̐���
__inline VECTOR VGet( float x, float y, float z )
{
	VECTOR Result;
	Result.x = x ;
	Result.y = y ;
	Result.z = z ;
	return Result ;
}

__inline VECTOR_D VGetD( double x, double y, double z )
{
	VECTOR_D Result;
	Result.x = x ;
	Result.y = y ;
	Result.z = z ;
	return Result ;
}

__inline FLOAT2 F2Get( float u, float v )
{
	FLOAT2 Result;
	Result.u = u ;
	Result.v = v ;
	return Result ;
}

// �S�v�f�x�N�g���l�̐���
__inline FLOAT4 F4Get( float x, float y, float z, float w )
{
	FLOAT4 Result;
	Result.x = x ;
	Result.y = y ;
	Result.z = z ;
	Result.w = w ;
	return Result ;
}

__inline DOUBLE4 D4Get( double x, double y, double z, double w )
{
	DOUBLE4 Result;
	Result.x = x ;
	Result.y = y ;
	Result.z = z ;
	Result.w = w ;
	return Result ;
}

#ifdef __cplusplus

// �x�N�g���̉��Z
__inline VECTOR		VAdd( const VECTOR &In1, const VECTOR &In2 )
{
	VECTOR Result ;
	Result.x = In1.x + In2.x ;
	Result.y = In1.y + In2.y ;
	Result.z = In1.z + In2.z ;
	return Result ;
}

__inline VECTOR_D	VAddD( const VECTOR_D &In1, const VECTOR_D &In2 )
{
	VECTOR_D Result ;
	Result.x = In1.x + In2.x ;
	Result.y = In1.y + In2.y ;
	Result.z = In1.z + In2.z ;
	return Result ;
}

// �x�N�g���̌��Z
__inline VECTOR		VSub( const VECTOR &In1, const VECTOR &In2 )
{
	VECTOR Result ;
	Result.x = In1.x - In2.x ;
	Result.y = In1.y - In2.y ;
	Result.z = In1.z - In2.z ;
	return Result ;
}

__inline VECTOR_D	VSubD( const VECTOR_D &In1, const VECTOR_D &In2 )
{
	VECTOR_D Result ;
	Result.x = In1.x - In2.x ;
	Result.y = In1.y - In2.y ;
	Result.z = In1.z - In2.z ;
	return Result ;
}

__inline FLOAT2		F2Add( const FLOAT2 &In1, const FLOAT2 &In2 )
{
	FLOAT2 Result ;
	Result.u = In1.u + In2.u ;
	Result.v = In1.v + In2.v ;
	return Result ;
}

// �S�v�f�x�N�g���̉��Z
__inline FLOAT4		F4Add( const FLOAT4 &In1, const FLOAT4 &In2 )
{
	FLOAT4 Result ;
	Result.x = In1.x + In2.x ;
	Result.y = In1.y + In2.y ;
	Result.z = In1.z + In2.z ;
	Result.w = In1.w + In2.w ;
	return Result ;
}

__inline DOUBLE4	D4Add( const DOUBLE4 &In1, const DOUBLE4 &In2 )
{
	DOUBLE4 Result ;
	Result.x = In1.x + In2.x ;
	Result.y = In1.y + In2.y ;
	Result.z = In1.z + In2.z ;
	Result.w = In1.w + In2.w ;
	return Result ;
}

__inline FLOAT2		F2Sub( const FLOAT2 &In1, const FLOAT2 &In2 )
{
	FLOAT2 Result ;
	Result.u = In1.u - In2.u ;
	Result.v = In1.v - In2.v ;
	return Result ;
}

// �S�v�f�x�N�g���̌��Z
__inline FLOAT4		F4Sub( const FLOAT4 &In1, const FLOAT4 &In2 )
{
	FLOAT4 Result ;
	Result.x = In1.x - In2.x ;
	Result.y = In1.y - In2.y ;
	Result.z = In1.z - In2.z ;
	Result.w = In1.w - In2.w ;
	return Result ;
}

__inline DOUBLE4	D4Sub( const DOUBLE4 &In1, const DOUBLE4 &In2 )
{
	DOUBLE4 Result ;
	Result.x = In1.x - In2.x ;
	Result.y = In1.y - In2.y ;
	Result.z = In1.z - In2.z ;
	Result.w = In1.w - In2.w ;
	return Result ;
}

// �x�N�g���̓��
__inline float		VDot( const VECTOR &In1, const VECTOR &In2 )
{
	return In1.x * In2.x + In1.y * In2.y + In1.z * In2.z ;
}

__inline double		VDotD( const VECTOR_D &In1, const VECTOR_D &In2 )
{
	return In1.x * In2.x + In1.y * In2.y + In1.z * In2.z ;
}

// �x�N�g���̊O��
__inline VECTOR		VCross( const VECTOR &In1, const VECTOR &In2 )
{
	VECTOR Result ;
	Result.x = In1.y * In2.z - In1.z * In2.y ;
	Result.y = In1.z * In2.x - In1.x * In2.z ;
	Result.z = In1.x * In2.y - In1.y * In2.x ;
	return Result ;
}

__inline VECTOR_D	VCrossD( const VECTOR_D &In1, const VECTOR_D &In2 )
{
	VECTOR_D Result ;
	Result.x = In1.y * In2.z - In1.z * In2.y ;
	Result.y = In1.z * In2.x - In1.x * In2.z ;
	Result.z = In1.x * In2.y - In1.y * In2.x ;
	return Result ;
}

// �x�N�g���̃X�P�[�����O
__inline VECTOR		VScale( const VECTOR &In, float Scale )
{
	VECTOR Result ;
	Result.x = In.x * Scale ;
	Result.y = In.y * Scale ;
	Result.z = In.z * Scale ;
	return Result ;
}

__inline VECTOR_D	VScaleD( const VECTOR_D &In, double Scale )
{
	VECTOR_D Result ;
	Result.x = In.x * Scale ;
	Result.y = In.y * Scale ;
	Result.z = In.z * Scale ;
	return Result ;
}

__inline FLOAT2		F2Scale( const FLOAT2 &In, float Scale )
{
	FLOAT2 Result ;
	Result.u = In.u * Scale ;
	Result.v = In.v * Scale ;
	return Result ;
}

// �S�v�f�x�N�g���̃X�P�[�����O
__inline FLOAT4		F4Scale( const FLOAT4 &In, float Scale )
{
	FLOAT4 Result ;
	Result.x = In.x * Scale ;
	Result.y = In.y * Scale ;
	Result.z = In.z * Scale ;
	Result.w = In.w * Scale ;
	return Result ;
}

__inline DOUBLE4	D4Scale( const DOUBLE4 &In, double Scale )
{
	DOUBLE4 Result ;
	Result.x = In.x * Scale ;
	Result.y = In.y * Scale ;
	Result.z = In.z * Scale ;
	Result.w = In.w * Scale ;
	return Result ;
}

#endif // __cplusplus

// �x�N�g���̐��K��
extern VECTOR		VNorm(  VECTOR   In ) ;
extern VECTOR_D		VNormD( VECTOR_D In ) ;

// �x�N�g���̃T�C�Y
extern float		VSize(  VECTOR   In ) ;
extern double		VSizeD( VECTOR_D In ) ;

#ifdef __cplusplus

// �x�N�g���̃T�C�Y�̂Q��
__inline float		VSquareSize(  const VECTOR   &In )
{
	return In.x * In.x + In.y * In.y + In.z * In.z ;
}

__inline double		VSquareSizeD( const VECTOR_D &In )
{
	return In.x * In.x + In.y * In.y + In.z * In.z ;
}

// �s���g�������W�ϊ�
__inline VECTOR		VTransform( const VECTOR &InV, const MATRIX &InM )
{
	VECTOR Result ;
	Result.x = InV.x * InM.m[0][0] + InV.y * InM.m[1][0] + InV.z * InM.m[2][0] + InM.m[3][0] ;
	Result.y = InV.x * InM.m[0][1] + InV.y * InM.m[1][1] + InV.z * InM.m[2][1] + InM.m[3][1] ;
	Result.z = InV.x * InM.m[0][2] + InV.y * InM.m[1][2] + InV.z * InM.m[2][2] + InM.m[3][2] ;
	return Result ;
}

__inline VECTOR_D	VTransformD( const VECTOR_D &InV, const MATRIX_D &InM )
{
	VECTOR_D Result ;
	Result.x = InV.x * InM.m[0][0] + InV.y * InM.m[1][0] + InV.z * InM.m[2][0] + InM.m[3][0] ;
	Result.y = InV.x * InM.m[0][1] + InV.y * InM.m[1][1] + InV.z * InM.m[2][1] + InM.m[3][1] ;
	Result.z = InV.x * InM.m[0][2] + InV.y * InM.m[1][2] + InV.z * InM.m[2][2] + InM.m[3][2] ;
	return Result ;
}

// �s���g�������W�ϊ�( �X�P�[�����O�{��]�����̂� )
__inline VECTOR		VTransformSR( const VECTOR &InV, const MATRIX &InM )
{
	VECTOR Result ;
	Result.x = InV.x * InM.m[0][0] + InV.y * InM.m[1][0] + InV.z * InM.m[2][0] ;
	Result.y = InV.x * InM.m[0][1] + InV.y * InM.m[1][1] + InV.z * InM.m[2][1] ;
	Result.z = InV.x * InM.m[0][2] + InV.y * InM.m[1][2] + InV.z * InM.m[2][2] ;
	return Result ;
}

__inline VECTOR_D	VTransformSRD( const VECTOR_D &InV, const MATRIX_D &InM )
{
	VECTOR_D Result ;
	Result.x = InV.x * InM.m[0][0] + InV.y * InM.m[1][0] + InV.z * InM.m[2][0] ;
	Result.y = InV.x * InM.m[0][1] + InV.y * InM.m[1][1] + InV.z * InM.m[2][1] ;
	Result.z = InV.x * InM.m[0][2] + InV.y * InM.m[1][2] + InV.z * InM.m[2][2] ;
	return Result ;
}

#endif // __cplusplus

// ��̃x�N�g���������p�̃R�T�C���l�𓾂�
extern	float		VCos(  VECTOR   In1, VECTOR   In2 ) ;
extern	double		VCosD( VECTOR_D In1, VECTOR_D In2 ) ;

// ��̃x�N�g���������p�̊p�x�𓾂�( �P�ʁF���W�A�� )
extern	float		VRad(  VECTOR   In1, VECTOR   In2 ) ;
extern	double		VRadD( VECTOR_D In1, VECTOR_D In2 ) ;


#ifdef __cplusplus

// 2�̃N�H�[�^�j�I���̏�Z�̌��ʂ�Ԃ�
__inline FLOAT4 QTCross( const FLOAT4 &A, const FLOAT4 &B )
{
    FLOAT4 Result ;
    Result.w = A.w * B.w - ( A.x * B.x + A.y * B.y + A.z * B.z ) ;
	Result.x = B.x * A.w + A.x * B.w + ( A.y * B.z - A.z * B.y ) ;
	Result.y = B.y * A.w + A.y * B.w + ( A.z * B.x - A.x * B.z ) ;
	Result.z = B.z * A.w + A.z * B.w + ( A.x * B.y - A.y * B.x ) ;
    return Result ;
}
__inline DOUBLE4 QTCrossD( const DOUBLE4 &A, const DOUBLE4 &B )
{
    DOUBLE4 Result ;
    Result.w = A.w * B.w - ( A.x * B.x + A.y * B.y + A.z * B.z ) ;
	Result.x = B.x * A.w + A.x * B.w + ( A.y * B.z - A.z * B.y ) ;
	Result.y = B.y * A.w + A.y * B.w + ( A.z * B.x - A.x * B.z ) ;
	Result.z = B.z * A.w + A.z * B.w + ( A.x * B.y - A.y * B.x ) ;
    return Result ;
}

// ����N�H�[�^�j�I����Ԃ�
__inline FLOAT4 QTConj( const FLOAT4 &A )
{
	FLOAT4 Result ;
	Result.w =  A.w ;
	Result.x = -A.x ;
	Result.y = -A.y ;
	Result.z = -A.z ;
	return Result ;
}
__inline DOUBLE4 QTConjD( const DOUBLE4 &A )
{
	DOUBLE4 Result ;
	Result.w =  A.w ;
	Result.x = -A.x ;
	Result.y = -A.y ;
	Result.z = -A.z ;
	return Result ;
}

#endif // __cplusplus

// ��]��\���N�H�[�^�j�I����Ԃ�
extern FLOAT4  QTRot(  VECTOR   Axis, float  Angle ) ;
extern DOUBLE4 QTRotD( VECTOR_D Axis, double Angle ) ;

// 3������ԏ�̓_��C�ӂ̎��̎���ɔC�ӂ̊p�x������]������֐�
extern VECTOR   VRotQ(  VECTOR   P, VECTOR   Axis, float  Angle ) ;
extern VECTOR_D VRotQD( VECTOR_D P, VECTOR_D Axis, double Angle ) ;










// DxBaseImage.cpp �֐��v���g�^�C�v�錾

// ��{�C���[�W�f�[�^�̃��[�h�{�c�h�a�֌W
extern	int			CreateGraphImageOrDIBGraph(            const TCHAR *FileName,                        const void *DataImage, int DataImageSize, int DataImageType /* LOADIMAGE_TYPE_FILE �� */ , int BmpFlag, int ReverseFlag, BASEIMAGE *BaseImage, BITMAPINFO **BmpInfo, void **GraphData ) ;					// �摜�t�@�C���Ⴕ���̓�������ɓW�J���ꂽ�摜�t�@�C���C���[�W��ǂݍ��݁A��{�C���[�W�f�[�^�Ⴕ���͂a�l�o�f�[�^��\�z����
extern	int			CreateGraphImageOrDIBGraphWithStrLen(  const TCHAR *FileName, size_t FileNameLength, const void *DataImage, int DataImageSize, int DataImageType /* LOADIMAGE_TYPE_FILE �� */ , int BmpFlag, int ReverseFlag, BASEIMAGE *BaseImage, BITMAPINFO **BmpInfo, void **GraphData ) ;					// �摜�t�@�C���Ⴕ���̓�������ɓW�J���ꂽ�摜�t�@�C���C���[�W��ǂݍ��݁A��{�C���[�W�f�[�^�Ⴕ���͂a�l�o�f�[�^��\�z����
extern	int			CreateGraphImageType2(                 STREAMDATA *Src, BASEIMAGE *Dest ) ;																																																						// �摜�f�[�^����\�z�����X�g���[���ǂݍ��ݗp�f�[�^��g�p���Ċ�{�C���[�W�f�[�^��\�z����
extern	int			CreateBmpInfo(                         BITMAPINFO *BmpInfo, int Width, int Height, int Pitch, const void *SrcGrData, void **DestGrData ) ;																																						// 24bit�J���[�`���̃r�b�g�}�b�v�f�[�^����a�l�o�f�[�^��\�z����
extern	int			GetImageSize_File(                     const TCHAR *FileName,                        int *SizeX, int *SizeY ) ;																																													// �摜�t�@�C���̉��s�N�Z�����Əc�s�N�Z������擾����
extern	int			GetImageSize_FileWithStrLen(           const TCHAR *FileName, size_t FileNameLength, int *SizeX, int *SizeY ) ;																																													// �摜�t�@�C���̉��s�N�Z�����Əc�s�N�Z������擾����
extern	int			GetImageSize_Mem(                      const void *FileImage, int FileImageSize, int *SizeX, int *SizeY ) ;																																														// ��������ɓW�J���ꂽ�摜�t�@�C���̉��s�N�Z�����Əc�s�N�Z������擾����
extern	unsigned int GetGraphImageFullColorCode(           const BASEIMAGE *GraphImage, int x, int y ) ;																																																			// ��{�C���[�W�f�[�^�̎w����W�̃t���J���[�R�[�h��擾����
extern	int			CreateGraphImage_plus_Alpha(           const TCHAR *FileName,                        const void *RgbImage, int RgbImageSize, int RgbImageType, const void *AlphaImage, int AlphaImageSize, int AlphaImageType, BASEIMAGE *RgbGraphImage, BASEIMAGE *AlphaGraphImage, int ReverseFlag ) ;		// �摜�t�@�C���Ⴕ���̓�������ɓW�J���ꂽ�摜�t�@�C���C���[�W��ǂݍ��݁A��{�C���[�W�f�[�^��\�z����
extern	int			CreateGraphImage_plus_AlphaWithStrLen( const TCHAR *FileName, size_t FileNameLength, const void *RgbImage, int RgbImageSize, int RgbImageType, const void *AlphaImage, int AlphaImageSize, int AlphaImageType, BASEIMAGE *RgbGraphImage, BASEIMAGE *AlphaGraphImage, int ReverseFlag ) ;		// �摜�t�@�C���Ⴕ���̓�������ɓW�J���ꂽ�摜�t�@�C���C���[�W��ǂݍ��݁A��{�C���[�W�f�[�^��\�z����
extern	int			ReverseGraphImage(                     BASEIMAGE *GraphImage ) ;																																																								// ��{�C���[�W�f�[�^����E���]����

//extern int		AddUserGraphLoadFunction( int ( *UserLoadFunc )( FILE *fp, BITMAPINFO **BmpInfo, void **GraphData ) ) ;																						// ���[�U�[��`�̉摜�f�[�^�ǂݍ��݊֐���o�^����
//extern int		AddUserGraphLoadFunction2( int ( *UserLoadFunc )( void *Image, int ImageSize, int ImageType, BITMAPINFO **BmpInfo, void **GraphData ) ) ;													// ���[�U�[��`�̉摜�f�[�^�ǂݍ��݊֐���o�^����
//extern int		AddUserGraphLoadFunction3( int ( *UserLoadFunc )( void *DataImage, int DataImageSize, int DataImageType, int BmpFlag, BASEIMAGE *BaseImage, BITMAPINFO **BmpInfo, void **GraphData ) ) ;	// ���[�U�[��`�̉摜�f�[�^�ǂݍ��݊֐�Ver3��o�^����
extern	int			AddUserGraphLoadFunction4( int (* UserLoadFunc )( STREAMDATA *Src, BASEIMAGE *BaseImage ) ) ; 																								// ���[�U�[��`�̉摜�f�[�^�ǂݍ��݊֐�Ver4��o�^����
//extern int		SubUserGraphLoadFunction( int ( *UserLoadFunc )( FILE *fp, BITMAPINFO **BmpInfo, void **GraphData ) ) ;																						// ���[�U�[��`�̉摜�f�[�^�ǂݍ��݊֐���o�^���疕������
//extern int		SubUserGraphLoadFunction2( int ( *UserLoadFunc )( void *Image, int ImageSize, int ImageType, BITMAPINFO **BmpInfo, void **GraphData ) ) ;													// ���[�U�[��`�̉摜�f�[�^�ǂݍ��݊֐���o�^���疕������
//extern int		SubUserGraphLoadFunction3( int ( *UserLoadFunc )( void *DataImage, int DataImageSize, int DataImageType, int BmpFlag, BASEIMAGE *BaseImage, BITMAPINFO **BmpInfo, void **GraphData ) ) ;	// ���[�U�[��`�̉摜�f�[�^�ǂݍ��݊֐�Ver3��o�^���疕������
extern	int			SubUserGraphLoadFunction4( int (* UserLoadFunc )( STREAMDATA *Src, BASEIMAGE *BaseImage ) ) ; 																								// ���[�U�[��`�̉摜�f�[�^�ǂݍ��݊֐�Ver4��o�^���疕������

extern	int			SetUseFastLoadFlag(              int Flag ) ;														// �����ǂݍ��݃��[�`����g�p���邩�ǂ�����ݒ肷��( TRUE:�g�p����( �f�t�H���g )  FALSE:�g�p���Ȃ� )
extern	int			SetGraphDataShavedMode(          int ShavedMode /* DX_SHAVEDMODE_NONE �� */ ) ;						// �摜���F���̉摜�򉻊ɘa�������[�h��ݒ肷��( �f�t�H���g�ł͊ɘa���������� DX_SHAVEDMODE_NONE )
extern	int			GetGraphDataShavedMode(          void ) ;															// �摜���F���̉摜�򉻊ɘa�������[�h��擾����
extern	int			SetUsePremulAlphaConvertLoad(    int UseFlag ) ;													// �摜�t�@�C���ǂݍ��ݎ��ɏ�Z�ς݃A���t�@�摜�ɕϊ����邩�ǂ�����ݒ肷��( TRUE:�ϊ�������s��  FALSE:�ϊ�������s��Ȃ�( �f�t�H���g ) )
extern	int			GetUsePremulAlphaConvertLoad(    void ) ;															// �摜�t�@�C���ǂݍ��ݎ��ɏ�Z�ς݃A���t�@�摜�ɕϊ����邩�ǂ�����擾����( TRUE:�ϊ�������s��  FALSE:�ϊ�������s��Ȃ�( �f�t�H���g ) )
extern	int			SetUseConvertNormalFormatLoad(   int UseFlag ) ;													// �摜�t�@�C���ǂݍ��ݎ��� DX_BASEIMAGE_FORMAT_NORMAL �ȊO�̌`���̃C���[�W�� DX_BASEIMAGE_FORMAT_NORMAL �`���̃C���[�W�ɕϊ����邩�ǂ�����ݒ肷��( TRUE:�ϊ�������s��  FALSE:�ϊ�������s�Ȃ�Ȃ�( �f�t�H���g ) )
extern	int			GetUseConvertNormalFormatLoad(   void ) ;															// �摜�t�@�C���ǂݍ��ݎ��� DX_BASEIMAGE_FORMAT_NORMAL �ȊO�̌`���̃C���[�W�� DX_BASEIMAGE_FORMAT_NORMAL �`���̃C���[�W�ɕϊ����邩�ǂ�����擾����( TRUE:�ϊ�������s��  FALSE:�ϊ�������s�Ȃ�Ȃ�( �f�t�H���g ) )

// ��{�C���[�W�f�[�^�\���̊֌W
extern	int			CreateBaseImage(                 const TCHAR *FileName,                        const void *FileImage, int FileImageSize, int DataType /*=LOADIMAGE_TYPE_FILE*/ , BASEIMAGE *BaseImage,  int ReverseFlag ) ;			// �摜�t�@�C���Ⴕ���̓�������ɓW�J���ꂽ�摜�t�@�C���C���[�W�����{�C���[�W�f�[�^��\�z����
extern	int			CreateBaseImageWithStrLen(       const TCHAR *FileName, size_t FileNameLength, const void *FileImage, int FileImageSize, int DataType /*=LOADIMAGE_TYPE_FILE*/ , BASEIMAGE *BaseImage,  int ReverseFlag ) ;			// �摜�t�@�C���Ⴕ���̓�������ɓW�J���ꂽ�摜�t�@�C���C���[�W�����{�C���[�W�f�[�^��\�z����
extern	int			CreateGraphImage(                const TCHAR *FileName,                        const void *DataImage, int DataImageSize, int DataImageType,                      BASEIMAGE *GraphImage, int ReverseFlag ) ;			// CreateBaseImage �̋�����
extern	int			CreateBaseImageToFile(           const TCHAR *FileName,                                                                                                          BASEIMAGE *BaseImage,  int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;	// �摜�t�@�C�������{�C���[�W�f�[�^��\�z����
extern	int			CreateBaseImageToFileWithStrLen( const TCHAR *FileName, size_t FileNameLength,                                                                                   BASEIMAGE *BaseImage,  int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;	// �摜�t�@�C�������{�C���[�W�f�[�^��\�z����
extern	int			CreateBaseImageToMem(                                                          const void *FileImage, int FileImageSize,                                         BASEIMAGE *BaseImage,  int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;	// ��������ɓW�J���ꂽ�摜�t�@�C���C���[�W�����{�C���[�W�f�[�^��\�z����
extern	int			CreateARGBF32ColorBaseImage(     int SizeX, int SizeY,                             BASEIMAGE *BaseImage ) ;																							// �`�q�f�a�e�`�����l�� 32bit ���������_�^ �J���[�̊�{�C���[�W�f�[�^��쐬����
extern	int			CreateARGBF16ColorBaseImage(     int SizeX, int SizeY,                             BASEIMAGE *BaseImage ) ;																							// �`�q�f�a�e�`�����l�� 16bit ���������_�^ �J���[�̊�{�C���[�W�f�[�^��쐬����
extern	int			CreateXRGB8ColorBaseImage(       int SizeX, int SizeY,                             BASEIMAGE *BaseImage ) ;																							// �w�q�f�a�W�J���[�̊�{�C���[�W�f�[�^��쐬����
extern	int			CreateARGB8ColorBaseImage(       int SizeX, int SizeY,                             BASEIMAGE *BaseImage ) ;																							// �`�q�f�a�W�J���[�̊�{�C���[�W�f�[�^��쐬����
extern	int			CreateRGBA8ColorBaseImage(       int SizeX, int SizeY,                             BASEIMAGE *BaseImage ) ;																							// �q�f�a�`�W�J���[�̊�{�C���[�W�f�[�^��쐬����
extern	int			CreateABGR8ColorBaseImage(       int SizeX, int SizeY,                             BASEIMAGE *BaseImage ) ;																							// �`�a�f�q�W�J���[�̊�{�C���[�W�f�[�^��쐬����
extern	int			CreateBGRA8ColorBaseImage(       int SizeX, int SizeY,                             BASEIMAGE *BaseImage ) ;																							// �a�f�q�`�W�J���[�̊�{�C���[�W�f�[�^��쐬����
extern	int			CreateARGB4ColorBaseImage(       int SizeX, int SizeY,                             BASEIMAGE *BaseImage ) ;																							// �`�q�f�a�S�J���[�̊�{�C���[�W�f�[�^��쐬����
extern	int			CreateA1R5G5B5ColorBaseImage(    int SizeX, int SizeY,                             BASEIMAGE *BaseImage ) ;																							// �`�P�q�T�f�T�a�T�J���[�̊�{�C���[�W�f�[�^��쐬����
extern	int			CreateX1R5G5B5ColorBaseImage(    int SizeX, int SizeY,                             BASEIMAGE *BaseImage ) ;																							// �w�P�q�T�f�T�a�T�J���[�̊�{�C���[�W�f�[�^��쐬����
extern	int			CreateR5G5B5A1ColorBaseImage(    int SizeX, int SizeY,                             BASEIMAGE *BaseImage ) ;																							// �q�T�f�T�a�T�`�P�J���[�̊�{�C���[�W�f�[�^��쐬����
extern	int			CreateR5G6B5ColorBaseImage(      int SizeX, int SizeY,                             BASEIMAGE *BaseImage ) ;																							// �q�T�f�U�a�T�J���[�̊�{�C���[�W�f�[�^��쐬����
extern	int			CreateRGB8ColorBaseImage(        int SizeX, int SizeY,                             BASEIMAGE *BaseImage ) ;																							// �q�f�a�W�J���[�̊�{�C���[�W�f�[�^��쐬����
extern	int			CreatePAL8ColorBaseImage(        int SizeX, int SizeY,                             BASEIMAGE *BaseImage, int UseAlpha DEFAULTPARAM( = FALSE ) ) ;													// �p���b�g�W�r�b�g�J���[�̊�{�C���[�W�f�[�^��쐬����
extern	int			CreateColorDataBaseImage(        int SizeX, int SizeY, const COLORDATA *ColorData, BASEIMAGE *BaseImage ) ;																							// �w��̃J���[�t�H�[�}�b�g�̊�{�C���[�W�f�[�^��쐬����
extern	int			GetBaseImageGraphDataSize(       const BASEIMAGE *BaseImage ) ;																																		// ��{�C���[�W�f�[�^�̃C���[�W�T�C�Y��擾����( �P�ʁFbyte )
extern	int			DerivationBaseImage(             const BASEIMAGE *BaseImage, int x1, int y1, int x2, int y2, BASEIMAGE *NewBaseImage ) ;																			// ��{�C���[�W�f�[�^�̎w��̕���������g����{�C���[�W�f�[�^�̏���쐬����( BaseImage �ɂ̓t�H�[�}�b�g�� DX_BASEIMAGE_FORMAT_NORMAL �Ń~�b�v�}�b�v��g�p���Ă��Ȃ��摜�̂ݎg�p�\ )

extern	int			ReleaseBaseImage(                BASEIMAGE *BaseImage ) ;																																			// ��{�C���[�W�f�[�^�̌�n����s��
extern	int			ReleaseGraphImage(               BASEIMAGE *GraphImage ) ;																																			// ReleaseBaseImage �̋�����

extern	int			ConvertNormalFormatBaseImage(    BASEIMAGE *BaseImage, int ReleaseOrigGraphData DEFAULTPARAM( = TRUE ) ) ;																							// DX_BASEIMAGE_FORMAT_NORMAL �ȊO�̌`���̃C���[�W�� DX_BASEIMAGE_FORMAT_NORMAL �`���̃C���[�W�ɕϊ�����
extern	int			ConvertPremulAlphaBaseImage(     BASEIMAGE *BaseImage ) ;																																			// �ʏ�̃��`�����l���t���摜���Z�ς݃��`�����l���t���摜�ɕϊ�����( �s�N�Z���t�H�[�}�b�g�� ARGB8 �ȊO�̏ꍇ�� ARGB8 �ɕϊ�����܂� )
extern	int			ConvertInterpAlphaBaseImage(     BASEIMAGE *BaseImage ) ;																																			// ��Z�ς݃��`�����l���t���摜��ʏ�̃��`�����l���t���摜�ɕϊ�����( �s�N�Z���t�H�[�}�b�g�� ARGB8 �ȊO�̏ꍇ�� ARGB8 �ɕϊ�����܂� )

extern	int			GetDrawScreenBaseImage(          int x1, int y1, int x2, int y2, BASEIMAGE *BaseImage ) ;																											// �`��Ώۂ̉�ʂ���w��̈���{�C���[�W�f�[�^�ɓ]������
extern	int			GetDrawScreenBaseImageDestPos(   int x1, int y1, int x2, int y2, BASEIMAGE *BaseImage, int DestX, int DestY ) ;																						// �`��Ώۂ̉�ʂ���w��̈���{�C���[�W�f�[�^�ɓ]������( �]������W�w��� )
extern	int			FillBaseImage(                         BASEIMAGE *BaseImage, int r, int g, int b, int a ) ;																											// ��{�C���[�W�f�[�^��w��̐F�œh��Ԃ�
extern	int			FillRectBaseImage(                     BASEIMAGE *BaseImage, int x, int y, int w, int h, int r, int g, int b, int a ) ;																				// ��{�C���[�W�f�[�^�̎w��̗̈��w��̐F�œh��Ԃ�
extern	int			ClearRectBaseImage(                    BASEIMAGE *BaseImage, int x, int y, int w, int h ) ;																											// ��{�C���[�W�f�[�^�̎w��̗̈��O�N���A����
extern	int			GetPaletteBaseImage(             const BASEIMAGE *BaseImage, int PaletteNo, int *r, int *g, int *b, int *a ) ;																						// ��{�C���[�W�f�[�^�̃p���b�g��擾����
extern	int			SetPaletteBaseImage(                   BASEIMAGE *BaseImage, int PaletteNo, int  r, int  g, int  b, int  a ) ;																						// ��{�C���[�W�f�[�^�̃p���b�g��Z�b�g����
extern	int			SetPixelPalCodeBaseImage(              BASEIMAGE *BaseImage, int x, int y, int palNo ) ;																											// ��{�C���[�W�f�[�^�̎w��̍��W�̐F�R�[�h��ύX����(�p���b�g�摜�p)
extern	int			GetPixelPalCodeBaseImage(        const BASEIMAGE *BaseImage, int x, int y ) ;																														// ��{�C���[�W�f�[�^�̎w��̍��W�̐F�R�[�h��擾����(�p���b�g�摜�p)
extern	int			SetPixelBaseImage(                     BASEIMAGE *BaseImage, int x, int y, int    r, int    g, int    b, int    a ) ;																				// ��{�C���[�W�f�[�^�̎w��̍��W�̐F��ύX����(�e�F�v�f�͂O�`�Q�T�T)
extern	int			SetPixelBaseImageF(                    BASEIMAGE *BaseImage, int x, int y, float  r, float  g, float  b, float  a ) ;																				// ��{�C���[�W�f�[�^�̎w��̍��W�̐F��ύX����(�e�F�v�f�͕��������_��)
extern	int			GetPixelBaseImage(               const BASEIMAGE *BaseImage, int x, int y, int   *r, int   *g, int   *b, int   *a ) ;																				// ��{�C���[�W�f�[�^�̎w��̍��W�̐F��擾����(�e�F�v�f�͂O�`�Q�T�T)
extern	int			GetPixelBaseImageF(              const BASEIMAGE *BaseImage, int x, int y, float *r, float *g, float *b, float *a ) ;																				// ��{�C���[�W�f�[�^�̎w��̍��W�̐F��擾����(�e�F�v�f�͕��������_��)
extern	int			DrawLineBaseImage(                     BASEIMAGE *BaseImage, int x1, int y1, int x2, int y2, int r, int g, int b, int a ) ;																			// ��{�C���[�W�f�[�^�̎w��̍��W�ɐ���`�悷��(�e�F�v�f�͂O�`�Q�T�T)
extern	int			DrawCircleBaseImage(                   BASEIMAGE *BaseImage, int x, int y, int radius, int r, int g, int b, int a, int FillFlag DEFAULTPARAM( = TRUE ) ) ;											// ��{�C���[�W�f�[�^�̎w��̍��W�ɉ~��`�悷��(�e�F�v�f�͂O�`�Q�T�T)
extern	int			BltBaseImage(                          int SrcX, int SrcY, int SrcSizeX, int SrcSizeY, int DestX, int DestY, BASEIMAGE *SrcBaseImage, BASEIMAGE *DestBaseImage ) ;									// ��{�C���[�W�f�[�^��ʂ̊�{�C���[�W�f�[�^�ɓ]������
#ifndef DX_COMPILE_TYPE_C_LANGUAGE
extern	int			BltBaseImage(                                                                          int DestX, int DestY, BASEIMAGE *SrcBaseImage, BASEIMAGE *DestBaseImage ) ;									// ��{�C���[�W�f�[�^��ʂ̊�{�C���[�W�f�[�^�ɓ]������
#endif // DX_COMPILE_TYPE_C_LANGUAGE
extern	int			BltBaseImage2(                                                                         int DestX, int DestY, BASEIMAGE *SrcBaseImage, BASEIMAGE *DestBaseImage ) ;									// ��{�C���[�W�f�[�^��ʂ̊�{�C���[�W�f�[�^�ɓ]������
extern	int			BltBaseImageWithTransColor(            int SrcX, int SrcY, int SrcSizeX, int SrcSizeY, int DestX, int DestY, BASEIMAGE *SrcBaseImage, BASEIMAGE *DestBaseImage, int Tr, int Tg, int Tb, int Ta ) ;	// ��{�C���[�W�f�[�^��ʂ̊�{�C���[�W�f�[�^�ɓ��ߐF�����t���œ]������
extern	int			BltBaseImageWithAlphaBlend(            int SrcX, int SrcY, int SrcSizeX, int SrcSizeY, int DestX, int DestY, BASEIMAGE *SrcBaseImage, BASEIMAGE *DestBaseImage, int Opacity DEFAULTPARAM( = 255 ) ) ;	// ��{�C���[�W�f�[�^��ʂ̊�{�C���[�W�f�[�^�ɃA���t�@�l�̃u�����h��l��������œ]������( Opacity �͓����x : 0( ���S���� ) �` 255( ���S�s���� ) )( �o�͐悪 ARGB8 �`���ȊO�̏ꍇ�̓G���[�ɂȂ�܂� )
extern	int			ReverseBaseImageH(                     BASEIMAGE *BaseImage ) ;																																		// ��{�C���[�W�f�[�^����E���]����
extern	int			ReverseBaseImageV(                     BASEIMAGE *BaseImage ) ;																																		// ��{�C���[�W�f�[�^��㉺���]����
extern	int			ReverseBaseImage(                      BASEIMAGE *BaseImage ) ;																																		// ��{�C���[�W�f�[�^��㉺���E���]����
extern	int			CheckPixelAlphaBaseImage(        const BASEIMAGE *BaseImage ) ;																																		// ��{�C���[�W�f�[�^�Ɋ܂܂��s�N�Z���̃A���t�@�l��`�F�b�N����( �߂�l   -1:�G���[  0:�摜�ɃA���t�@����������  1:�摜�ɃA���t�@����������A���ׂčő�(255)�l  2:�摜�ɃA���t�@����������A���݂���A���t�@�l�͍ŏ�(0)�ƍő�(255)������͍ŏ�(0)�̂݁@3:�摜�ɃA���t�@����������A�ŏ��ƍő�ȊO�̒��Ԃ̒l������ )  
extern	int			GetBaseImageUseMaxPaletteNo(     const BASEIMAGE *BaseImage ) ;																																		// ��{�C���[�W�f�[�^�Ŏg�p����Ă���p���b�g�ԍ��̍ő�l��擾����( �p���b�g�摜�ł͖����ꍇ�� -1 ���Ԃ� )

#ifndef DX_NON_JPEGREAD
extern	int			ReadJpegExif(                    const TCHAR *JpegFilePath,                            BYTE *ExifBuffer_Array, size_t ExifBufferSize ) ;															// JPEG�t�@�C���� Exif����擾����AExifBuffer �� NULL �ɓn���ƁA�߂�l�̏��̃T�C�Y�̂ݎ擾�ł��܂�( �߂�l  -1:�G���[  -1�ȊO�FExif���̃T�C�Y )
extern	int			ReadJpegExifWithStrLen(          const TCHAR *JpegFilePath, size_t JpegFilePathLength, BYTE *ExifBuffer_Array, size_t ExifBufferSize ) ;															// JPEG�t�@�C���� Exif����擾����AExifBuffer �� NULL �ɓn���ƁA�߂�l�̏��̃T�C�Y�̂ݎ擾�ł��܂�( �߂�l  -1:�G���[  -1�ȊO�FExif���̃T�C�Y )
#endif // DX_NON_JPEGREAD

#ifndef DX_NON_SAVEFUNCTION

extern	int			SaveBaseImageToBmp(              const TCHAR *FilePath,                        const BASEIMAGE *BaseImage ) ;																						// ��{�C���[�W�f�[�^��a�l�o�摜�Ƃ��ĕۑ�����
extern	int			SaveBaseImageToBmpWithStrLen(    const TCHAR *FilePath, size_t FilePathLength, const BASEIMAGE *BaseImage ) ;																						// ��{�C���[�W�f�[�^��a�l�o�摜�Ƃ��ĕۑ�����
extern	int			SaveBaseImageToDds(              const TCHAR *FilePath,                        const BASEIMAGE *BaseImage ) ;																						// ��{�C���[�W�f�[�^��c�c�r�摜�Ƃ��ĕۑ�����
extern	int			SaveBaseImageToDdsWithStrLen(    const TCHAR *FilePath, size_t FilePathLength, const BASEIMAGE *BaseImage ) ;																						// ��{�C���[�W�f�[�^��c�c�r�摜�Ƃ��ĕۑ�����
#ifndef DX_NON_PNGREAD
extern	int			SaveBaseImageToPng(              const TCHAR *FilePath,                        BASEIMAGE *BaseImage, int CompressionLevel ) ;																		// ��{�C���[�W�f�[�^��o�m�f�摜�Ƃ��ĕۑ�����
extern	int			SaveBaseImageToPngWithStrLen(    const TCHAR *FilePath, size_t FilePathLength, BASEIMAGE *BaseImage, int CompressionLevel ) ;																		// ��{�C���[�W�f�[�^��o�m�f�摜�Ƃ��ĕۑ�����
#endif // DX_NON_PNGREAD
#ifndef DX_NON_JPEGREAD
extern	int			SaveBaseImageToJpeg(             const TCHAR *FilePath,                        BASEIMAGE *BaseImage, int Quality, int Sample2x1 ) ;																	// ��{�C���[�W�f�[�^��i�o�d�f�摜�Ƃ��ĕۑ�����
extern	int			SaveBaseImageToJpegWithStrLen(   const TCHAR *FilePath, size_t FilePathLength, BASEIMAGE *BaseImage, int Quality, int Sample2x1 ) ;																	// ��{�C���[�W�f�[�^��i�o�d�f�摜�Ƃ��ĕۑ�����
#endif // DX_NON_JPEGREAD

#endif // DX_NON_SAVEFUNCTION

// ��{�C���[�W�`��
extern	int			DrawBaseImage(					int x, int y, BASEIMAGE *BaseImage ) ;																																// ��{�C���[�W�f�[�^��`�悷��

// �J���[�}�b�`���O���Ȃ���C���[�W�f�[�^�ԓ]����s�� Ver2
extern int			GraphColorMatchBltVer2(       void *DestGraphData, int DestPitch,  const COLORDATA *DestColorData,
											const void *SrcGraphData,  int SrcPitch,   const COLORDATA *SrcColorData,
											const void *AlphaMask,     int AlphaPitch, const COLORDATA *AlphaColorData,
											POINT DestPoint, const RECT *SrcRect, int ReverseFlag,
											int TransColorAlphaTestFlag, unsigned int TransColor,
											int ImageShavedMode, int AlphaOnlyFlag DEFAULTPARAM( = FALSE ) ,
											int RedIsAlphaFlag DEFAULTPARAM( = FALSE ) , int TransColorNoMoveFlag DEFAULTPARAM( = FALSE ) ,
											int Pal8ColorMatch DEFAULTPARAM( = FALSE ) ) ;


// �F���擾�֌W
extern	COLOR_F			GetColorF(               float Red, float Green, float Blue, float Alpha ) ;													// ���������_�^�̃J���[�l��쐬����
extern	COLOR_U8		GetColorU8(              int Red, int Green, int Blue, int Alpha ) ;															// �����Ȃ������W�r�b�g�̃J���[�l��쐬����
extern	unsigned int	GetColor(                int Red, int Green, int Blue ) ;																		// DrawPixel ���̕`��֐��Ŏg�p����J���[�l��擾����
extern	int				GetColor2(               unsigned int Color, int *Red, int *Green, int *Blue ) ;												// �J���[�l����ԁA�΁A�̒l��擾����
extern	unsigned int	GetColor3(               const COLORDATA *ColorData, int Red, int Green, int Blue, int Alpha DEFAULTPARAM( = 255 ) ) ;			// �w��̃s�N�Z���t�H�[�}�b�g�ɑΉ������J���[�l�𓾂�
extern	unsigned int	GetColor4(               const COLORDATA *DestColorData, const COLORDATA* SrcColorData, unsigned int SrcColor ) ;				// �w��̃J���[�t�H�[�}�b�g�̃J���[�l��ʂ̃J���[�t�H�[�}�b�g�̃J���[�l�ɕϊ�����
extern	int				GetColor5(               const COLORDATA *ColorData, unsigned int Color, int *Red, int *Green, int *Blue, int *Alpha DEFAULTPARAM( = NULL ) ) ;	// �w��̃J���[�t�H�[�}�b�g�̃J���[�l��ԁA�΁A�A�A���t�@�̒l��擾����
extern	int				CreatePaletteColorData(  COLORDATA *ColorDataBuf ) ;																			// �p���b�g�J���[�̃J���[�t�H�[�}�b�g��\�z����
extern	int				CreateARGBF32ColorData(  COLORDATA *ColorDataBuf ) ;																			// �`�q�f�a�e�`�����l�� 32bit ���������_�^�J���[�̃J���[�t�H�[�}�b�g��\�z����
extern	int				CreateARGBF16ColorData(  COLORDATA *ColorDataBuf ) ;																			// �`�q�f�a�e�`�����l�� 16bit ���������_�^�J���[�̃J���[�t�H�[�}�b�g��\�z����
extern	int				CreateXRGB8ColorData(    COLORDATA *ColorDataBuf ) ;																			// �w�q�f�a�W�J���[�̃J���[�t�H�[�}�b�g��\�z����
extern	int				CreateARGB8ColorData(    COLORDATA *ColorDataBuf ) ;																			// �`�q�f�a�W�J���[�̃J���[�t�H�[�}�b�g��\�z����
extern	int				CreateRGBA8ColorData(    COLORDATA *ColorDataBuf ) ;																			// �q�f�a�`�W�J���[�̃J���[�t�H�[�}�b�g��\�z����
extern	int				CreateABGR8ColorData(    COLORDATA *ColorDataBuf ) ;																			// �`�a�f�q�W�J���[�̃J���[�t�H�[�}�b�g��\�z����
extern	int				CreateBGRA8ColorData(    COLORDATA *ColorDataBuf ) ;																			// �a�f�q�`�W�J���[�̃J���[�t�H�[�}�b�g��\�z����
extern	int				CreateBGR8ColorData(     COLORDATA *ColorDataBuf ) ;																			// �a�f�q�W�J���[�̃J���[�t�H�[�}�b�g��\�z����
extern	int				CreateARGB4ColorData(    COLORDATA *ColorDataBuf ) ;																			// �`�q�f�a�S�J���[�̃J���[�t�H�[�}�b�g��\�z����
extern	int				CreateA1R5G5B5ColorData( COLORDATA *ColorDataBuf ) ;																			// �`�P�q�T�f�T�a�T�J���[�̃J���[�t�H�[�}�b�g��\�z����
extern	int				CreateX1R5G5B5ColorData( COLORDATA *ColorDataBuf ) ;																			// �w�P�q�T�f�T�a�T�J���[�̃J���[�t�H�[�}�b�g��\�z����
extern	int				CreateR5G5B5A1ColorData( COLORDATA *ColorDataBuf ) ;																			// �q�T�f�T�a�T�`�P�J���[�̃J���[�t�H�[�}�b�g��\�z����
extern	int				CreateR5G6B5ColorData(   COLORDATA *ColorDataBuf ) ;																			// �q�T�f�U�a�T�J���[�̃J���[�t�H�[�}�b�g��\�z����
extern	int				CreateFullColorData(     COLORDATA *ColorDataBuf ) ;																			// �Q�S�r�b�g�J���[�̃J���[�t�H�[�}�b�g��\�z����
extern	int				CreateGrayColorData(     COLORDATA *ColorDataBuf ) ;																			// �O���[�X�P�[���̃J���[�t�H�[�}�b�g��\�z����
extern	int				CreatePal8ColorData(     COLORDATA *ColorDataBuf, int UseAlpha DEFAULTPARAM( = FALSE ) ) ;										// �p���b�g�Q�T�U�F�̃J���[�t�H�[�}�b�g��\�z����
extern	int				CreateColorData(         COLORDATA *ColorDataBuf, int ColorBitDepth,
										         DWORD RedMask, DWORD GreenMask, DWORD BlueMask, DWORD AlphaMask,
												 int ChannelNum DEFAULTPARAM( = 0 ), int ChannelBitDepth DEFAULTPARAM( = 0 ), int FloatTypeFlag DEFAULTPARAM( = FALSE ) ) ;				// �J���[�t�H�[�}�b�g��쐬����
extern	void			SetColorDataNoneMask(    COLORDATA *ColorData ) ;																				// NoneMask �ȊO�̗v�f�𖄂߂� COLORDATA �\���̂̏������ NoneMask ��Z�b�g����
extern	int				CmpColorData(            const COLORDATA *ColorData1, const COLORDATA *ColorData2 ) ;											// ��̃J���[�t�H�[�}�b�g�����������ǂ������ׂ�( �߂�l�@TRUE:������  FALSE:�������Ȃ� )













// DxSoftImage.cpp�֐��v���g�^�C�v�錾
#ifndef DX_NON_SOFTIMAGE
extern	int			InitSoftImage(                        void ) ;																			// �\�t�g�E�G�A�C���[�W�n���h����S�č폜����
extern	int			LoadSoftImage(                        const TCHAR *FileName                        ) ;									// �摜�t�@�C����ǂݍ��݃\�t�g�E�G�A�C���[�W�n���h����쐬����( -1:�G���[  -1�ȊO:�C���[�W�n���h�� )
extern	int			LoadSoftImageWithStrLen(              const TCHAR *FileName, size_t FileNameLength ) ;									// �摜�t�@�C����ǂݍ��݃\�t�g�E�G�A�C���[�W�n���h����쐬����( -1:�G���[  -1�ȊO:�C���[�W�n���h�� )
extern	int			LoadARGB8ColorSoftImage(              const TCHAR *FileName                        ) ;									// �摜�t�@�C����ǂݍ��݃\�t�g�E�G�A�C���[�W�n���h����쐬����( -1:�G���[  -1�ȊO:�C���[�W�n���h�� )( �ǂݍ��񂾉摜�� RGBA8 �ȊO�̃t�H�[�}�b�g�������ꍇ�� RGBA8 �J���[�ɕϊ� )
extern	int			LoadARGB8ColorSoftImageWithStrLen(    const TCHAR *FileName, size_t FileNameLength ) ;									// �摜�t�@�C����ǂݍ��݃\�t�g�E�G�A�C���[�W�n���h����쐬����( -1:�G���[  -1�ȊO:�C���[�W�n���h�� )( �ǂݍ��񂾉摜�� RGBA8 �ȊO�̃t�H�[�}�b�g�������ꍇ�� RGBA8 �J���[�ɕϊ� )
extern	int			LoadXRGB8ColorSoftImage(              const TCHAR *FileName                        ) ;									// �摜�t�@�C����ǂݍ��݃\�t�g�E�G�A�C���[�W�n���h����쐬����( -1:�G���[  -1�ȊO:�C���[�W�n���h�� )( �ǂݍ��񂾉摜�� XGBA8 �ȊO�̃t�H�[�}�b�g�������ꍇ�� XGBA8 �J���[�ɕϊ� )
extern	int			LoadXRGB8ColorSoftImageWithStrLen(    const TCHAR *FileName, size_t FileNameLength ) ;									// �摜�t�@�C����ǂݍ��݃\�t�g�E�G�A�C���[�W�n���h����쐬����( -1:�G���[  -1�ȊO:�C���[�W�n���h�� )( �ǂݍ��񂾉摜�� XGBA8 �ȊO�̃t�H�[�}�b�g�������ꍇ�� XGBA8 �J���[�ɕϊ� )
extern	int			LoadSoftImageToMem(                   const void *FileImage, int FileImageSize ) ;										// ��������ɓW�J���ꂽ�摜�t�@�C���C���[�W����\�t�g�E�G�A�C���[�W�n���h����쐬����( -1:�G���[  -1�ȊO:�C���[�W�n���h�� )
extern	int			LoadARGB8ColorSoftImageToMem(         const void *FileImage, int FileImageSize ) ;										// ��������ɓW�J���ꂽ�摜�t�@�C���C���[�W����\�t�g�E�G�A�C���[�W�n���h����쐬����( -1:�G���[  -1�ȊO:�C���[�W�n���h�� )( �ǂݍ��񂾉摜�� RGBA8 �ȊO�̃t�H�[�}�b�g�������ꍇ�� RGBA8 �J���[�ɕϊ� )
extern	int			LoadXRGB8ColorSoftImageToMem(         const void *FileImage, int FileImageSize ) ;										// ��������ɓW�J���ꂽ�摜�t�@�C���C���[�W����\�t�g�E�G�A�C���[�W�n���h����쐬����( -1:�G���[  -1�ȊO:�C���[�W�n���h�� )( �ǂݍ��񂾉摜�� XGBA8 �ȊO�̃t�H�[�}�b�g�������ꍇ�� XGBA8 �J���[�ɕϊ� )
extern	int			MakeSoftImage(                        int SizeX, int SizeY ) ;															// �\�t�g�E�G�A�C���[�W�n���h���̍쐬( -1:�G���[  -1�ȊO:�C���[�W�n���h�� )
extern	int			MakeARGBF32ColorSoftImage(            int SizeX, int SizeY ) ;															// �\�t�g�E�G�A�C���[�W�n���h���̍쐬( RGBA �e�`�����l�� 32bit ���������_�^ �J���[ )
extern	int			MakeARGBF16ColorSoftImage(            int SizeX, int SizeY ) ;															// �\�t�g�E�G�A�C���[�W�n���h���̍쐬( RGBA �e�`�����l�� 16bit ���������_�^ �J���[ )
extern	int			MakeXRGB8ColorSoftImage(              int SizeX, int SizeY ) ;															// �\�t�g�E�G�A�C���[�W�n���h���̍쐬( XRGB8 �J���[ )
extern	int			MakeARGB8ColorSoftImage(              int SizeX, int SizeY ) ;															// �\�t�g�E�G�A�C���[�W�n���h���̍쐬( RGBA8 �J���[ )
extern	int			MakeRGBA8ColorSoftImage(              int SizeX, int SizeY ) ;															// �\�t�g�E�G�A�C���[�W�n���h���̍쐬( RGBA8 �J���[ )
extern	int			MakeABGR8ColorSoftImage(              int SizeX, int SizeY ) ;															// �\�t�g�E�G�A�C���[�W�n���h���̍쐬( ABGR8 �J���[ )
extern	int			MakeBGRA8ColorSoftImage(              int SizeX, int SizeY ) ;															// �\�t�g�E�G�A�C���[�W�n���h���̍쐬( BGRA8 �J���[ )
extern	int			MakeARGB4ColorSoftImage(              int SizeX, int SizeY ) ;															// �\�t�g�E�G�A�C���[�W�n���h���̍쐬( ARGB4 �J���[ )
extern	int			MakeA1R5G5B5ColorSoftImage(           int SizeX, int SizeY ) ;															// �\�t�g�E�G�A�C���[�W�n���h���̍쐬( A1R5G5B5 �J���[ )
extern	int			MakeX1R5G5B5ColorSoftImage(           int SizeX, int SizeY ) ;															// �\�t�g�E�G�A�C���[�W�n���h���̍쐬( X1R5G5B5 �J���[ )
extern	int			MakeR5G5B5A1ColorSoftImage(           int SizeX, int SizeY ) ;															// �\�t�g�E�G�A�C���[�W�n���h���̍쐬( R5G5B5A1 �J���[ )
extern	int			MakeR5G6B5ColorSoftImage(             int SizeX, int SizeY ) ;															// �\�t�g�E�G�A�C���[�W�n���h���̍쐬( R5G6B5 �J���[ )
extern	int			MakeRGB8ColorSoftImage(               int SizeX, int SizeY ) ;															// �\�t�g�E�G�A�C���[�W�n���h���̍쐬( RGB8 �J���[ )
extern	int			MakePAL8ColorSoftImage(               int SizeX, int SizeY, int UseAlpha DEFAULTPARAM( = FALSE ) ) ;					// �\�t�g�E�G�A�C���[�W�n���h���̍쐬( �p���b�g�Q�T�U�F �J���[ )
extern	int			MakeColorDataSoftImage(               int SizeX, int SizeY, const COLORDATA *ColorData ) ;								// �\�t�g�E�G�A�C���[�W�n���h���̍쐬( COLORDATA �Ńt�H�[�}�b�g�w�� )

extern	int			DeleteSoftImage(                      int SIHandle ) ;																	// �\�t�g�E�G�A�C���[�W�n���h���̍폜����

extern	int			GetSoftImageSize(                     int SIHandle, int *Width, int *Height ) ;											// �\�t�g�E�G�A�C���[�W�n���h���̃T�C�Y��擾����
extern	int			CheckPaletteSoftImage(                int SIHandle ) ;																	// �\�t�g�E�G�A�C���[�W�n���h�����p���b�g�摜���ǂ�����擾����( TRUE:�p���b�g�摜  FALSE:�p���b�g�摜����Ȃ� )
extern	int			CheckAlphaSoftImage(                  int SIHandle ) ;																	// �\�t�g�E�G�A�C���[�W�n���h���̃t�H�[�}�b�g�Ƀ��v�f�����邩�ǂ�����擾����( TRUE:����  FALSE:�Ȃ� )
extern	int			CheckPixelAlphaSoftImage(             int SIHandle ) ;																	// �\�t�g�E�G�A�C���[�W�n���h���Ɋ܂܂��s�N�Z���̃��l��`�F�b�N����( �߂�l   -1:�G���[  0:�摜�Ƀ�����������  1:�摜�Ƀ�����������A���ׂčő�(255)�l  2:�摜�Ƀ�����������A���݂��郿�l�͍ŏ�(0)�ƍő�(255)������͍ŏ�(0)�̂݁@3:�摜�Ƀ�����������A�ŏ��ƍő�ȊO�̒��Ԃ̒l������ )  

extern	int			GetDrawScreenSoftImage(               int x1, int y1, int x2, int y2, int SIHandle ) ;									// �`��Ώۂ̉�ʂ���w��̈��\�t�g�E�G�A�C���[�W�n���h���ɓ]������
extern	int			GetDrawScreenSoftImageDestPos(        int x1, int y1, int x2, int y2, int SIHandle, int DestX, int DestY ) ;			// �`��Ώۂ̉�ʂ���w��̈��\�t�g�E�G�A�C���[�W�n���h���ɓ]������( �]������W�w��� )
extern	int			FillSoftImage(                        int SIHandle, int r, int g, int b, int a ) ;										// �\�t�g�E�G�A�C���[�W�n���h����w��F�œh��Ԃ�(�e�F�v�f�͂O�`�Q�T�T)
extern	int			ClearRectSoftImage(                   int SIHandle, int x, int y, int w, int h ) ;										// �\�t�g�E�G�A�C���[�W�n���h���̎w��̗̈��O�N���A����
extern	int			GetPaletteSoftImage(                  int SIHandle, int PaletteNo, int *r, int *g, int *b, int *a ) ;					// �\�t�g�E�G�A�C���[�W�n���h���̃p���b�g��擾����(�e�F�v�f�͂O�`�Q�T�T)
extern	int			SetPaletteSoftImage(                  int SIHandle, int PaletteNo, int  r, int  g, int  b, int  a ) ;					// �\�t�g�E�G�A�C���[�W�n���h���̃p���b�g��ݒ肷��(�e�F�v�f�͂O�`�Q�T�T)
extern	int			DrawPixelPalCodeSoftImage(            int SIHandle, int x, int y, int palNo ) ;											// �\�t�g�E�G�A�C���[�W�n���h���̎w����W�Ƀh�b�g��`�悷��(�p���b�g�摜�p�A�L���l�͂O�`�Q�T�T)
extern	int			GetPixelPalCodeSoftImage(             int SIHandle, int x, int y ) ;													// �\�t�g�E�G�A�C���[�W�n���h���̎w����W�̐F�R�[�h��擾����(�p���b�g�摜�p�A�߂�l�͂O�`�Q�T�T)
extern	void		*GetImageAddressSoftImage(            int SIHandle ) ;																	// �\�t�g�E�G�A�C���[�W�n���h���̉摜���i�[����Ă��郁�����̈�̐擪�A�h���X��擾����
extern	int			GetPitchSoftImage(                    int SIHandle ) ;																	// �\�t�g�E�G�A�C���[�W�n���h���̃������Ɋi�[����Ă���摜�f�[�^��1���C���ӂ�̃o�C�g����擾����
extern	int			DrawPixelSoftImage(                   int SIHandle, int x, int y, int    r, int    g, int    b, int    a ) ;			// �\�t�g�E�G�A�C���[�W�n���h���̎w����W�Ƀh�b�g��`�悷��(�e�F�v�f�͂O�`�Q�T�T)
extern	int			DrawPixelSoftImageF(                  int SIHandle, int x, int y, float  r, float  g, float  b, float  a ) ;			// �\�t�g�E�G�A�C���[�W�n���h���̎w����W�Ƀh�b�g��`�悷��(�e�F�v�f�͕��������_��)
extern	void		DrawPixelSoftImage_Unsafe_XRGB8(      int SIHandle, int x, int y, int    r, int    g, int    b ) ;						// �\�t�g�E�G�A�C���[�W�n���h���̎w����W�Ƀh�b�g��`�悷��(�e�F�v�f�͂O�`�Q�T�T)�A�G���[�`�F�b�N����Ȃ�����ɍ����ł����A�͈͊O�̍��W�� ARGB8 �ȊO�̃t�H�[�}�b�g�̃\�t�g�n���h����n���ƕs���ȃ������A�N�Z�X�ŋ����I�����܂�
extern	void		DrawPixelSoftImage_Unsafe_ARGB8(      int SIHandle, int x, int y, int    r, int    g, int    b, int    a ) ;			// �\�t�g�E�G�A�C���[�W�n���h���̎w����W�Ƀh�b�g��`�悷��(�e�F�v�f�͂O�`�Q�T�T)�A�G���[�`�F�b�N����Ȃ�����ɍ����ł����A�͈͊O�̍��W�� XRGB8 �ȊO�̃t�H�[�}�b�g�̃\�t�g�n���h����n���ƕs���ȃ������A�N�Z�X�ŋ����I�����܂�
extern	int			GetPixelSoftImage(                    int SIHandle, int x, int y, int   *r, int   *g, int   *b, int   *a ) ;			// �\�t�g�E�G�A�C���[�W�n���h���̎w����W�̐F��擾����(�e�F�v�f�͂O�`�Q�T�T)
extern	int			GetPixelSoftImageF(                   int SIHandle, int x, int y, float *r, float *g, float *b, float *a ) ;			// �\�t�g�E�G�A�C���[�W�n���h���̎w����W�̐F��擾����(�e�F�v�f�͕��������_��)
extern	void		GetPixelSoftImage_Unsafe_XRGB8(       int SIHandle, int x, int y, int   *r, int   *g, int   *b ) ;						// �\�t�g�E�G�A�C���[�W�n���h���̎w����W�̐F��擾����(�e�F�v�f�͂O�`�Q�T�T)�A�G���[�`�F�b�N����Ȃ�����ɍ����ł����A�͈͊O�̍��W�� XRGB8 �ȊO�̃t�H�[�}�b�g�̃\�t�g�n���h����n���ƕs���ȃ������A�N�Z�X�ŋ����I�����܂�
extern	void		GetPixelSoftImage_Unsafe_ARGB8(       int SIHandle, int x, int y, int   *r, int   *g, int   *b, int   *a ) ;			// �\�t�g�E�G�A�C���[�W�n���h���̎w����W�̐F��擾����(�e�F�v�f�͂O�`�Q�T�T)�A�G���[�`�F�b�N����Ȃ�����ɍ����ł����A�͈͊O�̍��W�� ARGB8 �ȊO�̃t�H�[�}�b�g�̃\�t�g�n���h����n���ƕs���ȃ������A�N�Z�X�ŋ����I�����܂�
extern	int			DrawLineSoftImage(                    int SIHandle, int x1, int y1, int x2, int y2, int r, int g, int b, int a ) ;		// �\�t�g�E�G�A�C���[�W�n���h���̎w����W�ɐ���`�悷��(�e�F�v�f�͂O�`�Q�T�T)
extern	int			DrawCircleSoftImage(                  int SIHandle, int x, int y, int radius, int r, int g, int b, int a, int FillFlag DEFAULTPARAM( = TRUE ) ) ;	// �\�t�g�E�G�A�C���[�W�n���h���̎w����W�ɉ~��`�悷��(�e�F�v�f�͂O�`�Q�T�T)
extern	int			BltSoftImage(                         int SrcX, int SrcY, int SrcSizeX, int SrcSizeY, int SrcSIHandle, int DestX, int DestY, int DestSIHandle ) ;										// �\�t�g�E�G�A�C���[�W�n���h����ʂ̃\�t�g�E�G�A�C���[�W�n���h���ɓ]������
extern	int			BltSoftImageWithTransColor(           int SrcX, int SrcY, int SrcSizeX, int SrcSizeY, int SrcSIHandle, int DestX, int DestY, int DestSIHandle, int Tr, int Tg, int Tb, int Ta ) ;		// �\�t�g�E�G�A�C���[�W�n���h����ʂ̃\�t�g�E�G�A�C���[�W�n���h���ɓ��ߐF�����t���œ]������
extern	int			BltSoftImageWithAlphaBlend(           int SrcX, int SrcY, int SrcSizeX, int SrcSizeY, int SrcSIHandle, int DestX, int DestY, int DestSIHandle, int Opacity DEFAULTPARAM( = 255 ) ) ;	// �\�t�g�E�G�A�C���[�W�n���h����ʂ̃\�t�g�E�G�A�C���[�W�n���h���ɃA���t�@�l�̃u�����h��l��������œ]������( Opacity �͓����x : 0( ���S���� ) �` 255( ���S�s���� ) )( �o�͐悪 ARGB8 �`���ȊO�̏ꍇ�̓G���[�ɂȂ�܂� )
extern	int			ReverseSoftImageH(                    int SIHandle ) ;																	// �\�t�g�E�G�A�C���[�W�n���h������E���]����
extern	int			ReverseSoftImageV(                    int SIHandle ) ;																	// �\�t�g�E�G�A�C���[�W�n���h����㉺���]����
extern	int			ReverseSoftImage(                     int SIHandle ) ;																	// �\�t�g�E�G�A�C���[�W�n���h����㉺���E���]����
extern	int			ConvertPremulAlphaSoftImage(          int SIHandle ) ;																	// �ʏ�̃��`�����l���t���摜���Z�ς݃��`�����l���t���摜�ɕϊ�����( �s�N�Z���t�H�[�}�b�g�� ARGB8 �ȊO�̏ꍇ�� ARGB8 �ɕϊ�����܂� )
extern	int			ConvertInterpAlphaSoftImage(          int SIHandle ) ;																	// ��Z�ς݃��`�����l���t���摜��ʏ�̃��`�����l���t���摜�ɕϊ�����( �s�N�Z���t�H�[�}�b�g�� ARGB8 �ȊO�̏ꍇ�� ARGB8 �ɕϊ�����܂� )

#ifndef DX_NON_FONT
extern	int			BltStringSoftImage(                   int x, int y, const TCHAR *StrData,                       int DestSIHandle, int DestEdgeSIHandle DEFAULTPARAM( = -1 ) ,                        int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;		// �\�t�g�E�G�A�C���[�W�n���h���ɕ������`�悷��( �f�t�H���g�t�H���g�n���h����g�p���� )
extern	int			BltStringSoftImageWithStrLen(         int x, int y, const TCHAR *StrData, size_t StrDataLength, int DestSIHandle, int DestEdgeSIHandle DEFAULTPARAM( = -1 ) ,                        int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;		// �\�t�g�E�G�A�C���[�W�n���h���ɕ������`�悷��( �f�t�H���g�t�H���g�n���h����g�p���� )
extern	int			BltStringSoftImageToHandle(           int x, int y, const TCHAR *StrData,                       int DestSIHandle, int DestEdgeSIHandle /* �����K�v�Ȃ��ꍇ�� -1 */ , int FontHandle, int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;		// �\�t�g�E�G�A�C���[�W�n���h���ɕ������`�悷��( �t�H���g�n���h���g�p�� )
extern	int			BltStringSoftImageToHandleWithStrLen( int x, int y, const TCHAR *StrData, size_t StrDataLength, int DestSIHandle, int DestEdgeSIHandle /* �����K�v�Ȃ��ꍇ�� -1 */ , int FontHandle, int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;		// �\�t�g�E�G�A�C���[�W�n���h���ɕ������`�悷��( �t�H���g�n���h���g�p�� )
#endif // DX_NON_FONT

extern	int			DrawSoftImage(                        int x, int y, int SIHandle ) ;														// �\�t�g�E�G�A�C���[�W�n���h�����ʂɕ`�悷��

#ifndef DX_NON_SAVEFUNCTION

extern	int			SaveSoftImageToBmp(                   const TCHAR *FilePath,                        int SIHandle ) ;											// �\�t�g�E�G�A�C���[�W�n���h����a�l�o�摜�t�@�C���Ƃ��ĕۑ�����
extern	int			SaveSoftImageToBmpWithStrLen(         const TCHAR *FilePath, size_t FilePathLength, int SIHandle ) ;											// �\�t�g�E�G�A�C���[�W�n���h����a�l�o�摜�t�@�C���Ƃ��ĕۑ�����
extern	int			SaveSoftImageToDds(                   const TCHAR *FilePath,                        int SIHandle ) ;											// �\�t�g�E�G�A�C���[�W�n���h����c�c�r�摜�t�@�C���Ƃ��ĕۑ�����
extern	int			SaveSoftImageToDdsWithStrLen(         const TCHAR *FilePath, size_t FilePathLength, int SIHandle ) ;											// �\�t�g�E�G�A�C���[�W�n���h����c�c�r�摜�t�@�C���Ƃ��ĕۑ�����
#ifndef DX_NON_PNGREAD
extern	int			SaveSoftImageToPng(                   const TCHAR *FilePath,                        int SIHandle, int CompressionLevel ) ;						// �\�t�g�E�G�A�C���[�W�n���h����o�m�f�摜�t�@�C���Ƃ��ĕۑ����� CompressionLevel = ���k���A�l���傫���قǍ����k�������ׁA�O�͖����k,0�`9
extern	int			SaveSoftImageToPngWithStrLen(         const TCHAR *FilePath, size_t FilePathLength, int SIHandle, int CompressionLevel ) ;						// �\�t�g�E�G�A�C���[�W�n���h����o�m�f�摜�t�@�C���Ƃ��ĕۑ����� CompressionLevel = ���k���A�l���傫���قǍ����k�������ׁA�O�͖����k,0�`9
#endif // DX_NON_PNGREAD
#ifndef DX_NON_JPEGREAD
extern	int			SaveSoftImageToJpeg(                  const TCHAR *FilePath,                        int SIHandle, int Quality, int Sample2x1 ) ;				// �\�t�g�E�G�A�C���[�W�n���h����i�o�d�f�摜�t�@�C���Ƃ��ĕۑ����� Quality = �掿�A�l���傫���قǒሳ�k���掿,0�`100 
extern	int			SaveSoftImageToJpegWithStrLen(        const TCHAR *FilePath, size_t FilePathLength, int SIHandle, int Quality, int Sample2x1 ) ;				// �\�t�g�E�G�A�C���[�W�n���h����i�o�d�f�摜�t�@�C���Ƃ��ĕۑ����� Quality = �掿�A�l���傫���قǒሳ�k���掿,0�`100 
#endif // DX_NON_JPEGREAD

#endif // DX_NON_SAVEFUNCTION

#endif // DX_NON_SOFTIMAGE


















#ifndef DX_NON_SOUND

// DxSound.cpp�֐��v���g�^�C�v�錾

// �T�E���h�f�[�^�Ǘ��n�֐�
extern	int			InitSoundMem(                        void ) ;																					// �S�ẴT�E���h�n���h����폜����

extern	int			AddSoundData(                        int Handle DEFAULTPARAM( = -1 ) ) ;																											// �T�E���h�n���h����쐬����
extern	int			AddStreamSoundMem(                   STREAMDATA *Stream, int LoopNum,  int SoundHandle, int StreamDataType, int *CanStreamCloseFlag, int UnionHandle DEFAULTPARAM( = -1 ) ) ;		// �X�g���[���Đ��^�C�v�̃T�E���h�n���h���ɃX�g���[���f�[�^��Đ��Ώۂɒǉ�����
extern	int			AddStreamSoundMemToMem(              const void *FileImage, size_t FileImageSize, int LoopNum,  int SoundHandle, int StreamDataType, int UnionHandle DEFAULTPARAM( = -1 ) ) ;		// �X�g���[���Đ��^�C�v�̃T�E���h�n���h���Ƀ�������ɓW�J�����T�E���h�t�@�C���C���[�W��Đ��Ώۂɒǉ�����
extern	int			AddStreamSoundMemToFile(             const TCHAR *WaveFile,                            int LoopNum,  int SoundHandle, int StreamDataType, int UnionHandle DEFAULTPARAM( = -1 ) ) ;	// �X�g���[���Đ��^�C�v�̃T�E���h�n���h���ɃT�E���h�t�@�C����Đ��Ώۂɒǉ�����
extern	int			AddStreamSoundMemToFileWithStrLen(   const TCHAR *WaveFile, size_t WaveFilePathLength, int LoopNum,  int SoundHandle, int StreamDataType, int UnionHandle DEFAULTPARAM( = -1 ) ) ;	// �X�g���[���Đ��^�C�v�̃T�E���h�n���h���ɃT�E���h�t�@�C����Đ��Ώۂɒǉ�����
extern	int			SetupStreamSoundMem(                 int SoundHandle ) ;																		// �X�g���[���Đ��^�C�v�̃T�E���h�n���h���̍Đ����������
extern	int			PlayStreamSoundMem(                  int SoundHandle, int PlayType DEFAULTPARAM( = DX_PLAYTYPE_LOOP ) , int TopPositionFlag DEFAULTPARAM( = TRUE ) ) ;	// �X�g���[���Đ��^�C�v�̃T�E���h�n���h���̍Đ���J�n����
extern	int			CheckStreamSoundMem(                 int SoundHandle ) ;																		// �X�g���[���Đ��^�C�v�̃T�E���h�n���h���̍Đ���Ԃ�擾����
extern	int			StopStreamSoundMem(                  int SoundHandle, int IsNextLoopEnd DEFAULTPARAM( = FALSE ) ) ;								// �X�g���[���Đ��^�C�v�̃T�E���h�n���h���̍Đ����~����
extern	int			SetStreamSoundCurrentPosition(       LONGLONG Byte, int SoundHandle ) ;															// �T�E���h�n���h���̍Đ��ʒu��o�C�g�P�ʂŕύX����(�Đ����~�܂��Ă��鎞�̂ݗL��)
extern	LONGLONG	GetStreamSoundCurrentPosition(       int SoundHandle ) ;																		// �T�E���h�n���h���̍Đ��ʒu��o�C�g�P�ʂŎ擾����
extern	int			SetStreamSoundCurrentTime(           LONGLONG Time, int SoundHandle ) ;															// �T�E���h�n���h���̍Đ��ʒu��~���b�P�ʂŐݒ肷��(���k�`���̏ꍇ�͐������ݒ肳��Ȃ��ꍇ������)
extern	LONGLONG	GetStreamSoundCurrentTime(           int SoundHandle ) ;																		// �T�E���h�n���h���̍Đ��ʒu��~���b�P�ʂŎ擾����(���k�`���̏ꍇ�͐������l���Ԃ��Ă��Ȃ��ꍇ������)
extern	int			ProcessStreamSoundMem(               int SoundHandle ) ;																		// �X�g���[���Đ��^�C�v�̃T�E���h�n���h���̎����I�ȏ�����s���֐�( ����Ŏ����I�ɌĂ΂�܂� )
extern	int			ProcessStreamSoundMemAll(            void ) ;																					// �L���ȃX�g���[���Đ��^�C�v�̃T�E���h�n���h���ɑ΂��� ProcessStreamSoundMem ����s����( ����Ŏ����I�ɌĂ΂�܂� )


extern	int			LoadSoundMem2(                       const TCHAR *FileName1,                         const TCHAR *FileName2                         ) ;	// �O�t���ƃ��[�v���ɕ����ꂽ�T�E���h�t�@�C����ǂݍ��݃T�E���h�n���h����쐬����
extern	int			LoadSoundMem2WithStrLen(             const TCHAR *FileName1, size_t FileName1Length, const TCHAR *FileName2, size_t FileName2Length ) ;	// �O�t���ƃ��[�v���ɕ����ꂽ�T�E���h�t�@�C����ǂݍ��݃T�E���h�n���h����쐬����
extern	int			LoadBGM(                             const TCHAR *FileName                        ) ;													// ��ɂa�f�l��ǂݍ��݃T�E���h�n���h����쐬����̂ɓK�����֐�
extern	int			LoadBGMWithStrLen(                   const TCHAR *FileName, size_t FileNameLength ) ;													// ��ɂa�f�l��ǂݍ��݃T�E���h�n���h����쐬����̂ɓK�����֐�

extern	int			LoadSoundMemBase(                    const TCHAR *FileName,                        int BufferNum,                      int UnionHandle DEFAULTPARAM( = -1 ) ) ;		// �T�E���h�t�@�C������T�E���h�n���h����쐬����
extern	int			LoadSoundMemBaseWithStrLen(          const TCHAR *FileName, size_t FileNameLength, int BufferNum,                      int UnionHandle DEFAULTPARAM( = -1 ) ) ;		// �T�E���h�t�@�C������T�E���h�n���h����쐬����
extern	int			LoadSoundMem(                        const TCHAR *FileName,                        int BufferNum DEFAULTPARAM( = 3 ) , int UnionHandle DEFAULTPARAM( = -1 ) ) ;		// LoadSoundMemBase �̕ʖ��֐�
extern	int			LoadSoundMemWithStrLen(              const TCHAR *FileName, size_t FileNameLength, int BufferNum DEFAULTPARAM( = 3 ) , int UnionHandle DEFAULTPARAM( = -1 ) ) ;		// LoadSoundMemBase �̕ʖ��֐�
extern	int			LoadSoundMemToBufNumSitei(           const TCHAR *FileName,                        int BufferNum ) ;									// LoadSoundMem ��g�p���ĉ�����
extern	int			LoadSoundMemToBufNumSiteiWithStrLen( const TCHAR *FileName, size_t FileNameLength, int BufferNum ) ;									// LoadSoundMem ��g�p���ĉ�����
extern	int			DuplicateSoundMem(                   int SrcSoundHandle, int BufferNum DEFAULTPARAM( = 3 ) ) ;											// �����T�E���h�f�[�^��g�p����T�E���h�n���h����쐬����( DX_SOUNDDATATYPE_MEMNOPRESS �^�C�v�̃T�E���h�n���h���̂݉\ )

extern	int			LoadSoundMemByMemImageBase(          const void *FileImage, size_t FileImageSize, int BufferNum,                      int UnionHandle DEFAULTPARAM( = -1 ) ) ;		// ��������ɓW�J���ꂽ�T�E���h�t�@�C���C���[�W����T�E���h�n���h����쐬����
extern	int			LoadSoundMemByMemImage(              const void *FileImage, size_t FileImageSize, int BufferNum DEFAULTPARAM( = 3 ) , int UnionHandle DEFAULTPARAM( = -1 ) ) ;		// LoadSoundMemByMemImageBase �̕ʖ��֐�
extern	int			LoadSoundMemByMemImage2(             const void *WaveImage, size_t WaveImageSize, const WAVEFORMATEX *WaveFormat, size_t WaveHeaderSize ) ;	// ��������ɓW�J���ꂽ�o�b�l�f�[�^����T�E���h�n���h����쐬����
extern	int			LoadSoundMemByMemImageToBufNumSitei( const void *FileImage, size_t FileImageSize, int BufferNum ) ;										// LoadSoundMemByMemImageBase ��g�p���ĉ�����
extern	int			LoadSoundMem2ByMemImage(             const void *FileImage1, size_t FileImageSize1, const void *FileImage2, size_t FileImageSize2 ) ;	// �O�t���ƃ��[�v���ɕ����ꂽ��̃�������ɓW�J���ꂽ�T�E���h�t�@�C���C���[�W����T�E���h�n���h����쐬����
extern	int			LoadSoundMemFromSoftSound(           int SoftSoundHandle, int BufferNum DEFAULTPARAM( = 3 ) ) ;											// �\�t�g�E�G�A�T�E���h�n���h�������T�E���h�f�[�^����T�E���h�n���h����쐬����

extern	int			DeleteSoundMem(                      int SoundHandle ) ;																		// �T�E���h�n���h����폜����

extern	int			PlaySoundMem(                        int SoundHandle, int PlayType, int TopPositionFlag DEFAULTPARAM( = TRUE ) ) ;				// �T�E���h�n���h����Đ�����
extern	int			StopSoundMem(                                                                        int SoundHandle, int IsNextLoopEnd DEFAULTPARAM( = FALSE ) ) ;	// �T�E���h�n���h���̍Đ����~����( IsNextLoopEnd �� TRUE �ɂ���Ǝ���̃��[�v�I���̃^�C�~���O�ŉ���~�߂� )
extern	int			CheckSoundMem(                                                                       int SoundHandle ) ;						// �T�E���h�n���h�����Đ������ǂ�����擾����
extern	int			SetPanSoundMem(                      int PanPal,                                     int SoundHandle ) ;						// �T�E���h�n���h���̃p����ݒ肷��( 100����1�f�V�x���P�� 0 �` 10000 )
extern	int			ChangePanSoundMem(                   int PanPal,                                     int SoundHandle ) ;						// �T�E���h�n���h���̃p����ݒ肷��( -255 �` 255 )
extern	int			GetPanSoundMem(                                                                      int SoundHandle ) ;						// �T�E���h�n���h���̃p����擾����
extern	int			SetVolumeSoundMem(                   int VolumePal,                                  int SoundHandle ) ;						// �T�E���h�n���h���̃{�����[����ݒ肷��( 100����1�f�V�x���P�� 0 �` 10000 ) 
extern	int			ChangeVolumeSoundMem(                int VolumePal,                                  int SoundHandle ) ;						// �T�E���h�n���h���̃{�����[����ݒ肷��( 0 �` 255 )
extern	int			GetVolumeSoundMem(                                                                   int SoundHandle ) ;						// �T�E���h�n���h���̃{�����[����擾����( 100����1�f�V�x���P�� 0 �` 10000 )
extern	int			GetVolumeSoundMem2(                                                                  int SoundHandle ) ;						// �T�E���h�n���h���̃{�����[����擾����( 0 �` 255 )
extern	int			SetChannelVolumeSoundMem(            int Channel, int VolumePal,                     int SoundHandle ) ;						// �T�E���h�n���h���̎w��̃`�����l���̃{�����[����ݒ肷��( 100����1�f�V�x���P�� 0 �` 10000 )
extern	int			ChangeChannelVolumeSoundMem(         int Channel, int VolumePal,                     int SoundHandle ) ;						// �T�E���h�n���h���̎w��̃`�����l���̃{�����[����ݒ肷��( 0 �` 255 )
extern	int			GetChannelVolumeSoundMem(            int Channel,                                    int SoundHandle ) ;						// �T�E���h�n���h���̎w��̃`�����l���̃{�����[����擾����( 100����1�f�V�x���P�� 0 �` 10000 )
extern	int			GetChannelVolumeSoundMem2(           int Channel,                                    int SoundHandle ) ;						// �T�E���h�n���h���̎w��̃`�����l���̃{�����[����擾����( 0 �` 255 )
extern	int			SetFrequencySoundMem(                int FrequencyPal,                               int SoundHandle ) ;						// �T�E���h�n���h���̍Đ����g����ݒ肷��
extern	int			GetFrequencySoundMem(                                                                int SoundHandle ) ;						// �T�E���h�n���h���̍Đ����g����擾����
extern	int			ResetFrequencySoundMem(                                                              int SoundHandle ) ;						// �T�E���h�n���h���̍Đ����g����ǂݍ��ݒ���̏�Ԃɖ߂�

extern	int			SetNextPlayPanSoundMem(              int PanPal,                                     int SoundHandle ) ;						// �T�E���h�n���h���̎��̍Đ��ɂ̂ݎg�p����p����ݒ肷��( 100����1�f�V�x���P�� 0 �` 10000 )
extern	int			ChangeNextPlayPanSoundMem(           int PanPal,                                     int SoundHandle ) ;						// �T�E���h�n���h���̎��̍Đ��ɂ̂ݎg�p����p����ݒ肷��( -255 �` 255 )
extern	int			SetNextPlayVolumeSoundMem(           int VolumePal,                                  int SoundHandle ) ;						// �T�E���h�n���h���̎��̍Đ��ɂ̂ݎg�p����{�����[����ݒ肷��( 100����1�f�V�x���P�� 0 �` 10000 )
extern	int			ChangeNextPlayVolumeSoundMem(        int VolumePal,                                  int SoundHandle ) ;						// �T�E���h�n���h���̎��̍Đ��ɂ̂ݎg�p����{�����[����ݒ肷��( 0 �` 255 )
extern	int			SetNextPlayChannelVolumeSoundMem(    int Channel, int VolumePal,                     int SoundHandle ) ;						// �T�E���h�n���h���̎��̍Đ��ɂ̂ݎg�p����`�����l���̃{�����[����ݒ肷��( 100����1�f�V�x���P�� 0 �` 10000 )
extern	int			ChangeNextPlayChannelVolumeSoundMem( int Channel, int VolumePal,                     int SoundHandle ) ;						// �T�E���h�n���h���̎��̍Đ��ɂ̂ݎg�p����`�����l���̃{�����[����ݒ肷��( 0 �` 255 )
extern	int			SetNextPlayFrequencySoundMem(        int FrequencyPal,                               int SoundHandle ) ;						// �T�E���h�n���h���̎��̍Đ��ɂ̂ݎg�p����Đ����g����ݒ肷��

extern	int			SetCurrentPositionSoundMem(          LONGLONG SamplePosition,                        int SoundHandle ) ;						// �T�E���h�n���h���̍Đ��ʒu��T���v���P�ʂŐݒ肷��(�Đ����~�܂��Ă��鎞�̂ݗL��)
extern	LONGLONG	GetCurrentPositionSoundMem(                                                          int SoundHandle ) ;						// �T�E���h�n���h���̍Đ��ʒu��T���v���P�ʂŎ擾����
extern	int			SetSoundCurrentPosition(             LONGLONG Byte,                                  int SoundHandle ) ;						// �T�E���h�n���h���̍Đ��ʒu��o�C�g�P�ʂŐݒ肷��(�Đ����~�܂��Ă��鎞�̂ݗL��)
extern	LONGLONG	GetSoundCurrentPosition(                                                             int SoundHandle ) ;						// �T�E���h�n���h���̍Đ��ʒu��o�C�g�P�ʂŎ擾����
extern	int			SetSoundCurrentTime(                 LONGLONG Time,                                  int SoundHandle ) ;						// �T�E���h�n���h���̍Đ��ʒu��~���b�P�ʂŐݒ肷��(���k�`���̏ꍇ�͐������ݒ肳��Ȃ��ꍇ������)
extern	LONGLONG	GetSoundCurrentTime(                                                                 int SoundHandle ) ;						// �T�E���h�n���h���̍Đ��ʒu��~���b�P�ʂŎ擾����(���k�`���̏ꍇ�͐������l���Ԃ��Ă��Ȃ��ꍇ������)
extern	LONGLONG	GetSoundTotalSample(                                                                 int SoundHandle ) ;						// �T�E���h�n���h���̉��̑����Ԃ�T���v���P�ʂŎ擾����
extern	LONGLONG	GetSoundTotalTime(                                                                   int SoundHandle ) ;						// �T�E���h�n���h���̉��̑����Ԃ�~���b�P�ʂŎ擾����

extern	int			SetLoopPosSoundMem(                  LONGLONG LoopTime,                              int SoundHandle ) ;						// SetLoopTimePosSoundMem �̕ʖ��֐�
extern	int			SetLoopTimePosSoundMem(              LONGLONG LoopTime,                              int SoundHandle ) ;						// �T�E���h�n���h���Ƀ��[�v�ʒu��ݒ肷��(�~���b�P��)
extern	int			SetLoopSamplePosSoundMem(            LONGLONG LoopSamplePosition,                    int SoundHandle ) ;						// �T�E���h�n���h���Ƀ��[�v�ʒu��ݒ肷��(�T���v���P��)

extern	int			SetLoopStartTimePosSoundMem(         LONGLONG LoopStartTime,                         int SoundHandle ) ;						// �T�E���h�n���h���Ƀ��[�v�J�n�ʒu��ݒ肷��(�~���b�P��)
extern	int			SetLoopStartSamplePosSoundMem(       LONGLONG LoopStartSamplePosition,               int SoundHandle ) ;						// �T�E���h�n���h���Ƀ��[�v�J�n�ʒu��ݒ肷��(�T���v���P��)

extern	int			SetLoopAreaTimePosSoundMem(          LONGLONG  LoopStartTime, LONGLONG  LoopEndTime,                     int SoundHandle ) ;	// �T�E���h�n���h���Ƀ��[�v�͈͂�ݒ肷��(�~���b�P��)
extern	int			GetLoopAreaTimePosSoundMem(          LONGLONG *LoopStartTime, LONGLONG *LoopEndTime,                     int SoundHandle ) ;	// �T�E���h�n���h���Ƀ��[�v�͈͂�擾����(�~���b�P��)
extern	int			SetLoopAreaSamplePosSoundMem(        LONGLONG  LoopStartSamplePosition, LONGLONG  LoopEndSamplePosition, int SoundHandle ) ;	// �T�E���h�n���h���Ƀ��[�v�͈͂�ݒ肷��(�T���v���P��)
extern	int			GetLoopAreaSamplePosSoundMem(        LONGLONG *LoopStartSamplePosition, LONGLONG *LoopEndSamplePosition, int SoundHandle ) ;	// �T�E���h�n���h���Ƀ��[�v�͈͂�擾����(�T���v���P��)

extern	int			SetPlayFinishDeleteSoundMem(         int DeleteFlag,                                 int SoundHandle ) ;						// �T�E���h�n���h���̍Đ����I�������玩���I�Ƀn���h����폜���邩�ǂ�����ݒ肷��

extern	int			Set3DReverbParamSoundMem(            const SOUND3D_REVERB_PARAM *Param,              int SoundHandle ) ;						// �T�E���h�n���h���̂R�c�T�E���h�p�̃��o�[�u�p�����[�^��ݒ肷��
extern	int			Set3DPresetReverbParamSoundMem(      int PresetNo /* DX_REVERB_PRESET_DEFAULT �� */ , int SoundHandle ) ;						// �T�E���h�n���h���̂R�c�T�E���h�p�̃��o�[�u�p�����[�^��v���Z�b�g��g�p���Đݒ肷��
extern	int			Set3DReverbParamSoundMemAll(         const SOUND3D_REVERB_PARAM *Param, int PlaySoundOnly DEFAULTPARAM( = FALSE ) ) ;					// �S�Ă̂R�c�T�E���h�̃T�E���h�n���h���Ƀ��o�[�u�p�����[�^��ݒ肷��( PlaySoundOnly TRUE:�Đ����̃T�E���h�ɂ̂ݐݒ肷��  FALSE:�Đ����Ă��Ȃ��T�E���h�ɂ�ݒ肷�� )
extern	int			Set3DPresetReverbParamSoundMemAll(   int PresetNo /* DX_REVERB_PRESET_DEFAULT �� */ , int PlaySoundOnly DEFAULTPARAM( = FALSE )  ) ;	// �S�Ă̂R�c�T�E���h�̃T�E���h�n���h���Ƀ��o�[�u�p�����[�^��v���Z�b�g��g�p���Đݒ肷��( PlaySoundOnly TRUE:�Đ����̃T�E���h�ɂ̂ݐݒ肷��  FALSE:�Đ����Ă��Ȃ��T�E���h�ɂ�ݒ肷�� )
extern	int			Get3DReverbParamSoundMem(            SOUND3D_REVERB_PARAM *ParamBuffer,              int SoundHandle ) ;						// �T�E���h�n���h���ɐݒ肳��Ă���R�c�T�E���h�p�̃��o�[�u�p�����[�^��擾����
extern	int			Get3DPresetReverbParamSoundMem(      SOUND3D_REVERB_PARAM *ParamBuffer, int PresetNo /* DX_REVERB_PRESET_DEFAULT �� */ ) ;		// �v���Z�b�g�̂R�c�T�E���h�p�̃��o�[�u�p�����[�^��擾����

extern	int			Set3DPositionSoundMem(               VECTOR Position,                                int SoundHandle ) ;						// �T�E���h�n���h���̂R�c�T�E���h�p�̍Đ��ʒu��ݒ肷��
extern	int			Set3DRadiusSoundMem(                 float Radius,                                   int SoundHandle ) ;						// �T�E���h�n���h���̂R�c�T�E���h�p�̉����������鋗����ݒ肷��
extern	int			Set3DVelocitySoundMem(               VECTOR Velocity,                                int SoundHandle ) ;						// �T�E���h�n���h���̂R�c�T�E���h�p�̈ړ����x��ݒ肷��

extern	int			SetNextPlay3DPositionSoundMem(       VECTOR Position,                                int SoundHandle ) ;						// �T�E���h�n���h���̎��̍Đ��݂̂Ɏg�p����R�c�T�E���h�p�̍Đ��ʒu��ݒ肷��
extern	int			SetNextPlay3DRadiusSoundMem(         float Radius,                                   int SoundHandle ) ;						// �T�E���h�n���h���̎��̍Đ��݂̂Ɏg�p����R�c�T�E���h�p�̉����������鋗����ݒ肷��
extern	int			SetNextPlay3DVelocitySoundMem(       VECTOR Velocity,                                int SoundHandle ) ;						// �T�E���h�n���h���̎��̍Đ��݂̂Ɏg�p����R�c�T�E���h�p�̈ړ����x��ݒ肷��


// ����֐�
extern	int			GetMP3TagInfo(           const TCHAR *FileName,                        TCHAR *TitleBuffer, size_t TitleBufferBytes, TCHAR *ArtistBuffer, size_t ArtistBufferBytes, TCHAR *AlbumBuffer, size_t AlbumBufferBytes, TCHAR *YearBuffer, size_t YearBufferBytes, TCHAR *CommentBuffer, size_t CommentBufferBytes, TCHAR *TrackBuffer, size_t TrackBufferBytes, TCHAR *GenreBuffer, size_t GenreBufferBytes, int *PictureGrHandle ) ;		// MP3�t�@�C���̃^�O����擾����
extern	int			GetMP3TagInfoWithStrLen( const TCHAR *FileName, size_t FileNameLength, TCHAR *TitleBuffer, size_t TitleBufferBytes, TCHAR *ArtistBuffer, size_t ArtistBufferBytes, TCHAR *AlbumBuffer, size_t AlbumBufferBytes, TCHAR *YearBuffer, size_t YearBufferBytes, TCHAR *CommentBuffer, size_t CommentBufferBytes, TCHAR *TrackBuffer, size_t TrackBufferBytes, TCHAR *GenreBuffer, size_t GenreBufferBytes, int *PictureGrHandle ) ;		// MP3�t�@�C���̃^�O����擾����
#ifndef DX_NON_OGGVORBIS
extern	int			GetOggCommentNum(           const TCHAR *FileName                        ) ;																																	// Ogg�t�@�C���̃R�����g���̐���擾����
extern	int			GetOggCommentNumWithStrLen( const TCHAR *FileName, size_t FileNameLength ) ;																																	// Ogg�t�@�C���̃R�����g���̐���擾����
extern	int			GetOggComment(              const TCHAR *FileName,                        int CommentIndex, TCHAR *CommentNameBuffer, size_t CommentNameBufferBytes, TCHAR *CommentBuffer, size_t CommentBufferBytes ) ;		// Ogg�t�@�C���̃R�����g����擾����
extern	int			GetOggCommentWithStrLen(    const TCHAR *FileName, size_t FileNameLength, int CommentIndex, TCHAR *CommentNameBuffer, size_t CommentNameBufferBytes, TCHAR *CommentBuffer, size_t CommentBufferBytes ) ;		// Ogg�t�@�C���̃R�����g����擾����
#endif // DX_NON_OGGVORBIS
						

// �ݒ�֌W�֐�
extern	int			SetCreateSoundDataType(              int SoundDataType ) ;																		// �쐬����T�E���h�n���h���̍Đ��^�C�v��ݒ肷��( DX_SOUNDDATATYPE_MEMNOPRESS �� )
extern	int			GetCreateSoundDataType(              void ) ;																					// �쐬����T�E���h�n���h���̍Đ��^�C�v��擾����( DX_SOUNDDATATYPE_MEMNOPRESS �� )
extern	int			SetCreateSoundPitchRate(             float Cents ) ;																			// �쐬����T�E���h�n���h���̃s�b�`( ���̒�����ς����ɉ�����ύX���� )���[�g��ݒ肷��( �P�ʂ̓Z���g( 100.0f�Ŕ����A1200.0f�łP�I�N�^�[�� )�A�v���X�̒l�ŉ����������A�}�C�i�X�̒l�ŉ������Ⴍ�Ȃ�܂� )
extern	float		GetCreateSoundPitchRate(             void ) ;																					// �쐬����T�E���h�n���h���̃s�b�`( ���̒�����ς����ɉ�����ύX���� )���[�g��擾����( �P�ʂ̓Z���g( 100.0f�Ŕ����A1200.0f�łP�I�N�^�[�� )�A�v���X�̒l�ŉ����������A�}�C�i�X�̒l�ŉ������Ⴍ�Ȃ�܂� )
extern	int			SetCreateSoundTimeStretchRate(       float Rate ) ;																				// �쐬����T�E���h�n���h���̃^�C���X�g���b�`( ������ς����ɉ��̒�����ύX���� )���[�g��ݒ肷��( �P�ʂ͔{���A2.0f �ŉ��̒������Q�{�ɁA0.5f �ŉ��̒����������ɂȂ�܂� )
extern	float		GetCreateSoundTimeStretchRate(       void ) ;																					// �쐬����T�E���h�n���h���̃^�C���X�g���b�`( ������ς����ɉ��̒�����ύX���� )���[�g��擾����( �P�ʂ͔{���A2.0f �ŉ��̒������Q�{�ɁA0.5f �ŉ��̒����������ɂȂ�܂� )
extern	int			SetCreateSoundLoopAreaTimePos(       LONGLONG  LoopStartTime,           LONGLONG  LoopEndTime ) ;								// �쐬����T�E���h�n���h���̃��[�v�͈͂�ݒ肷��( �~���b�P�� )
extern	int			GetCreateSoundLoopAreaTimePos(       LONGLONG *LoopStartTime,           LONGLONG *LoopEndTime ) ;								// �쐬����T�E���h�n���h���̃��[�v�͈͂�擾����( �~���b�P�� )
extern	int			SetCreateSoundLoopAreaSamplePos(     LONGLONG  LoopStartSamplePosition, LONGLONG  LoopEndSamplePosition ) ;						// �쐬����T�E���h�n���h���̃��[�v�͈͂�ݒ肷��( �T���v���P�� )
extern	int			GetCreateSoundLoopAreaSamplePos(     LONGLONG *LoopStartSamplePosition, LONGLONG *LoopEndSamplePosition ) ;						// �쐬����T�E���h�n���h���̃��[�v�͈͂�擾����( �T���v���P�� )
extern	int			SetCreateSoundIgnoreLoopAreaInfo(    int IgnoreFlag ) ;																			// LoadSoundMem �Ȃǂœǂݍ��ރT�E���h�f�[�^�Ƀ��[�v�͈͏�񂪂����Ă�������邩�ǂ�����ݒ肷��( TRUE:��������  FALSE:�������Ȃ�( �f�t�H���g ) )
extern	int			GetCreateSoundIgnoreLoopAreaInfo(    void ) ;																					// LoadSoundMem �Ȃǂœǂݍ��ރT�E���h�f�[�^�Ƀ��[�v�͈͏�񂪂����Ă�������邩�ǂ�����擾����( TRUE:��������  FALSE:�������Ȃ�( �f�t�H���g ) )
extern	int			SetDisableReadSoundFunctionMask(     int Mask ) ;																				// �g�p���Ȃ��T�E���h�f�[�^�ǂݍ��ݏ����̃}�X�N��ݒ肷��( DX_READSOUNDFUNCTION_PCM �� )
extern	int			GetDisableReadSoundFunctionMask(     void ) ;																					// �g�p���Ȃ��T�E���h�f�[�^�ǂݍ��ݏ����̃}�X�N��擾����( DX_READSOUNDFUNCTION_PCM �� )
extern	int			SetEnableSoundCaptureFlag(           int Flag ) ;																				// �T�E���h�L���v�`����O��Ƃ����������邩�ǂ�����ݒ肷��
extern	int			SetUseOldVolumeCalcFlag(             int Flag ) ;																				// ChangeVolumeSoundMem, ChangeNextPlayVolumeSoundMem, ChangeMovieVolumeToGraph �̉��ʌv�Z���� Ver3.10c�ȑO�̂�̂�g�p���邩�ǂ�����ݒ肷��( TRUE:Ver3.10c�ȑO�̌v�Z����g�p  FALSE:3.10d�ȍ~�̌v�Z����g�p( �f�t�H���g ) )
extern	int			SetSoundCurrentTimeType(             int Type /* DX_SOUNDCURRENTTIME_TYPE_LOW_LEVEL �Ȃ� */ ) ;									// GetSoundCurrentTime �Ȃǂ�g�p�����ꍇ�Ɏ擾�ł���Đ����Ԃ̃^�C�v��ݒ肷��
extern	int			GetSoundCurrentTimeType(             void ) ;																					// GetSoundCurrentTime �Ȃǂ�g�p�����ꍇ�Ɏ擾�ł���Đ����Ԃ̃^�C�v��擾����

extern	int			SetCreate3DSoundFlag(                     int Flag ) ;																			// ���ɍ쐬����T�E���h�n���h����R�c�T�E���h�p�ɂ��邩�ǂ�����ݒ肷��( TRUE:�R�c�T�E���h�p�ɂ���  FALSE:�R�c�T�E���h�p�ɂ��Ȃ�( �f�t�H���g ) )
extern	int			Set3DSoundOneMetre(                       float Distance ) ;																	// �R�c��Ԃ̂P���[�g���ɑ������鋗����ݒ肷��ADxLib_Init ��Ăяo���O�ł̂݌Ăяo���\( �f�t�H���g:1.0f )
extern	int			Set3DSoundListenerPosAndFrontPos_UpVecY(  VECTOR Position, VECTOR FrontPosition ) ;												// �R�c�T�E���h�̃��X�i�[�̈ʒu�ƃ��X�i�[�̑O���ʒu��ݒ肷��( ���X�i�[�̏�����͂x���Œ� )
extern	int			Set3DSoundListenerPosAndFrontPosAndUpVec( VECTOR Position, VECTOR FrontPosition, VECTOR UpVector ) ;							// �R�c�T�E���h�̃��X�i�[�̈ʒu�ƃ��X�i�[�̑O���ʒu�ƃ��X�i�[�̏������ݒ肷��
extern	int			Set3DSoundListenerVelocity(               VECTOR Velocity ) ;																	// �R�c�T�E���h�̃��X�i�[�̈ړ����x��ݒ肷��
extern	int			Set3DSoundListenerConeAngle(              float InnerAngle, float OuterAngle ) ;												// �R�c�T�E���h�̃��X�i�[�̉��p�x�͈͂�ݒ肷��
extern	int			Set3DSoundListenerConeVolume(             float InnerAngleVolume, float OuterAngleVolume ) ;									// �R�c�T�E���h�̃��X�i�[�̉��p�x�͈͂̉��ʔ{����ݒ肷��

#ifndef DX_NON_BEEP
// BEEP���Đ��p����
extern	int			SetBeepFrequency(					int Freq ) ;																				// �r�[�v�����g���ݒ�֐�
extern	int			PlayBeep(							void ) ;																					// �r�[�v����Đ�����
extern	int			StopBeep(							void ) ;																					// �r�[�v����~�߂�
#endif // DX_NON_BEEP

// ���b�p�[�֐�
extern	int			PlaySoundFile(						const TCHAR *FileName,                        int PlayType ) ;								// �T�E���h�t�@�C����Đ�����
extern	int			PlaySoundFileWithStrLen(			const TCHAR *FileName, size_t FileNameLength, int PlayType ) ;								// �T�E���h�t�@�C����Đ�����
#ifndef DX_COMPILE_TYPE_C_LANGUAGE
extern	int			PlaySound(							const TCHAR *FileName,                        int PlayType ) ;								// PlaySoundFile �̋�����
extern	int			PlaySoundWithStrLen(				const TCHAR *FileName, size_t FileNameLength, int PlayType ) ;								// PlaySoundFile �̋�����
#endif // DX_COMPILE_TYPE_C_LANGUAGE
extern	int			PlaySoundDX(						const TCHAR *FileName,                        int PlayType ) ;								// PlaySoundFile �̋�����
extern	int			PlaySoundDXWithStrLen(				const TCHAR *FileName, size_t FileNameLength, int PlayType ) ;								// PlaySoundFile �̋�����
extern	int			CheckSoundFile(						void ) ;																					// �T�E���h�t�@�C���̍Đ������ǂ�����擾����
extern	int			CheckSound(							void ) ;																					// CheckSoundFile �̋�����
extern	int			StopSoundFile(						void ) ;																					// �T�E���h�t�@�C���̍Đ����~����
extern	int			StopSound(							void ) ;																					// StopSoundFile �̋�����
extern	int			SetVolumeSoundFile(					int VolumePal ) ;																			// �T�E���h�t�@�C���̉��ʂ�ݒ肷��
extern	int			SetVolumeSound(						int VolumePal ) ;																			// SetVolumeSound �̋�����

// �\�t�g�E�G�A����T�E���h�n�֐�
extern	int			InitSoftSound(						void ) ;																					// �\�t�g�E�G�A�ň����g�`�f�[�^�n���h������ׂč폜����
extern	int			LoadSoftSound(						const TCHAR *FileName                        ) ;											// �\�t�g�E�G�A�ň����g�`�f�[�^�n���h����T�E���h�t�@�C������쐬����
extern	int			LoadSoftSoundWithStrLen(			const TCHAR *FileName, size_t FileNameLength ) ;											// �\�t�g�E�G�A�ň����g�`�f�[�^�n���h����T�E���h�t�@�C������쐬����
extern	int			LoadSoftSoundFromMemImage(			const void *FileImage, size_t FileImageSize ) ;												// �\�t�g�E�G�A�ň����g�`�f�[�^�n���h�����������ɓW�J���ꂽ�T�E���h�t�@�C���C���[�W����쐬����
extern	int			MakeSoftSound(						int UseFormat_SoftSoundHandle, LONGLONG SampleNum ) ;										// �\�t�g�E�G�A�ň�����̔g�`�f�[�^�n���h����쐬����( �t�H�[�}�b�g�͈����̃\�t�g�E�G�A�T�E���h�n���h���Ɠ�����̂ɂ��� )
extern	int			MakeSoftSound2Ch16Bit44KHz(			LONGLONG SampleNum ) ;																		// �\�t�g�E�G�A�ň�����̔g�`�f�[�^�n���h����쐬����( �`�����l����:2 �ʎq���r�b�g��:16bit �T���v�����O���g��:44.1KHz )
extern	int			MakeSoftSound2Ch16Bit22KHz(			LONGLONG SampleNum ) ;																		// �\�t�g�E�G�A�ň�����̔g�`�f�[�^�n���h����쐬����( �`�����l����:2 �ʎq���r�b�g��:16bit �T���v�����O���g��:22KHz )
extern	int			MakeSoftSound2Ch8Bit44KHz(			LONGLONG SampleNum ) ;																		// �\�t�g�E�G�A�ň�����̔g�`�f�[�^�n���h����쐬����( �`�����l����:2 �ʎq���r�b�g��: 8bit �T���v�����O���g��:44.1KHz )
extern	int			MakeSoftSound2Ch8Bit22KHz(			LONGLONG SampleNum ) ;																		// �\�t�g�E�G�A�ň�����̔g�`�f�[�^�n���h����쐬����( �`�����l����:2 �ʎq���r�b�g��: 8bit �T���v�����O���g��:22KHz )
extern	int			MakeSoftSound1Ch16Bit44KHz(			LONGLONG SampleNum ) ;																		// �\�t�g�E�G�A�ň�����̔g�`�f�[�^�n���h����쐬����( �`�����l����:1 �ʎq���r�b�g��:16bit �T���v�����O���g��:44.1KHz )
extern	int			MakeSoftSound1Ch16Bit22KHz(			LONGLONG SampleNum ) ;																		// �\�t�g�E�G�A�ň�����̔g�`�f�[�^�n���h����쐬����( �`�����l����:1 �ʎq���r�b�g��:16bit �T���v�����O���g��:22KHz )
extern	int			MakeSoftSound1Ch8Bit44KHz(			LONGLONG SampleNum ) ;																		// �\�t�g�E�G�A�ň�����̔g�`�f�[�^�n���h����쐬����( �`�����l����:1 �ʎq���r�b�g��: 8bit �T���v�����O���g��:44.1KHz )
extern	int			MakeSoftSound1Ch8Bit22KHz(			LONGLONG SampleNum ) ;																		// �\�t�g�E�G�A�ň�����̔g�`�f�[�^�n���h����쐬����( �`�����l����:1 �ʎq���r�b�g��: 8bit �T���v�����O���g��:22KHz )
extern	int			MakeSoftSoundCustom(				int ChannelNum, int BitsPerSample, int SamplesPerSec, LONGLONG SampleNum, int IsFloatType DEFAULTPARAM( = 0 ) ) ;	// �\�t�g�E�G�A�ň�����̔g�`�f�[�^�n���h����쐬����
extern	int			DeleteSoftSound(					int SoftSoundHandle ) ;																		// �\�t�g�E�G�A�ň����g�`�f�[�^�n���h����폜����
#ifndef DX_NON_SAVEFUNCTION
extern	int			SaveSoftSound(						int SoftSoundHandle, const TCHAR *FileName                        ) ;						// �\�t�g�E�G�A�ň����g�`�f�[�^�n���h����WAVE�t�@�C��(PCM)�`���ŕۑ�����
extern	int			SaveSoftSoundWithStrLen(			int SoftSoundHandle, const TCHAR *FileName, size_t FileNameLength ) ;						// �\�t�g�E�G�A�ň����g�`�f�[�^�n���h����WAVE�t�@�C��(PCM)�`���ŕۑ�����
#endif // DX_NON_SAVEFUNCTION
extern	LONGLONG	GetSoftSoundSampleNum(				int SoftSoundHandle ) ;																		// �\�t�g�E�G�A�ň����g�`�f�[�^�n���h���̃T���v������擾����
extern	int			GetSoftSoundFormat(					int SoftSoundHandle, int *Channels, int *BitsPerSample, int *SamplesPerSec, int *IsFloatType DEFAULTPARAM( = NULL ) ) ;				// �\�t�g�E�G�A�ň����g�`�f�[�^�n���h���̃t�H�[�}�b�g��擾����
extern	int			ReadSoftSoundData(					int SoftSoundHandle, LONGLONG SamplePosition, int   *Channel1, int   *Channel2 ) ;			// �\�t�g�E�G�A�ň����g�`�f�[�^�n���h���̃T���v����ǂݎ��
extern	int			ReadSoftSoundDataF(					int SoftSoundHandle, LONGLONG SamplePosition, float *Channel1, float *Channel2 ) ;			// �\�t�g�E�G�A�ň����g�`�f�[�^�n���h���̃T���v����ǂݎ��( float�^�� )
extern	int			WriteSoftSoundData(					int SoftSoundHandle, LONGLONG SamplePosition, int    Channel1, int    Channel2 ) ;			// �\�t�g�E�G�A�ň����g�`�f�[�^�n���h���̃T���v�����������
extern	int			WriteSoftSoundDataF(				int SoftSoundHandle, LONGLONG SamplePosition, float  Channel1, float  Channel2 ) ;			// �\�t�g�E�G�A�ň����g�`�f�[�^�n���h���̃T���v�����������( float�^�� )
extern	int			WriteTimeStretchSoftSoundData(		int SrcSoftSoundHandle, int DestSoftSoundHandle ) ;											// �\�t�g�E�G�A�ň����g�`�f�[�^�n���h���̔g�`�f�[�^�������ς����Ƀf�[�^�̒�����ύX����
extern	int			WritePitchShiftSoftSoundData(		int SrcSoftSoundHandle, int DestSoftSoundHandle ) ;											// �\�t�g�E�G�A�ň����g�`�f�[�^�n���h���̔g�`�f�[�^�̒�����ύX����
extern	void*		GetSoftSoundDataImage(				int SoftSoundHandle ) ;																		// �\�t�g�E�G�A�ň����g�`�f�[�^�n���h���̔g�`�C���[�W���i�[����Ă��郁�����A�h���X��擾����
extern	int			GetFFTVibrationSoftSound(			int SoftSoundHandle, int Channel, LONGLONG SamplePosition, int SampleNum, float *Buffer_Array, int BufferLength ) ;									// �\�t�g�E�G�A�ň����g�`�f�[�^�n���h���̎w��͈̔͂�����t�[���G�ϊ���s���A�e���g����̐U����擾����( SampleNum �� 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536 �̉��ꂩ�ł���K�v������܂��AChannel �� -1 �ɂ���Ɠ�̃`�����l��������������ʂɂȂ�܂� )
extern	int			GetFFTVibrationSoftSoundBase(		int SoftSoundHandle, int Channel, LONGLONG SamplePosition, int SampleNum, float *RealBuffer_Array, float *ImagBuffer_Array, int BufferLength ) ;	// �\�t�g�E�G�A�ň����g�`�f�[�^�n���h���̎w��͈̔͂�����t�[���G�ϊ���s���A�e���g����̐U����擾����A���ʂ̎����Ƌ�����ʁX�Ɏ擾���邱�Ƃ��ł���o�[�W����( SampleNum �� 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536 �̉��ꂩ�ł���K�v������܂��AChannel �� -1 �ɂ���Ɠ�̃`�����l��������������ʂɂȂ�܂� )

extern	int			InitSoftSoundPlayer(				void ) ;																					// �\�t�g�E�G�A�ň����g�`�f�[�^�̃v���C���[�n���h������ׂĉ������
extern	int			MakeSoftSoundPlayer(				int UseFormat_SoftSoundHandle ) ;															// �\�t�g�E�G�A�ň����g�`�f�[�^�̃v���C���[�n���h����쐬����( �t�H�[�}�b�g�͈����̃\�t�g�E�G�A�T�E���h�n���h���Ɠ�����̂ɂ��� )
extern	int			MakeSoftSoundPlayer2Ch16Bit44KHz(	void ) ;																					// �\�t�g�E�G�A�ň����g�`�f�[�^�̃v���C���[�n���h����쐬����( �`�����l����:2 �ʎq���r�b�g��:16bit �T���v�����O���g��:44.1KHz )
extern	int			MakeSoftSoundPlayer2Ch16Bit22KHz(	void ) ;																					// �\�t�g�E�G�A�ň����g�`�f�[�^�̃v���C���[�n���h����쐬����( �`�����l����:2 �ʎq���r�b�g��:16bit �T���v�����O���g��:22KHz )
extern	int			MakeSoftSoundPlayer2Ch8Bit44KHz(	void ) ;																					// �\�t�g�E�G�A�ň����g�`�f�[�^�̃v���C���[�n���h����쐬����( �`�����l����:2 �ʎq���r�b�g��: 8bit �T���v�����O���g��:44.1KHz )
extern	int			MakeSoftSoundPlayer2Ch8Bit22KHz(	void ) ;																					// �\�t�g�E�G�A�ň����g�`�f�[�^�̃v���C���[�n���h����쐬����( �`�����l����:2 �ʎq���r�b�g��: 8bit �T���v�����O���g��:22KHz )
extern	int			MakeSoftSoundPlayer1Ch16Bit44KHz(	void ) ;																					// �\�t�g�E�G�A�ň����g�`�f�[�^�̃v���C���[�n���h����쐬����( �`�����l����:1 �ʎq���r�b�g��:16bit �T���v�����O���g��:44.1KHz )
extern	int			MakeSoftSoundPlayer1Ch16Bit22KHz(	void ) ;																					// �\�t�g�E�G�A�ň����g�`�f�[�^�̃v���C���[�n���h����쐬����( �`�����l����:1 �ʎq���r�b�g��:16bit �T���v�����O���g��:22KHz )
extern	int			MakeSoftSoundPlayer1Ch8Bit44KHz(	void ) ;																					// �\�t�g�E�G�A�ň����g�`�f�[�^�̃v���C���[�n���h����쐬����( �`�����l����:1 �ʎq���r�b�g��: 8bit �T���v�����O���g��:44.1KHz )
extern	int			MakeSoftSoundPlayer1Ch8Bit22KHz(	void ) ;																					// �\�t�g�E�G�A�ň����g�`�f�[�^�̃v���C���[�n���h����쐬����( �`�����l����:1 �ʎq���r�b�g��: 8bit �T���v�����O���g��:22KHz )
extern	int			MakeSoftSoundPlayerCustom(			int ChannelNum, int BitsPerSample, int SamplesPerSec ) ;									// �\�t�g�E�G�A�ň����g�`�f�[�^�̃v���C���[�n���h����쐬����
extern	int			DeleteSoftSoundPlayer(				int SSoundPlayerHandle ) ;																	// �\�t�g�E�G�A�ň����g�`�f�[�^�̃v���C���[�n���h����폜����
extern	int			AddDataSoftSoundPlayer(				int SSoundPlayerHandle, int SoftSoundHandle, LONGLONG AddSamplePosition, int AddSampleNum ) ;	// �\�t�g�E�G�A�ň����g�`�f�[�^�̃v���C���[�n���h���ɔg�`�f�[�^��ǉ�����( �t�H�[�}�b�g�������ł͂Ȃ��ꍇ�̓G���[ )
extern	int			AddDirectDataSoftSoundPlayer(		int SSoundPlayerHandle, const void *SoundData, int AddSampleNum ) ;							// �\�t�g�E�G�A�ň����g�`�f�[�^�̃v���C���[�n���h���Ƀv���C���[���Ή������t�H�[�}�b�g�̐��g�`�f�[�^��ǉ�����
extern	int			AddOneDataSoftSoundPlayer(			int SSoundPlayerHandle, int Channel1, int Channel2 ) ;										// �\�t�g�E�G�A�ň����g�`�f�[�^�̃v���C���[�n���h���ɔg�`�f�[�^���ǉ�����
extern	int			GetSoftSoundPlayerFormat(			int SSoundPlayerHandle, int *Channels, int *BitsPerSample, int *SamplesPerSec ) ;			// �\�t�g�E�G�A�ň����g�`�f�[�^�̃v���C���[�n���h���������f�[�^�t�H�[�}�b�g��擾����
extern	int			StartSoftSoundPlayer(				int SSoundPlayerHandle ) ;																	// �\�t�g�E�G�A�ň����g�`�f�[�^�̃v���C���[�n���h���̍Đ�������J�n����
extern	int			CheckStartSoftSoundPlayer(			int SSoundPlayerHandle ) ;																	// �\�t�g�E�G�A�ň����g�`�f�[�^�̃v���C���[�n���h���̍Đ��������J�n����Ă��邩�擾����( TRUE:�J�n���Ă���  FALSE:��~���Ă��� )
extern	int			StopSoftSoundPlayer(				int SSoundPlayerHandle ) ;																	// �\�t�g�E�G�A�ň����g�`�f�[�^�̃v���C���[�n���h���̍Đ��������~����
extern	int			ResetSoftSoundPlayer(				int SSoundPlayerHandle ) ;																	// �\�t�g�E�G�A�ň����g�`�f�[�^�̃v���C���[�n���h���̏�Ԃ������Ԃɖ߂�( �ǉ����ꂽ�g�`�f�[�^�͍폜����A�Đ���Ԃ������ꍇ�͒�~���� )
extern	int			GetStockDataLengthSoftSoundPlayer(	int SSoundPlayerHandle, int *SoundBufferStockSamples DEFAULTPARAM( = NULL ) ) ;					// �\�t�g�E�G�A�ň����g�`�f�[�^�̃v���C���[�n���h���ɒǉ������g�`�f�[�^�ł܂��Đ��p�T�E���h�o�b�t�@�ɓ]������Ă��Ȃ��g�`�f�[�^�̃T���v������擾����ASoundBufferStockSamples ��w�肷��ƍĐ��p�T�E���h�o�b�t�@�Ŗ��Đ��̃T�E���h�f�[�^�̃T���v�������������܂�
extern	int			CheckSoftSoundPlayerNoneData(		int SSoundPlayerHandle ) ;																	// �\�t�g�E�G�A�ň����g�`�f�[�^�̃v���C���[�n���h���ɍĐ��p�T�E���h�o�b�t�@�ɓ]�����Ă��Ȃ��g�`�f�[�^�������A�Đ��p�T�E���h�o�b�t�@�ɂ�����f�[�^�ȊO�������ǂ�����擾����( TRUE:�����f�[�^�ȊO����  FALSE:�L���f�[�^������ )




// �l�h�c�h����֐�
extern	int			DeleteMusicMem(						int MusicHandle ) ;																			// �l�h�c�h�n���h����폜����
extern	int			LoadMusicMem(						const TCHAR *FileName                        ) ;											// �l�h�c�h�t�@�C����ǂݍ��݂l�h�c�h�n���h����쐬����
extern	int			LoadMusicMemWithStrLen(				const TCHAR *FileName, size_t FileNameLength ) ;											// �l�h�c�h�t�@�C����ǂݍ��݂l�h�c�h�n���h����쐬����
extern	int			LoadMusicMemByMemImage(				const void *FileImage, size_t FileImageSize ) ;												// ��������ɓW�J���ꂽ�l�h�c�h�t�@�C���C���[�W����l�h�c�h�n���h����쐬����
extern	int			PlayMusicMem(						int MusicHandle, int PlayType ) ;															// �l�h�c�h�n���h���̉��t��J�n����
extern	int			StopMusicMem(						int MusicHandle ) ;																			// �l�h�c�h�n���h���̉��t���~����
extern	int			CheckMusicMem(						int MusicHandle ) ;																			// �l�h�c�h�n���h�������t�����ǂ�����擾����( TRUE:���t��  FALSE:��~�� )
extern	int			SetVolumeMusicMem(					int Volume, int MusicHandle ) ;																// �l�h�c�h�n���h���̍Đ����ʂ�Z�b�g����
extern	int			GetMusicMemPosition(				int MusicHandle ) ;																			// �l�h�c�h�n���h���̌��݂̍Đ��ʒu��擾����
extern	int			InitMusicMem(						void ) ;																					// �l�h�c�h�n���h������ׂč폜����
extern	int			ProcessMusicMem(					void ) ;																					// �l�h�c�h�n���h���̎����I����( ����ŌĂ΂�܂� )

extern	int			PlayMusic(							const TCHAR *FileName,                        int PlayType ) ;								// �l�h�c�h�t�@�C������t����
extern	int			PlayMusicWithStrLen(				const TCHAR *FileName, size_t FileNameLength, int PlayType ) ;								// �l�h�c�h�t�@�C������t����
extern	int			PlayMusicByMemImage(				const void *FileImage, size_t FileImageSize,  int PlayType ) ;								// ��������ɓW�J����Ă���l�h�c�h�t�@�C������t����
extern	int			SetVolumeMusic(						int Volume ) ;																				// �l�h�c�h�̍Đ����ʂ�Z�b�g����
extern	int			StopMusic(							void ) ;																					// �l�h�c�h�t�@�C���̉��t��~
extern	int			CheckMusic(							void ) ;																					// �l�h�c�h�t�@�C�������t�����ۂ�����擾����
extern	int			GetMusicPosition(					void ) ;																					// �l�h�c�h�̌��݂̍Đ��ʒu��擾����

extern	int			SelectMidiMode(						int Mode ) ;																				// �l�h�c�h�̍Đ��`����ݒ肷��

#endif // DX_NON_SOUND










// DxArchive_.cpp �֐� �v���g�^�C�v�錾
extern	int			SetUseDXArchiveFlag(				int Flag ) ;															// �c�w�A�[�J�C�u�t�@�C���̓ǂݍ��݋@�\��g�����ǂ�����ݒ肷��( FALSE:�g�p���Ȃ�  TRUE:�g�p���� )
extern	int			SetDXArchivePriority(				int Priority DEFAULTPARAM( = 0 ) ) ;													// �����̂c�w�A�[�J�C�u�t�@�C���ƃt�H���_�����݂����ꍇ�A�ǂ����D�悳���邩��ݒ肷��( 1:�t�H���_��D��@ 0:�c�w�A�[�J�C�u�t�@�C����D��( �f�t�H���g ) )
extern	int			SetDXArchiveExtension(				const TCHAR *Extension DEFAULTPARAM( = NULL ) ) ;										// ��������c�w�A�[�J�C�u�t�@�C���̊g���q��ݒ肷��( Extension:�g���q�������� )
extern	int			SetDXArchiveExtensionWithStrLen(	const TCHAR *Extension DEFAULTPARAM( = NULL ) , size_t ExtensionLength DEFAULTPARAM( = 0 ) ) ;			// ��������c�w�A�[�J�C�u�t�@�C���̊g���q��ݒ肷��( Extension:�g���q�������� )
extern	int			SetDXArchiveKeyString(				const TCHAR *KeyString DEFAULTPARAM( = NULL ) ) ;										// �c�w�A�[�J�C�u�t�@�C���̌��������ݒ肷��( KeyString:�������� )
extern	int			SetDXArchiveKeyStringWithStrLen(	const TCHAR *KeyString DEFAULTPARAM( = NULL ) , size_t KeyStringLength DEFAULTPARAM( = 0 ) ) ;			// �c�w�A�[�J�C�u�t�@�C���̌��������ݒ肷��( KeyString:�������� )

extern	int			DXArchivePreLoad(					const TCHAR *FilePath,                        int ASync DEFAULTPARAM( = FALSE ) ) ;		// �w��̂c�w�`�t�@�C����ۂ��ƃ������ɓǂݍ���( �߂�l  -1:�G���[  0:���� )
extern	int			DXArchivePreLoadWithStrLen(			const TCHAR *FilePath, size_t FilePathLength, int ASync DEFAULTPARAM( = FALSE ) ) ;		// �w��̂c�w�`�t�@�C����ۂ��ƃ������ɓǂݍ���( �߂�l  -1:�G���[  0:���� )
extern	int			DXArchiveCheckIdle(					const TCHAR *FilePath                        ) ;						// �w��̂c�w�`�t�@�C���̎��O�ǂݍ��݂������������ǂ�����擾����( �߂�l  TRUE:�������� FALSE:�܂� )
extern	int			DXArchiveCheckIdleWithStrLen(		const TCHAR *FilePath, size_t FilePathLength ) ;						// �w��̂c�w�`�t�@�C���̎��O�ǂݍ��݂������������ǂ�����擾����( �߂�l  TRUE:�������� FALSE:�܂� )
extern	int			DXArchiveRelease(					const TCHAR *FilePath                        ) ;						// �w��̂c�w�`�t�@�C�������������������
extern	int			DXArchiveReleaseWithStrLen(			const TCHAR *FilePath, size_t FilePathLength ) ;						// �w��̂c�w�`�t�@�C�������������������
extern	int			DXArchiveCheckFile(					const TCHAR *FilePath,                        const TCHAR *TargetFilePath                              ) ;	// �c�w�`�t�@�C���̒��Ɏw��̃t�@�C�������݂��邩�ǂ����𒲂ׂ�ATargetFilePath �͂c�w�`�t�@�C����J�����g�t�H���_�Ƃ����ꍇ�̃p�X( �߂�l:  -1=�G���[  0:����  1:���� )
extern	int			DXArchiveCheckFileWithStrLen(		const TCHAR *FilePath, size_t FilePathLength, const TCHAR *TargetFilePath, size_t TargetFilePathLength ) ;	// �c�w�`�t�@�C���̒��Ɏw��̃t�@�C�������݂��邩�ǂ����𒲂ׂ�ATargetFilePath �͂c�w�`�t�@�C����J�����g�t�H���_�Ƃ����ꍇ�̃p�X( �߂�l:  -1=�G���[  0:����  1:���� )
extern	int			DXArchiveSetMemImage(				void *ArchiveImage, int ArchiveImageSize, const TCHAR *EmulateFilePath,                               int ArchiveImageCopyFlag DEFAULTPARAM( = FALSE ) , int ArchiveImageReadOnly DEFAULTPARAM( = TRUE ) ) ;	// ��������ɓW�J���ꂽ�c�w�`�t�@�C����w��̃t�@�C���p�X�ɂ��邱�Ƃɂ���( EmulateFilePath �͌����Ă� dxa �t�@�C���̃p�X�A�Ⴆ�΂c�w�`�t�@�C���C���[�W�� Image.dxa �Ƃ����t�@�C������ c:\Temp �ɂ��邱�Ƃɂ������ꍇ�� EmulateFilePath �� "c:\\Temp\\Image.dxa" ��n���ASetDXArchiveExtension �Ŋg���q��ύX���Ă���ꍇ�� EmulateFilePath �ɓn���t�@�C���p�X�̊g���q�����ɍ��킹��K�v���� )
extern	int			DXArchiveSetMemImageWithStrLen(		void *ArchiveImage, int ArchiveImageSize, const TCHAR *EmulateFilePath, size_t EmulateFilePathLength, int ArchiveImageCopyFlag DEFAULTPARAM( = FALSE ) , int ArchiveImageReadOnly DEFAULTPARAM( = TRUE ) ) ;	// ��������ɓW�J���ꂽ�c�w�`�t�@�C����w��̃t�@�C���p�X�ɂ��邱�Ƃɂ���( EmulateFilePath �͌����Ă� dxa �t�@�C���̃p�X�A�Ⴆ�΂c�w�`�t�@�C���C���[�W�� Image.dxa �Ƃ����t�@�C������ c:\Temp �ɂ��邱�Ƃɂ������ꍇ�� EmulateFilePath �� "c:\\Temp\\Image.dxa" ��n���ASetDXArchiveExtension �Ŋg���q��ύX���Ă���ꍇ�� EmulateFilePath �ɓn���t�@�C���p�X�̊g���q�����ɍ��킹��K�v���� )
extern	int			DXArchiveReleaseMemImage(			void *ArchiveImage ) ;													// DXArchiveSetMemImage �̐ݒ��������

extern	DWORD		HashCRC32(							const void *SrcData, size_t SrcDataSize ) ;								// �o�C�i���f�[�^����� CRC32 �̃n�b�V���l��v�Z����





















// DxModel.cpp �֐� �v���g�^�C�v�錾

#ifndef DX_NON_MODEL

// ���f���̓ǂݍ��݁E�����֌W
extern	int			MV1LoadModel(						const TCHAR *FileName ) ;											// ���f���̓ǂݍ���( -1:�G���[  0�ȏ�:���f���n���h�� )
extern	int			MV1LoadModelWithStrLen(				const TCHAR *FileName, size_t FileNameLength ) ;					// ���f���̓ǂݍ���( -1:�G���[  0�ȏ�:���f���n���h�� )
extern	int			MV1LoadModelFromMem(				const void *FileImage, int FileSize, int (* FileReadFunc )( const TCHAR *FilePath, void **FileImageAddr, int *FileSize, void *FileReadFuncData ), int (* FileReleaseFunc )( void *MemoryAddr, void *FileReadFuncData ), void *FileReadFuncData DEFAULTPARAM( = NULL ) ) ;	// ��������̃��f���t�@�C���C���[�W�ƓƎ��̓ǂݍ��݃��[�`����g�p���ă��f����ǂݍ���
extern	int			MV1DuplicateModel(					int SrcMHandle ) ;													// �w��̃��f���Ɠ������f����{�f�[�^��g�p���ă��f����쐬����( -1:�G���[  0�ȏ�:���f���n���h�� )
extern	int			MV1CreateCloneModel(				int SrcMHandle ) ;													// �w��̃��f������f����{�f�[�^��܂ߕ�������( MV1DuplicateModel �̓��f����{�f�[�^�͋��L���܂����A������͕������̃��f���Ƃ͈�؋��L�f�[�^�̖������f���n���h����쐬���܂� )( -1:�G���[  0�ȏ�:���f���n���h�� )
extern	int			MV1CreateSimpleModel(				VERTEX3D *Vertex, int VertexNum, unsigned int *Index, int IndexNum, MATERIALPARAM *Material, int GrHandle ) ;		// �w��̒��_�f�[�^�ƃ}�e���A�����A�e�N�X�`����g�p�����V���v���ȂR�c���f���̃n���h����쐬����

extern	int			MV1DeleteModel(						int MHandle ) ;														// ���f����폜����
extern	int			MV1InitModel(						void ) ;															// ���ׂẴ��f����폜����

extern	int			MV1SetLoadModelReMakeNormal(						int Flag ) ;														// ���f����ǂݍ��ލۂɖ@���̍Čv�Z��s�����ǂ�����ݒ肷��( TRUE:�s��  FALSE:�s��Ȃ�( �f�t�H���g ) )
extern	int			MV1SetLoadModelReMakeNormalSmoothingAngle(			float SmoothingAngle DEFAULTPARAM( = 1.562069f ) ) ;				// ���f����ǂݍ��ލۂɍs���@��̍Čv�Z�Ŏg�p����X���[�W���O�p�x��ݒ肷��( �P�ʂ̓��W�A�� )
extern	int			MV1SetLoadModelIgnoreScaling(						int Flag ) ;														// ���f����ǂݍ��ލۂɃX�P�[�����O�f�[�^�𖳎����邩�ǂ�����ݒ肷��( TRUE:��������  FALSE:�������Ȃ�( �f�t�H���g ) )
extern	int			MV1SetLoadModelPositionOptimize(					int Flag ) ;														// ���f����ǂݍ��ލۂɍ��W�f�[�^�̍œK����s�����ǂ�����ݒ肷��( TRUE:�s��  FALSE:�s��Ȃ�( �f�t�H���g ) )
extern	int			MV1SetLoadModelNotEqNormalSide_AddZeroAreaPolygon(	int Flag ) ;														// ���f����ǂݍ��ލۂɃ|���S���̕ӂ��ڂ��Ă��āA���@���̕������قȂ�ӂɖʐςO�̃|���S���𖄂ߍ��ނ��ǂ�����ݒ肷��( TRUE:���ߍ��ށ@FALSE:���ߍ��܂Ȃ�( �f�t�H���g ) )�A( MV1�t�@�C���̓ǂݍ��݂ł͂��̊֐��̐ݒ�͖�������A�|���S���̖��ߍ��݂͎��s����܂��� )
extern	int			MV1SetLoadModelUsePhysicsMode(						int PhysicsMode /* DX_LOADMODEL_PHYSICS_LOADCALC �� */ ) ;			// �ǂݍ��ރ��f���̕������Z���[�h��ݒ肷��
extern	int			MV1SetLoadModelPhysicsWorldGravity(					float Gravity ) ;													// �ǂݍ��ރ��f���̕������Z�ɓK�p����d�̓p�����[�^��ݒ肷��
extern	float		MV1GetLoadModelPhysicsWorldGravity(					void ) ;															// �ǂݍ��ރ��f���̕������Z�ɓK�p����d�̓p�����[�^��擾����
extern	int			MV1SetLoadCalcPhysicsWorldGravity(					int GravityNo, VECTOR Gravity ) ;									// �ǂݍ��ރ��f���̕������Z���[�h�����O�v�Z( DX_LOADMODEL_PHYSICS_LOADCALC )�������ꍇ�ɓK�p�����d�͂̐ݒ�����
extern	VECTOR		MV1GetLoadCalcPhysicsWorldGravity(					int GravityNo ) ;													// �ǂݍ��ރ��f���̕������Z���[�h�����O�v�Z( DX_LOADMODEL_PHYSICS_LOADCALC )�������ꍇ�ɓK�p�����d�͂�擾����
extern	int			MV1SetLoadModelPhysicsCalcPrecision(				int Precision ) ;													// �ǂݍ��ރ��f���̕������Z���[�h�����O�v�Z( DX_LOADMODEL_PHYSICS_LOADCALC )�������ꍇ�ɓK�p����镨�����Z�̎��Ԑi�s�̐��x��ݒ肷��( 0:60FPS  1:120FPS  2:240FPS  3:480FPS  4:960FPS  5:1920FPS )
extern	int			MV1SetLoadModel_PMD_PMX_AnimationFPSMode(			int FPSMode /* DX_LOADMODEL_PMD_PMX_ANIMATION_FPSMODE_30 �� */ ) ;	// PMD, PMX �t�@�C����ǂݍ��񂾍ۂ̃A�j���[�V������ FPS ���[�h��ݒ肷��
extern	int			MV1AddLoadModelDisablePhysicsNameWord(				const TCHAR *NameWord ) ;											// �ǂݍ��ރ��f���̕������Z�����̍��̂̂ݖ����ɂ��邽�߂̖��O�̃��[�h��ǉ�����A�ǉ��ł��郏�[�h������̍ő咷�� 63 �����A�ǉ��ł��郏�[�h�̐��͍ő� 256 ��
extern	int			MV1AddLoadModelDisablePhysicsNameWordWithStrLen(	const TCHAR *NameWord, size_t NameWordLength ) ;					// �ǂݍ��ރ��f���̕������Z�����̍��̂̂ݖ����ɂ��邽�߂̖��O�̃��[�h��ǉ�����A�ǉ��ł��郏�[�h������̍ő咷�� 63 �����A�ǉ��ł��郏�[�h�̐��͍ő� 256 ��
extern	int			MV1ResetLoadModelDisablePhysicsNameWord(			void ) ;															// MV1AddLoadModelDisablePhysicsNameWord �Œǉ��������̖̂������[�h����Z�b�g���Ė������[�h�����̏�����Ԃɖ߂�
extern	int			MV1SetLoadModelDisablePhysicsNameWordMode(			int DisableNameWordMode /* DX_LOADMODEL_PHYSICS_DISABLENAMEWORD_ALWAYS �� */ ) ;	// MV1AddLoadModelDisablePhysicsNameWord �Œǉ��������̖̂������[�h�̓K�p���[����ύX����
extern	int			MV1SetLoadModelAnimFilePath(						const TCHAR *FileName ) ;											// �ǂݍ��ރ��f���ɓK�p����A�j���[�V�����t�@�C���̃p�X��ݒ肷��ANULL��n���Ɛݒ胊�Z�b�g( ���݂� PMD,PMX �݂̂Ɍ��ʂ��� )
extern	int			MV1SetLoadModelAnimFilePathWithStrLen(				const TCHAR *FileName, size_t FileNameLength ) ;					// �ǂݍ��ރ��f���ɓK�p����A�j���[�V�����t�@�C���̃p�X��ݒ肷��ANULL��n���Ɛݒ胊�Z�b�g( ���݂� PMD,PMX �݂̂Ɍ��ʂ��� )
extern	int			MV1SetLoadModelUsePackDraw(							int Flag ) ;														// �ǂݍ��ރ��f���𓯎������`��ɑΉ������邩�ǂ�����ݒ肷��( TRUE:�Ή�������  FALSE:�Ή������Ȃ�( �f�t�H���g ) )�A( �u�Ή�������v�ɂ���ƕ`�悪�����ɂȂ�\�����������ɏ���VRAM�������܂� )
extern	int			MV1SetLoadModelTriangleListUseMaxBoneNum(			int UseMaxBoneNum ) ;												// �ǂݍ��ރ��f���̂ЂƂ̃g���C�A���O�����X�g�Ŏg�p�ł���ő�{�[������ݒ肷��( UseMaxBoneNum �Ŏw��ł���l�͈̔͂� 8 �` 54�A 0 ��w�肷��ƃf�t�H���g����ɖ߂� )
extern	int			MV1SetLoadModelTextureLoad(							int Flag ) ;														// �ǂݍ��ރ��f���Ŏg�p����e�N�X�`���t�@�C����ǂݍ��ނ��ǂ�����ݒ肷��( TRUE:�ǂݍ���(�f�t�H���g) FALSE:�ǂݍ��܂Ȃ� )
extern	int			MV1SetLoadModelIgnoreIK(							int IgnoreFlag ) ;													// �ǂݍ��ރ��f����IK���𖳎����邩�ǂ�����ݒ肷��( TRUE:��������  FALSE:�������Ȃ�(�f�t�H���g) )

// ���f���ۑ��֌W
extern	int			MV1SaveModelToMV1File(				int MHandle, const TCHAR *FileName,                        int SaveType DEFAULTPARAM( = MV1_SAVETYPE_NORMAL ) , int AnimMHandle DEFAULTPARAM( = -1 ) , int AnimNameCheck DEFAULTPARAM( = TRUE ) , int Normal8BitFlag DEFAULTPARAM( = 1 ) , int Position16BitFlag DEFAULTPARAM( = 1 ) , int Weight8BitFlag DEFAULTPARAM( = 0 ) , int Anim16BitFlag DEFAULTPARAM( = 1 ) ) ;		// �w��̃p�X�Ƀ��f����ۑ�����( �߂�l  0:����  -1:�������s��  -2:�g���Ă��Ȃ��A�j���[�V������������ )
extern	int			MV1SaveModelToMV1FileWithStrLen(	int MHandle, const TCHAR *FileName, size_t FileNameLength, int SaveType DEFAULTPARAM( = MV1_SAVETYPE_NORMAL ) , int AnimMHandle DEFAULTPARAM( = -1 ) , int AnimNameCheck DEFAULTPARAM( = TRUE ) , int Normal8BitFlag DEFAULTPARAM( = 1 ) , int Position16BitFlag DEFAULTPARAM( = 1 ) , int Weight8BitFlag DEFAULTPARAM( = 0 ) , int Anim16BitFlag DEFAULTPARAM( = 1 ) ) ;		// �w��̃p�X�Ƀ��f����ۑ�����( �߂�l  0:����  -1:�������s��  -2:�g���Ă��Ȃ��A�j���[�V������������ )
#ifndef DX_NON_SAVEFUNCTION
extern	int			MV1SaveModelToXFile(				int MHandle, const TCHAR *FileName,                        int SaveType DEFAULTPARAM( = MV1_SAVETYPE_NORMAL ) , int AnimMHandle DEFAULTPARAM( = -1 ) , int AnimNameCheck DEFAULTPARAM( = TRUE ) ) ;	// �w��̃p�X�Ƀ��f����w�t�@�C���`���ŕۑ�����( �߂�l  0:����  -1:�������s��  -2:�g���Ă��Ȃ��A�j���[�V������������ )
extern	int			MV1SaveModelToXFileWithStrLen(		int MHandle, const TCHAR *FileName, size_t FileNameLength, int SaveType DEFAULTPARAM( = MV1_SAVETYPE_NORMAL ) , int AnimMHandle DEFAULTPARAM( = -1 ) , int AnimNameCheck DEFAULTPARAM( = TRUE ) ) ;	// �w��̃p�X�Ƀ��f����w�t�@�C���`���ŕۑ�����( �߂�l  0:����  -1:�������s��  -2:�g���Ă��Ȃ��A�j���[�V������������ )
#endif // DX_NON_SAVEFUNCTION

// ���f���`��֌W
extern	int			MV1DrawModel(						int MHandle ) ;														// ���f����`�悷��
extern	int			MV1DrawFrame(						int MHandle, int FrameIndex ) ;										// ���f���̎w��̃t���[����`�悷��
extern	int			MV1DrawMesh(						int MHandle, int MeshIndex ) ;										// ���f���̎w��̃��b�V����`�悷��
extern	int			MV1DrawTriangleList(				int MHandle, int TriangleListIndex ) ;								// ���f���̎w��̃g���C�A���O�����X�g��`�悷��
extern	int			MV1DrawModelDebug(					int MHandle, unsigned int Color, int IsNormalLine, float NormalLineLength, int IsPolyLine, int IsCollisionBox ) ;	// ���f���̃f�o�b�O�`��

// �`��ݒ�֌W
extern	int			MV1SetUseOrigShader(				int UseFlag ) ;														// ���f���̕`��� SetUseVertexShader, SetUsePixelShader �Ŏw�肵���V�F�[�_�[��g�p���邩�ǂ�����ݒ肷��( TRUE:�g�p����  FALSE:�g�p���Ȃ�( �f�t�H���g ) )
extern	int			MV1SetDrawMode(						int DrawMode /* DX_MV1_DRAWMODE_NORMAL �� */ ) ;					// ���f���̕`�惂�[�h�̐ݒ�
extern	int			MV1SetSemiTransDrawMode(			int DrawMode /* DX_SEMITRANSDRAWMODE_ALWAYS �� */ ) ;				// ���f���̔������v�f�����镔���ɂ��Ă̕`�惂�[�h��ݒ肷��

// ���f����{����֌W
extern	MATRIX		MV1GetLocalWorldMatrix(				int MHandle ) ;														// ���f���̃��[�J�����W���烏�[���h���W�ɕϊ�����s��𓾂�
extern	MATRIX_D	MV1GetLocalWorldMatrixD(			int MHandle ) ;														// ���f���̃��[�J�����W���烏�[���h���W�ɕϊ�����s��𓾂�
extern	int			MV1SetPosition(						int MHandle, VECTOR   Position ) ;									// ���f���̍��W��Z�b�g
extern	int			MV1SetPositionD(					int MHandle, VECTOR_D Position ) ;									// ���f���̍��W��Z�b�g
extern	VECTOR		MV1GetPosition(						int MHandle ) ;														// ���f���̍��W��擾
extern	VECTOR_D	MV1GetPositionD(					int MHandle ) ;														// ���f���̍��W��擾
extern	int			MV1SetScale(						int MHandle, VECTOR Scale ) ;										// ���f���̊g��l��Z�b�g
extern	VECTOR		MV1GetScale(						int MHandle ) ;														// ���f���̊g��l��擾
extern	int			MV1SetRotationXYZ(					int MHandle, VECTOR Rotate ) ;										// ���f���̉�]�l��Z�b�g( X����]��Y����]��Z����]���� )
extern	VECTOR		MV1GetRotationXYZ(					int MHandle ) ;														// ���f���̉�]�l��擾( X����]��Y����]��Z����]���� )
extern	int			MV1SetRotationZYAxis(				int MHandle, VECTOR ZAxisDirection, VECTOR YAxisDirection, float ZAxisTwistRotate ) ;	// ���f���̂y���Ƃx���̌�����Z�b�g����
extern	int			MV1SetRotationYUseDir(				int MHandle, VECTOR Direction, float OffsetYAngle ) ;				// ���f���̂x���̉�]�l��w��̃x�N�g���̌�������ɐݒ肷��A���f����Z���̃}�C�i�X����������Ă��邱�Ƃ�z�肷��̂ŁA�����ł͂Ȃ��ꍇ�� OffsetYAngle �ŕ␳����A�w����]�A�y����]�͂O�ŌŒ�
extern	int			MV1SetRotationMatrix(				int MHandle, MATRIX Matrix ) ;										// ���f���̉�]�p�s���Z�b�g����
extern	MATRIX		MV1GetRotationMatrix(				int MHandle ) ;														// ���f���̉�]�p�s���擾����
extern	int			MV1SetMatrix(						int MHandle, MATRIX   Matrix ) ;									// ���f���̕ό`�p�s���Z�b�g����
extern	int			MV1SetMatrixD(						int MHandle, MATRIX_D Matrix ) ;									// ���f���̕ό`�p�s���Z�b�g����
extern	MATRIX		MV1GetMatrix(						int MHandle ) ;														// ���f���̕ό`�p�s���擾����
extern	MATRIX_D	MV1GetMatrixD(						int MHandle ) ;														// ���f���̕ό`�p�s���擾����
extern	int			MV1SetVisible(						int MHandle, int VisibleFlag ) ;									// ���f���̕\���A��\����Ԃ�ύX����( TRUE:�\��  FALSE:��\�� )
extern	int			MV1GetVisible(						int MHandle ) ;														// ���f���̕\���A��\����Ԃ�擾����( TRUE:�\��  FALSE:��\�� )
extern	int			MV1SetMeshCategoryVisible(			int MHandle, int MeshCategory, int VisibleFlag ) ;					// ���f���̃��b�V���̎��( DX_MV1_MESHCATEGORY_NORMAL �Ȃ� )���̕\���A��\����ݒ肷��( TRUE:�\��  FALSE:��\�� )
extern	int			MV1GetMeshCategoryVisible(			int MHandle, int MeshCategory ) ;									// ���f���̃��b�V���̎��( DX_MV1_MESHCATEGORY_NORMAL �Ȃ� )���̕\���A��\����擾����( TRUE:�\��  FALSE:��\�� )
extern	int			MV1SetDifColorScale(				int MHandle, COLOR_F Scale ) ;										// ���f���̃f�B�t���[�Y�J���[�̃X�P�[���l��ݒ肷��( �f�t�H���g�l�� 1.0f )
extern	COLOR_F		MV1GetDifColorScale(				int MHandle ) ;														// ���f���̃f�B�t���[�Y�J���[�̃X�P�[���l��擾����( �f�t�H���g�l�� 1.0f )
extern	int			MV1SetSpcColorScale(				int MHandle, COLOR_F Scale ) ;										// ���f���̃X�y�L�����J���[�̃X�P�[���l��ݒ肷��( �f�t�H���g�l�� 1.0f )
extern	COLOR_F		MV1GetSpcColorScale(				int MHandle ) ;														// ���f���̃X�y�L�����J���[�̃X�P�[���l��擾����( �f�t�H���g�l�� 1.0f )
extern	int			MV1SetEmiColorScale(				int MHandle, COLOR_F Scale ) ;										// ���f���̃G�~�b�V�u�J���[�̃X�P�[���l��ݒ肷��( �f�t�H���g�l�� 1.0f )
extern	COLOR_F		MV1GetEmiColorScale(				int MHandle ) ;														// ���f���̃G�~�b�V�u�J���[�̃X�P�[���l��擾����( �f�t�H���g�l�� 1.0f )
extern	int			MV1SetAmbColorScale(				int MHandle, COLOR_F Scale ) ;										// ���f���̃A���r�G���g�J���[�̃X�P�[���l��ݒ肷��( �f�t�H���g�l�� 1.0f )
extern	COLOR_F		MV1GetAmbColorScale(				int MHandle ) ;														// ���f���̃A���r�G���g�J���[�̃X�P�[���l��擾����( �f�t�H���g�l�� 1.0f )
extern	int			MV1GetSemiTransState(				int MHandle ) ;														// ���f���ɔ������v�f�����邩�ǂ�����擾����( �߂�l TRUE:����  FALSE:�Ȃ� )
extern	int			MV1SetOpacityRate(					int MHandle, float Rate ) ;											// ���f���̕s�����x��ݒ肷��( �s���� 1.0f �` ���� 0.0f )
extern	float		MV1GetOpacityRate(					int MHandle ) ;														// ���f���̕s�����x��擾����( �s���� 1.0f �` ���� 0.0f )
extern	int			MV1SetUseDrawMulAlphaColor(			int MHandle, int Flag ) ;											// ���f����`�悷��ۂ�RGB�l�ɑ΂���A�l���Z���邩�ǂ�����ݒ肷��( �`�挋�ʂ���Z�ς݃A���t�@�摜�ɂȂ�܂� )( Flag   TRUE:RGB�l�ɑ΂���A�l���Z����  FALSE:��Z���Ȃ�(�f�t�H���g) )
extern	int			MV1GetUseDrawMulAlphaColor(			int MHandle ) ;														// ���f����`�悷��ۂ�RGB�l�ɑ΂���A�l���Z���邩�ǂ�����擾����( �`�挋�ʂ���Z�ς݃A���t�@�摜�ɂȂ�܂� )( �߂�l TRUE:RGB�l�ɑ΂���A�l���Z����  FALSE:��Z���Ȃ�(�f�t�H���g) )
extern	int			MV1SetUseZBuffer(					int MHandle, int Flag ) ;											// ���f����`�悷��ۂɂy�o�b�t�@��g�p���邩�ǂ�����ݒ肷��
extern	int			MV1SetWriteZBuffer(					int MHandle, int Flag ) ;											// ���f����`�悷��ۂɂy�o�b�t�@�ɏ������݂�s�����ǂ�����ݒ肷��
extern	int			MV1SetZBufferCmpType(				int MHandle, int CmpType /* DX_CMP_NEVER �� */ ) ;					// ���f���̕`�掞�̂y�l�̔�r���[�h��ݒ肷��
extern	int			MV1SetZBias(						int MHandle, int Bias ) ;											// ���f���̕`�掞�̏������ނy�l�̃o�C�A�X��ݒ肷��
extern	int			MV1SetUseVertDifColor(				int MHandle, int UseFlag ) ;										// ���f���̊܂܂�郁�b�V���̒��_�f�B�t���[�Y�J���[��}�e���A���̃f�B�t���[�Y�J���[�̑���Ɏg�p���邩�ǂ�����ݒ肷��( TRUE:�}�e���A���J���[�̑���Ɏg�p����  FALSE:�}�e���A���J���[��g�p���� )
extern	int			MV1SetUseVertSpcColor(				int MHandle, int UseFlag ) ;										// ���f���Ɋ܂܂�郁�b�V���̒��_�X�y�L�����J���[��}�e���A���̃X�y�L�����J���[�̑���Ɏg�p���邩�ǂ�����ݒ肷��( TRUE:�}�e���A���J���[�̑���Ɏg�p����  FALSE:�}�e���A���J���[��g�p���� )
extern	int			MV1SetSampleFilterMode(				int MHandle, int FilterMode ) ;										// ���f���̃e�N�X�`���̃T���v���t�B���^�[���[�h��ύX����( FilterMode �� DX_DRAWMODE_NEAREST �� )
extern	int			MV1SetMaxAnisotropy(				int MHandle, int MaxAnisotropy ) ;									// ���f���ٕ̈����t�B���^�����O�̍ő原����ݒ肷��
extern	int			MV1SetWireFrameDrawFlag(			int MHandle, int Flag ) ;											// ���f������C���[�t���[���ŕ`�悷�邩�ǂ�����ݒ肷��
extern	int			MV1RefreshVertColorFromMaterial(	int MHandle ) ;														// ���f���̒��_�J���[����ݐݒ肳��Ă���}�e���A���̃J���[�ɂ���
extern	int			MV1SetPhysicsWorldGravity(			int MHandle, VECTOR Gravity ) ;										// ���f���̕������Z�̏d�͂�ݒ肷��
extern	int			MV1PhysicsCalculation(				int MHandle, float MillisecondTime ) ;								// ���f���̕������Z��w�莞�ԕ��o�߂����Ɖ��肵�Čv�Z����( MillisecondTime �Ŏw�肷�鎞�Ԃ̒P�ʂ̓~���b )
extern	int			MV1PhysicsResetState(				int MHandle ) ;														// ���f���̕������Z�̏�Ԃ���Z�b�g����( �ʒu�����[�v�����Ƃ��p )
extern	int			MV1SetPrioritizePhysicsOverAnimFlag( int MHandle, int Flag ) ;											// ���f���̕������Z��A�j���[�V�������D�悷�邩�ǂ�����ݒ肷��( TRUE:�������Z��D�悷��  FALSE:�A�j���[�V������D�悷��( �f�t�H���g ) )
extern	int			MV1SetUseShapeFlag(					int MHandle, int UseFlag ) ;										// ���f���̃V�F�C�v�@�\��g�p���邩�ǂ�����ݒ肷��( UseFlag  TRUE:�g�p����( �f�t�H���g )  FALSE:�g�p���Ȃ� )
extern	int			MV1GetMaterialNumberOrderFlag(		int MHandle ) ;														// ���f���̃}�e���A���ԍ����Ƀ��b�V����`�悷�邩�ǂ����̃t���O��擾����( TRUE:�}�e���A���ԍ����ɕ`��  FALSE:�s�������b�V���̌㔼�������b�V�� )

// �A�j���[�V�����֌W
extern	int			MV1AttachAnim(						int MHandle, int AnimIndex, int AnimSrcMHandle DEFAULTPARAM( = -1 ) , int NameCheck DEFAULTPARAM( = TRUE ) ) ;		// �A�j���[�V������A�^�b�`����( �߂�l  -1:�G���[  0�ȏ�:�A�^�b�`�C���f�b�N�X )
extern	int			MV1DetachAnim(						int MHandle, int AttachIndex ) ;													// �A�j���[�V������f�^�b�`����
extern	int			MV1SetAttachAnimTime(				int MHandle, int AttachIndex, float Time ) ;										// �A�^�b�`���Ă���A�j���[�V�����̍Đ����Ԃ�ݒ肷��
extern	float		MV1GetAttachAnimTime(				int MHandle, int AttachIndex ) ;													// �A�^�b�`���Ă���A�j���[�V�����̍Đ����Ԃ�擾����
extern	float		MV1GetAttachAnimTotalTime(			int MHandle, int AttachIndex ) ;													// �A�^�b�`���Ă���A�j���[�V�����̑����Ԃ𓾂�
extern	int			MV1SetAttachAnimBlendRate(			int MHandle, int AttachIndex, float Rate DEFAULTPARAM( = 1.0f ) ) ;					// �A�^�b�`���Ă���A�j���[�V�����̃u�����h����ݒ肷��
extern	float		MV1GetAttachAnimBlendRate(			int MHandle, int AttachIndex ) ;													// �A�^�b�`���Ă���A�j���[�V�����̃u�����h����擾����
extern	int			MV1SetAttachAnimBlendRateToFrame(	int MHandle, int AttachIndex, int FrameIndex, float Rate, int SetChild DEFAULTPARAM( = TRUE ) ) ;	// �A�^�b�`���Ă���A�j���[�V�����̃u�����h����ݒ肷��( �t���[���P�� )
extern	float		MV1GetAttachAnimBlendRateToFrame(	int MHandle, int AttachIndex, int FrameIndex ) ;									// �A�^�b�`���Ă���A�j���[�V�����̃u�����h����擾����( �t���[���P�� )
extern	int			MV1SetAttachAnimTimeToFrame(		int MHandle, int AttachIndex, int FrameIndex, float Time, int SetChild DEFAULTPARAM( = TRUE ) ) ;	// �A�^�b�`���Ă���A�j���[�V�����̍Đ����Ԃ�ݒ肷��( �t���[���P�� )( Time �Ƀ}�C�i�X�̒l��n���Ɛݒ���� )
extern	float		MV1GetAttachAnimTimeToFrame(		int MHandle, int AttachIndex, int FrameIndex ) ;									// �A�^�b�`���Ă���A�j���[�V�����̍Đ����Ԃ�擾����( �t���[���P�� )
extern	int			MV1GetAttachAnim(					int MHandle, int AttachIndex ) ;													// �A�^�b�`���Ă���A�j���[�V�����̃A�j���[�V�����C���f�b�N�X��擾����
extern	int			MV1SetAttachAnimUseShapeFlag(		int MHandle, int AttachIndex, int UseFlag ) ;										// �A�^�b�`���Ă���A�j���[�V�����̃V�F�C�v��g�p���邩�ǂ�����ݒ肷��( UseFlag  TRUE:�g�p����( �f�t�H���g )  FALSE:�g�p���Ȃ� )
extern	int			MV1GetAttachAnimUseShapeFlag(		int MHandle, int AttachIndex ) ;													// �A�^�b�`���Ă���A�j���[�V�����̃V�F�C�v��g�p���邩�ǂ�����擾����
extern	VECTOR		MV1GetAttachAnimFrameLocalPosition(	int MHandle, int AttachIndex, int FrameIndex ) ;									// �A�^�b�`���Ă���A�j���[�V�����̎w��̃t���[���̌��݂̃��[�J�����W��擾����
extern	MATRIX		MV1GetAttachAnimFrameLocalMatrix(	int MHandle, int AttachIndex, int FrameIndex ) ;									// �A�^�b�`���Ă���A�j���[�V�����̎w��̃t���[���̌��݂̃��[�J���ϊ��s���擾����

extern	int			MV1GetAnimNum(						int MHandle ) ;																		// �A�j���[�V�����̐���擾����
extern	const TCHAR *MV1GetAnimName(					int MHandle, int AnimIndex ) ;														// �w��ԍ��̃A�j���[�V��������擾����( NULL:�G���[ )
extern	int			MV1SetAnimName(						int MHandle, int AnimIndex, const TCHAR *AnimName                        ) ;		// �w��ԍ��̃A�j���[�V��������ύX����
extern	int			MV1SetAnimNameWithStrLen(			int MHandle, int AnimIndex, const TCHAR *AnimName, size_t AnimNameLength ) ;		// �w��ԍ��̃A�j���[�V��������ύX����
extern	int			MV1GetAnimIndex(					int MHandle, const TCHAR *AnimName                        ) ;						// �w�薼�̃A�j���[�V�����ԍ���擾����( -1:�G���[ )
extern	int			MV1GetAnimIndexWithStrLen(			int MHandle, const TCHAR *AnimName, size_t AnimNameLength ) ;						// �w�薼�̃A�j���[�V�����ԍ���擾����( -1:�G���[ )
extern	float		MV1GetAnimTotalTime(				int MHandle, int AnimIndex ) ;														// �w��ԍ��̃A�j���[�V�����̑����Ԃ𓾂�
extern	int			MV1GetAnimTargetFrameNum(			int MHandle, int AnimIndex ) ;														// �w��̃A�j���[�V�������^�[�Q�b�g�Ƃ���t���[���̐���擾����
extern	const TCHAR *MV1GetAnimTargetFrameName(			int MHandle, int AnimIndex, int AnimFrameIndex ) ;									// �w��̃A�j���[�V�������^�[�Q�b�g�Ƃ���t���[���̖��O��擾����
extern	int			MV1GetAnimTargetFrame(				int MHandle, int AnimIndex, int AnimFrameIndex ) ;									// �w��̃A�j���[�V�������^�[�Q�b�g�Ƃ���t���[���̔ԍ���擾����
extern	int			MV1GetAnimTargetFrameKeySetNum(		int MHandle, int AnimIndex, int AnimFrameIndex ) ;									// �w��̃A�j���[�V�������^�[�Q�b�g�Ƃ���t���[���p�̃A�j���[�V�����L�[�Z�b�g�̐���擾����
extern	int			MV1GetAnimTargetFrameKeySet(		int MHandle, int AnimIndex, int AnimFrameIndex, int Index ) ;						// �w��̃A�j���[�V�������^�[�Q�b�g�Ƃ���t���[���p�̃A�j���[�V�����L�[�Z�b�g�L�[�Z�b�g�C���f�b�N�X��擾����

extern	int			MV1GetAnimKeySetNum(				int MHandle ) ;																		// ���f���Ɋ܂܂��A�j���[�V�����L�[�Z�b�g�̑����𓾂� 
extern	int			MV1GetAnimKeySetType(				int MHandle, int AnimKeySetIndex ) ;												// �w��̃A�j���[�V�����L�[�Z�b�g�̃^�C�v��擾����( MV1_ANIMKEY_TYPE_QUATERNION �� )
extern	int			MV1GetAnimKeySetDataType(			int MHandle, int AnimKeySetIndex ) ;												// �w��̃A�j���[�V�����L�[�Z�b�g�̃f�[�^�^�C�v��擾����( MV1_ANIMKEY_DATATYPE_ROTATE �� )
extern	int			MV1GetAnimKeySetTimeType(			int MHandle, int AnimKeySetIndex ) ;												// �w��̃A�j���[�V�����L�[�Z�b�g�̃L�[�̎��ԃf�[�^�^�C�v��擾����( MV1_ANIMKEY_TIME_TYPE_ONE �� )
extern	int			MV1GetAnimKeySetDataNum(			int MHandle, int AnimKeySetIndex ) ;												// �w��̃A�j���[�V�����L�[�Z�b�g�̃L�[�̐���擾����
extern	float		MV1GetAnimKeyDataTime(				int MHandle, int AnimKeySetIndex, int Index ) ;										// �w��̃A�j���[�V�����L�[�Z�b�g�̃L�[�̎��Ԃ�擾����
extern	int			MV1GetAnimKeyDataIndexFromTime(		int MHandle, int AnimKeySetIndex, float Time ) ;									// �w��̃A�j���[�V�����L�[�Z�b�g�̎w��̎��Ԃł̃L�[�̔ԍ���擾����
extern	FLOAT4		MV1GetAnimKeyDataToQuaternion(		int MHandle, int AnimKeySetIndex, int Index ) ;										// �w��̃A�j���[�V�����L�[�Z�b�g�̃L�[��擾����A�L�[�^�C�v�� MV1_ANIMKEY_TYPE_QUATERNION �ł͖��������ꍇ�͎��s����
extern	FLOAT4		MV1GetAnimKeyDataToQuaternionFromTime( int MHandle, int AnimKeySetIndex, float Time ) ;									// �w��̃A�j���[�V�����L�[�Z�b�g�̃L�[��擾����A�L�[�^�C�v�� MV1_ANIMKEY_TYPE_QUATERNION �ł͖��������ꍇ�͎��s����( ���Ԏw��� )
extern	VECTOR		MV1GetAnimKeyDataToVector(			int MHandle, int AnimKeySetIndex, int Index ) ;										// �w��̃A�j���[�V�����L�[�Z�b�g�̃L�[��擾����A�L�[�^�C�v�� MV1_ANIMKEY_TYPE_VECTOR �ł͖��������ꍇ�͎��s����
extern	VECTOR		MV1GetAnimKeyDataToVectorFromTime(	int MHandle, int AnimKeySetIndex, float Time ) ;									// �w��̃A�j���[�V�����L�[�Z�b�g�̃L�[��擾����A�L�[�^�C�v�� MV1_ANIMKEY_TYPE_VECTOR �ł͖��������ꍇ�͎��s����( ���Ԏw��� )
extern	MATRIX		MV1GetAnimKeyDataToMatrix(			int MHandle, int AnimKeySetIndex, int Index ) ;										// �w��̃A�j���[�V�����L�[�Z�b�g�̃L�[��擾����A�L�[�^�C�v�� MV1_ANIMKEY_TYPE_MATRIX4X4C �� MV1_ANIMKEY_TYPE_MATRIX3X3 �ł͖��������ꍇ�͎��s����
extern	MATRIX		MV1GetAnimKeyDataToMatrixFromTime(	int MHandle, int AnimKeySetIndex, float Time ) ;									// �w��̃A�j���[�V�����L�[�Z�b�g�̃L�[��擾����A�L�[�^�C�v�� MV1_ANIMKEY_TYPE_MATRIX4X4C �� MV1_ANIMKEY_TYPE_MATRIX3X3 �ł͖��������ꍇ�͎��s����( ���Ԏw��� )
extern	float		MV1GetAnimKeyDataToFlat(			int MHandle, int AnimKeySetIndex, int Index ) ;										// �w��̃A�j���[�V�����L�[�Z�b�g�̃L�[��擾����A�L�[�^�C�v�� MV1_ANIMKEY_TYPE_FLAT �ł͖��������ꍇ�͎��s����
extern	float		MV1GetAnimKeyDataToFlatFromTime(	int MHandle, int AnimKeySetIndex, float Time ) ;									// �w��̃A�j���[�V�����L�[�Z�b�g�̃L�[��擾����A�L�[�^�C�v�� MV1_ANIMKEY_TYPE_FLAT �ł͖��������ꍇ�͎��s����( ���Ԏw��� )
extern	float		MV1GetAnimKeyDataToLinear(			int MHandle, int AnimKeySetIndex, int Index ) ;										// �w��̃A�j���[�V�����L�[�Z�b�g�̃L�[��擾����A�L�[�^�C�v�� MV1_ANIMKEY_TYPE_LINEAR �ł͖��������ꍇ�͎��s����
extern	float		MV1GetAnimKeyDataToLinearFromTime(	int MHandle, int AnimKeySetIndex, float Time ) ;									// �w��̃A�j���[�V�����L�[�Z�b�g�̃L�[��擾����A�L�[�^�C�v�� MV1_ANIMKEY_TYPE_LINEAR �ł͖��������ꍇ�͎��s����( ���Ԏw��� )

// �}�e���A���֌W
extern	int			MV1GetMaterialNum(					int MHandle ) ;															// ���f���Ŏg�p���Ă���}�e���A���̐���擾����
extern	const TCHAR *MV1GetMaterialName(				int MHandle, int MaterialIndex ) ;										// �w��̃}�e���A���̖��O��擾����
extern	int			MV1SetMaterialTypeAll(				int MHandle,                    int Type ) ;							// �S�Ẵ}�e���A���̃^�C�v��ύX����( Type : DX_MATERIAL_TYPE_NORMAL �Ȃ� )
extern	int			MV1SetMaterialType(					int MHandle, int MaterialIndex, int Type ) ;							// �w��̃}�e���A���̃^�C�v��ύX����( Type : DX_MATERIAL_TYPE_NORMAL �Ȃ� )
extern	int			MV1GetMaterialType(					int MHandle, int MaterialIndex ) ;										// �w��̃}�e���A���̃^�C�v��擾����( �߂�l : DX_MATERIAL_TYPE_NORMAL �Ȃ� )
extern	int			MV1SetMaterialTypeParamAll(			int MHandle,                    ... ) ;									// �S�Ẵ}�e���A���̃^�C�v�ʃp�����[�^��ύX����( �}�e���A���^�C�v DX_MATERIAL_TYPE_MAT_SPEC_LUMINANCE_TWO_COLOR �ȂǂŎg�p )
extern	int			MV1SetMaterialTypeParam(			int MHandle, int MaterialIndex, ... ) ;									// �w��̃}�e���A���̃^�C�v�ʃp�����[�^��ύX����( �}�e���A���^�C�v DX_MATERIAL_TYPE_MAT_SPEC_LUMINANCE_TWO_COLOR �ȂǂŎg�p )
//		int			MV1SetMaterialTypeParam(			int MHandle, int MaterialIndex, /* DX_MATERIAL_TYPE_MAT_SPEC_LUMINANCE_UNORM            �̏ꍇ */ float MinParam = ���K���̉����l( ���̒l�ȉ��� 0.0f �ɂȂ� ), float MaxParam = ���K���̏���l( ���̒l�ȏオ 1.0f �ɂȂ� ) ) ;
//		int			MV1SetMaterialTypeParam(			int MHandle, int MaterialIndex, /* DX_MATERIAL_TYPE_MAT_SPEC_LUMINANCE_CLIP_UNORM       �̏ꍇ */ float MinParam = ���K���̉����l( ���̒l�ȉ��� 0.0f �ɂȂ� ), float MaxParam = ���K���̏���l( ���̒l�ȏオ 1.0f �ɂȂ� ), float ClipParam = 臒l( ���̒l������ 0.0f �ɂȂ� ) ) ;
//		int			MV1SetMaterialTypeParam(			int MHandle, int MaterialIndex, /* DX_MATERIAL_TYPE_MAT_SPEC_LUMINANCE_CMP_GREATEREQUAL �̏ꍇ */ float CmpParam = ��r�l( ���̒l�ȏ�̏ꍇ�� 1.0f ���A�����̏ꍇ�� 0.0f ���������܂�� ) ) ;
//		int			MV1SetMaterialTypeParam(			int MHandle, int MaterialIndex, /* DX_MATERIAL_TYPE_MAT_SPEC_POWER_UNORM                �̏ꍇ */ float MinParam = ���K���̉����l( ���̒l�ȉ��� 0.0f �ɂȂ� ), float MaxParam = ���K���̏���l( ���̒l�ȏオ 1.0f �ɂȂ� ) ) ;
//		int			MV1SetMaterialTypeParam(			int MHandle, int MaterialIndex, /* DX_MATERIAL_TYPE_MAT_SPEC_POWER_CLIP_UNORM           �̏ꍇ */ float MinParam = ���K���̉����l( ���̒l�ȉ��� 0.0f �ɂȂ� ), float MaxParam = ���K���̏���l( ���̒l�ȏオ 1.0f �ɂȂ� ), float ClipParam = 臒l( ���̒l������ 0.0f �ɂȂ� ) ) ;
//		int			MV1SetMaterialTypeParam(			int MHandle, int MaterialIndex, /* DX_MATERIAL_TYPE_MAT_SPEC_POWER_CMP_GREATEREQUAL     �̏ꍇ */ float CmpParam = ��r�l( ���̒l�ȏ�̏ꍇ�� 1.0f ���A�����̏ꍇ�� 0.0f ���������܂�� ) ) ;
extern	int			MV1SetMaterialDifColor(				int MHandle, int MaterialIndex, COLOR_F Color ) ;						// �w��̃}�e���A���̃f�B�t���[�Y�J���[��ݒ肷��
extern	COLOR_F		MV1GetMaterialDifColor( 			int MHandle, int MaterialIndex ) ;										// �w��̃}�e���A���̃f�B�t���[�Y�J���[��擾����
extern	int			MV1SetMaterialSpcColor( 			int MHandle, int MaterialIndex, COLOR_F Color ) ;						// �w��̃}�e���A���̃X�y�L�����J���[��ݒ肷��
extern	COLOR_F		MV1GetMaterialSpcColor( 			int MHandle, int MaterialIndex ) ;										// �w��̃}�e���A���̃X�y�L�����J���[��擾����
extern	int			MV1SetMaterialEmiColor( 			int MHandle, int MaterialIndex, COLOR_F Color ) ;						// �w��̃}�e���A���̃G�~�b�V�u�J���[��ݒ肷��
extern	COLOR_F		MV1GetMaterialEmiColor( 			int MHandle, int MaterialIndex ) ;										// �w��̃}�e���A���̃G�~�b�V�u�J���[��擾����
extern	int			MV1SetMaterialAmbColor( 			int MHandle, int MaterialIndex, COLOR_F Color ) ;						// �w��̃}�e���A���̃A���r�G���g�J���[��ݒ肷��
extern	COLOR_F		MV1GetMaterialAmbColor( 			int MHandle, int MaterialIndex ) ;										// �w��̃}�e���A���̃A���r�G���g�J���[��擾����
extern	int			MV1SetMaterialSpcPower( 			int MHandle, int MaterialIndex, float Power ) ;							// �w��̃}�e���A���̃X�y�L�����̋�����ݒ肷��
extern	float		MV1GetMaterialSpcPower( 			int MHandle, int MaterialIndex ) ;										// �w��̃}�e���A���̃X�y�L�����̋�����擾����
extern	int			MV1SetMaterialDifMapTexture(		int MHandle, int MaterialIndex, int TexIndex ) ;						// �w��̃}�e���A���Ńf�B�t���[�Y�}�b�v�Ƃ��Ďg�p����e�N�X�`����w�肷��
extern	int			MV1GetMaterialDifMapTexture(		int MHandle, int MaterialIndex ) ;										// �w��̃}�e���A���Ńf�B�t���[�Y�}�b�v�Ƃ��Ďg�p����Ă���e�N�X�`���̃C���f�b�N�X��擾����
extern	int			MV1SetMaterialSubDifMapTexture(		int MHandle, int MaterialIndex, int TexIndex ) ;						// �w��̃}�e���A���ŃT�u�f�B�t���[�Y�}�b�v�Ƃ��Ďg�p����e�N�X�`����w�肷��
extern	int			MV1GetMaterialSubDifMapTexture(		int MHandle, int MaterialIndex ) ;										// �w��̃}�e���A���ŃT�u�f�B�t���[�Y�}�b�v�Ƃ��Ďg�p����Ă���e�N�X�`���̃C���f�b�N�X��擾����
extern	int			MV1SetMaterialSpcMapTexture(		int MHandle, int MaterialIndex, int TexIndex ) ;						// �w��̃}�e���A���ŃX�y�L�����}�b�v�Ƃ��Ďg�p����e�N�X�`����w�肷��
extern	int			MV1GetMaterialSpcMapTexture(		int MHandle, int MaterialIndex ) ;										// �w��̃}�e���A���ŃX�y�L�����}�b�v�Ƃ��Ďg�p����Ă���e�N�X�`���̃C���f�b�N�X��擾����
extern	int			MV1SetMaterialNormalMapTexture(		int MHandle, int MaterialIndex, int TexIndex ) ;						// �w��̃}�e���A���Ŗ@���}�b�v�Ƃ��Ďg�p����e�N�X�`����w�肷��
extern	int			MV1GetMaterialNormalMapTexture(		int MHandle, int MaterialIndex ) ;										// �w��̃}�e���A���Ŗ@���}�b�v�Ƃ��Ďg�p����Ă���e�N�X�`���̃C���f�b�N�X��擾����
extern	int			MV1SetMaterialDifGradTexture(		int MHandle, int MaterialIndex, int TexIndex ) ;						// �w��̃}�e���A���Ńg�D�[�������_�����O�̃f�B�t���[�Y�O���f�[�V�����}�b�v�Ƃ��Ďg�p����e�N�X�`����ݒ肷��
extern	int			MV1GetMaterialDifGradTexture(		int MHandle, int MaterialIndex ) ;										// �w��̃}�e���A���Ńg�D�[�������_�����O�̃f�B�t���[�Y�O���f�[�V�����}�b�v�Ƃ��Ďg�p����e�N�X�`����擾����
extern	int			MV1SetMaterialSpcGradTexture(		int MHandle, int MaterialIndex, int TexIndex ) ;						// �w��̃}�e���A���Ńg�D�[�������_�����O�̃X�y�L�����O���f�[�V�����}�b�v�Ƃ��Ďg�p����e�N�X�`����ݒ肷��
extern	int			MV1GetMaterialSpcGradTexture(		int MHandle, int MaterialIndex ) ;										// �w��̃}�e���A���Ńg�D�[�������_�����O�̃X�y�L�����O���f�[�V�����}�b�v�Ƃ��Ďg�p����e�N�X�`����擾����
extern	int			MV1SetMaterialSphereMapTexture(		int MHandle, int MaterialIndex, int TexIndex ) ;						// �w��̃}�e���A���Ńg�D�[�������_�����O�̃X�t�B�A�}�b�v�Ƃ��Ďg�p����e�N�X�`����ݒ肷��
extern	int			MV1GetMaterialSphereMapTexture(		int MHandle, int MaterialIndex ) ;										// �w��̃}�e���A���Ńg�D�[�������_�����O�̃X�t�B�A�}�b�v�Ƃ��Ďg�p����e�N�X�`����擾����
extern	int			MV1SetMaterialDifGradBlendTypeAll(	int MHandle,                    int BlendType ) ;						// �S�Ẵ}�e���A���̃g�D�[�������_�����O�Ŏg�p����f�B�t���[�Y�O���f�[�V�����}�b�v�ƃf�B�t���[�Y�J���[�̍������@��ݒ肷��( DX_MATERIAL_BLENDTYPE_ADDITIVE �Ȃ� )
extern	int			MV1SetMaterialDifGradBlendType(		int MHandle, int MaterialIndex, int BlendType ) ;						// �w��̃}�e���A���̃g�D�[�������_�����O�Ŏg�p����f�B�t���[�Y�O���f�[�V�����}�b�v�ƃf�B�t���[�Y�J���[�̍������@��ݒ肷��( DX_MATERIAL_BLENDTYPE_ADDITIVE �Ȃ� )
extern	int			MV1GetMaterialDifGradBlendType(		int MHandle, int MaterialIndex ) ;										// �w��̃}�e���A���̃g�D�[�������_�����O�Ŏg�p����f�B�t���[�Y�O���f�[�V�����}�b�v�ƃf�B�t���[�Y�J���[�̍������@��擾����( DX_MATERIAL_BLENDTYPE_ADDITIVE �Ȃ� )
extern	int			MV1SetMaterialSpcGradBlendTypeAll(	int MHandle,                    int BlendType ) ;						// �S�Ẵ}�e���A���̃g�D�[�������_�����O�Ŏg�p����X�y�L�����O���f�[�V�����}�b�v�ƃX�y�L�����J���[�̍������@��ݒ肷��( DX_MATERIAL_BLENDTYPE_ADDITIVE �Ȃ� )
extern	int			MV1SetMaterialSpcGradBlendType(		int MHandle, int MaterialIndex, int BlendType ) ;						// �w��̃}�e���A���̃g�D�[�������_�����O�Ŏg�p����X�y�L�����O���f�[�V�����}�b�v�ƃX�y�L�����J���[�̍������@��ݒ肷��( DX_MATERIAL_BLENDTYPE_ADDITIVE �Ȃ� )
extern	int			MV1GetMaterialSpcGradBlendType(		int MHandle, int MaterialIndex ) ;										// �w��̃}�e���A���̃g�D�[�������_�����O�Ŏg�p����X�y�L�����O���f�[�V�����}�b�v�ƃX�y�L�����J���[�̍������@��擾����( DX_MATERIAL_BLENDTYPE_ADDITIVE �Ȃ� )
extern	int			MV1SetMaterialSphereMapBlendTypeAll( int MHandle,                   int BlendType ) ;						// �S�Ẵ}�e���A���̃g�D�[�������_�����O�Ŏg�p����X�t�B�A�}�b�v�̍������@��ݒ肷��( DX_MATERIAL_BLENDTYPE_ADDITIVE �Ȃ� )
extern	int			MV1SetMaterialSphereMapBlendType(	int MHandle, int MaterialIndex, int BlendType ) ;						// �w��̃}�e���A���̃g�D�[�������_�����O�Ŏg�p����X�t�B�A�}�b�v�̍������@��ݒ肷��( DX_MATERIAL_BLENDTYPE_ADDITIVE �Ȃ� )
extern	int			MV1GetMaterialSphereMapBlendType(	int MHandle, int MaterialIndex ) ;										// �w��̃}�e���A���̃g�D�[�������_�����O�Ŏg�p����X�t�B�A�}�b�v�̍������@��擾����( DX_MATERIAL_BLENDTYPE_ADDITIVE �Ȃ� )
extern	int			MV1SetMaterialOutLineWidthAll(		int MHandle,                    float Width ) ;							// �S�Ẵ}�e���A���̃g�D�[�������_�����O�Ŏg�p����֊s���̑�����ݒ肷��
extern	int			MV1SetMaterialOutLineWidth(			int MHandle, int MaterialIndex, float Width ) ;							// �w��̃}�e���A���̃g�D�[�������_�����O�Ŏg�p����֊s���̑�����ݒ肷��
extern	float		MV1GetMaterialOutLineWidth(			int MHandle, int MaterialIndex ) ;										// �w��̃}�e���A���̃g�D�[�������_�����O�Ŏg�p����֊s���̑�����擾����
extern	int			MV1SetMaterialOutLineDotWidthAll(	int MHandle,                    float Width ) ;							// �S�Ẵ}�e���A���̃g�D�[�������_�����O�Ŏg�p����֊s���̃h�b�g�P�ʂ̑�����ݒ肷��
extern	int			MV1SetMaterialOutLineDotWidth(		int MHandle, int MaterialIndex, float Width ) ;							// �w��̃}�e���A���̃g�D�[�������_�����O�Ŏg�p����֊s���̃h�b�g�P�ʂ̑�����ݒ肷��
extern	float		MV1GetMaterialOutLineDotWidth(		int MHandle, int MaterialIndex ) ;										// �w��̃}�e���A���̃g�D�[�������_�����O�Ŏg�p����֊s���̃h�b�g�P�ʂ̑�����擾����
extern	int			MV1SetMaterialOutLineColorAll(		int MHandle,                    COLOR_F Color ) ;						// �S�Ẵ}�e���A���̃g�D�[�������_�����O�Ŏg�p����֊s���̐F��ݒ肷��
extern	int			MV1SetMaterialOutLineColor(			int MHandle, int MaterialIndex, COLOR_F Color ) ;						// �w��̃}�e���A���̃g�D�[�������_�����O�Ŏg�p����֊s���̐F��ݒ肷��
extern	COLOR_F		MV1GetMaterialOutLineColor(			int MHandle, int MaterialIndex ) ;										// �w��̃}�e���A���̃g�D�[�������_�����O�Ŏg�p����֊s���̐F��擾����
extern	int			MV1SetMaterialDrawBlendModeAll(		int MHandle,                    int BlendMode ) ;						// �S�Ẵ}�e���A���̕`��u�����h���[�h��ݒ肷��( DX_BLENDMODE_ALPHA �� )
extern	int			MV1SetMaterialDrawBlendMode(		int MHandle, int MaterialIndex, int BlendMode ) ;						// �w��̃}�e���A���̕`��u�����h���[�h��ݒ肷��( DX_BLENDMODE_ALPHA �� )
extern	int			MV1GetMaterialDrawBlendMode(		int MHandle, int MaterialIndex ) ;										// �w��̃}�e���A���̕`��u�����h���[�h��擾����( DX_BLENDMODE_ALPHA �� )
extern	int			MV1SetMaterialDrawBlendParamAll(	int MHandle,                    int BlendParam ) ;						// �S�Ẵ}�e���A���̕`��u�����h�p�����[�^��ݒ肷��
extern	int			MV1SetMaterialDrawBlendParam(		int MHandle, int MaterialIndex, int BlendParam ) ;						// �w��̃}�e���A���̕`��u�����h�p�����[�^��ݒ肷��
extern	int			MV1GetMaterialDrawBlendParam(		int MHandle, int MaterialIndex ) ;										// �w��̃}�e���A���̕`��u�����h�p�����[�^��ݒ肷��
extern	int			MV1SetMaterialDrawAlphaTestAll(		int MHandle,                    int Enable, int Mode, int Param ) ;		// �S�Ẵ}�e���A���̕`�掞�̃A���t�@�e�X�g�̐ݒ��s��( Enable:���e�X�g��s�����ǂ���( TRUE:�s��  FALSE:�s��Ȃ�( �f�t�H���g ) ) Mode:�e�X�g���[�h( DX_CMP_GREATER�� )  Param:�`��A���t�@�l�Ƃ̔�r�Ɏg�p����l( 0�`255 ) )
extern	int			MV1SetMaterialDrawAlphaTest(		int MHandle, int MaterialIndex,	int Enable, int Mode, int Param ) ;		// �w��̃}�e���A���̕`�掞�̃A���t�@�e�X�g�̐ݒ��s��( Enable:���e�X�g��s�����ǂ���( TRUE:�s��  FALSE:�s��Ȃ�( �f�t�H���g ) ) Mode:�e�X�g���[�h( DX_CMP_GREATER�� )  Param:�`��A���t�@�l�Ƃ̔�r�Ɏg�p����l( 0�`255 ) )
extern	int			MV1GetMaterialDrawAlphaTestEnable(	int MHandle, int MaterialIndex ) ;										// �w��̃}�e���A���̕`�掞�̃A���t�@�e�X�g��s�����ǂ�����擾����( �߂�l  TRUE:�A���t�@�e�X�g��s��  FALSE:�A���t�@�e�X�g��s��Ȃ� )
extern	int			MV1GetMaterialDrawAlphaTestMode(	int MHandle, int MaterialIndex ) ;										// �w��̃}�e���A���̕`�掞�̃A���t�@�e�X�g�̃e�X�g���[�h��擾����( �߂�l  �e�X�g���[�h( DX_CMP_GREATER�� ) )
extern	int			MV1GetMaterialDrawAlphaTestParam(	int MHandle, int MaterialIndex ) ;										// �w��̃}�e���A���̕`�掞�̃A���t�@�e�X�g�̕`��A���t�@�n�Ƃ̔�r�Ɏg�p����l( 0�`255 )��擾����
extern	int			MV1SetMaterialDrawAddColorAll(		int MHandle,                    int Red, int Green, int Blue ) ;		// �S�Ẵ}�e���A���̕`�掞�̉��Z�J���[��ݒ肷��
extern	int			MV1SetMaterialDrawAddColor(			int MHandle, int MaterialIndex, int Red, int Green, int Blue ) ;		// �w��̃}�e���A���̕`�掞�̉��Z�J���[��ݒ肷��
extern	int			MV1GetMaterialDrawAddColor(			int MHandle, int MaterialIndex, int *Red, int *Green, int *Blue ) ;		// �w��̃}�e���A���̕`�掞�̉��Z�J���[��擾����

// �e�N�X�`���֌W
extern	int			MV1GetTextureNum(						int MHandle ) ;														// �e�N�X�`���̐���擾
extern	const TCHAR *MV1GetTextureName(						int MHandle, int TexIndex ) ;										// �e�N�X�`���̖��O��擾
extern	int			MV1SetTextureColorFilePath(				int MHandle, int TexIndex, const TCHAR *FilePath                        ) ;	// �J���[�e�N�X�`���̃t�@�C���p�X��ύX����
extern	int			MV1SetTextureColorFilePathWithStrLen(	int MHandle, int TexIndex, const TCHAR *FilePath, size_t FilePathLength ) ;	// �J���[�e�N�X�`���̃t�@�C���p�X��ύX����
extern	const TCHAR *MV1GetTextureColorFilePath(			int MHandle, int TexIndex ) ;										// �J���[�e�N�X�`���̃t�@�C���p�X��擾
extern	int			MV1SetTextureAlphaFilePath(				int MHandle, int TexIndex, const TCHAR *FilePath                        ) ;	// �A���t�@�e�N�X�`���̃t�@�C���p�X��ύX����
extern	int			MV1SetTextureAlphaFilePathWithStrLen(	int MHandle, int TexIndex, const TCHAR *FilePath, size_t FilePathLength ) ;	// �A���t�@�e�N�X�`���̃t�@�C���p�X��ύX����
extern	const TCHAR *MV1GetTextureAlphaFilePath(			int MHandle, int TexIndex ) ;										// �A���t�@�e�N�X�`���̃t�@�C���p�X��擾
extern	int			MV1SetTextureGraphHandle(				int MHandle, int TexIndex, int GrHandle, int SemiTransFlag ) ;		// �e�N�X�`���Ŏg�p����O���t�B�b�N�n���h����ύX����( GrHandle �� -1 �ɂ���Ɖ�� )
extern	int			MV1GetTextureGraphHandle(				int MHandle, int TexIndex ) ;										// �e�N�X�`���̃O���t�B�b�N�n���h����擾����
extern	int			MV1SetTextureAddressMode(				int MHandle, int TexIndex, int AddrUMode, int AddrVMode ) ;			// �e�N�X�`���̃A�h���X���[�h��ݒ肷��( AddUMode �̒l�� DX_TEXADDRESS_WRAP �� )
extern	int			MV1GetTextureAddressModeU(				int MHandle, int TexIndex ) ;										// �e�N�X�`���̂t�l�̃A�h���X���[�h��擾����( �߂�l:DX_TEXADDRESS_WRAP �� )
extern	int			MV1GetTextureAddressModeV(				int MHandle, int TexIndex ) ;										// �e�N�X�`���̂u�l�̃A�h���X���[�h��擾����( �߂�l:DX_TEXADDRESS_WRAP �� )
extern	int			MV1GetTextureWidth(						int MHandle, int TexIndex ) ;										// �e�N�X�`���̕���擾����
extern	int			MV1GetTextureHeight(					int MHandle, int TexIndex ) ;										// �e�N�X�`���̍�����擾����
extern	int			MV1GetTextureSemiTransState(			int MHandle, int TexIndex ) ;										// �e�N�X�`���ɔ������v�f�����邩�ǂ�����擾����( �߂�l  TRUE:����  FALSE:�Ȃ� )
extern	int			MV1SetTextureBumpImageFlag(				int MHandle, int TexIndex, int Flag ) ;								// �e�N�X�`���Ŏg�p���Ă���摜���o���v�}�b�v���ǂ�����ݒ肷��
extern	int			MV1GetTextureBumpImageFlag(				int MHandle, int TexIndex ) ;										// �e�N�X�`�����o���v�}�b�v���ǂ�����擾����( �߂�l  TRUE:�o���v�}�b�v  FALSE:�Ⴄ )
extern	int			MV1SetTextureBumpImageNextPixelLength(	int MHandle, int TexIndex, float Length ) ;							// �o���v�}�b�v�摜�̏ꍇ�ׂ̗̃s�N�Z���Ƃ̋�����ݒ肷��
extern	float		MV1GetTextureBumpImageNextPixelLength(	int MHandle, int TexIndex ) ;										// �o���v�}�b�v�摜�̏ꍇ�ׂ̗̃s�N�Z���Ƃ̋�����擾����
extern	int			MV1SetTextureSampleFilterMode(			int MHandle, int TexIndex, int FilterMode ) ;						// �e�N�X�`���̃t�B���^�����O���[�h��ݒ肷��
extern	int			MV1GetTextureSampleFilterMode(			int MHandle, int TexIndex ) ;										// �e�N�X�`���̃t�B���^�����O���[�h��擾����( �߂�l  DX_DRAWMODE_BILINEAR�� )
extern	int			MV1AddTexture(							int MHandle, const TCHAR *Name,                    const TCHAR *ColorFilePath,                             const TCHAR *AlphaFilePath DEFAULTPARAM( = NULL ) ,                                                  void *ColorFileImage DEFAULTPARAM( = NULL ) , void *AlphaFileImage DEFAULTPARAM( = NULL ) , int AddressModeU DEFAULTPARAM( = DX_TEXADDRESS_WRAP ) , int AddressModeV DEFAULTPARAM( = DX_TEXADDRESS_WRAP ) , int FilterMode DEFAULTPARAM( = DX_DRAWMODE_ANISOTROPIC ) , int BumpImageFlag DEFAULTPARAM( = FALSE ) , float BumpImageNextPixelLength DEFAULTPARAM( = 0.1f ) , int ReverseFlag DEFAULTPARAM( = FALSE ) , int Bmp32AllZeroAlphaToXRGB8Flag DEFAULTPARAM( = FALSE ) ) ;	// ���f���Ŏg�p����e�N�X�`����ǉ�����
extern	int			MV1AddTextureWithStrLen(				int MHandle, const TCHAR *Name, size_t NameLength, const TCHAR *ColorFilePath, size_t ColorFilePathLength, const TCHAR *AlphaFilePath DEFAULTPARAM( = NULL ) , size_t AlphaFilePathLength DEFAULTPARAM( = 0 ) , void *ColorFileImage DEFAULTPARAM( = NULL ) , void *AlphaFileImage DEFAULTPARAM( = NULL ) , int AddressModeU DEFAULTPARAM( = DX_TEXADDRESS_WRAP ) , int AddressModeV DEFAULTPARAM( = DX_TEXADDRESS_WRAP ) , int FilterMode DEFAULTPARAM( = DX_DRAWMODE_ANISOTROPIC ) , int BumpImageFlag DEFAULTPARAM( = FALSE ) , float BumpImageNextPixelLength DEFAULTPARAM( = 0.1f ) , int ReverseFlag DEFAULTPARAM( = FALSE ) , int Bmp32AllZeroAlphaToXRGB8Flag DEFAULTPARAM( = FALSE ) ) ;	// ���f���Ŏg�p����e�N�X�`����ǉ�����
extern	int			MV1AddTextureGraphHandle(				int MHandle, const TCHAR *Name,                    int GrHandle, int SemiTransFlag,                                                                                                                                                                                                                         int AddressModeU DEFAULTPARAM( = DX_TEXADDRESS_WRAP ) , int AddressModeV DEFAULTPARAM( = DX_TEXADDRESS_WRAP ) , int FilterMode DEFAULTPARAM( = DX_DRAWMODE_ANISOTROPIC ) ) ;																																																			// ���f���Ŏg�p����e�N�X�`����ǉ�����( �O���t�B�b�N�n���h����e�N�X�`���Ƃ��Ēǉ� )

extern	int			MV1LoadTexture(							const TCHAR *FilePath                        ) ;					// �R�c���f���ɓ\��t����̂Ɍ������摜�̓ǂݍ��ݕ����ŉ摜��ǂݍ���( �߂�l  -1:�G���[  0�ȏ�:�O���t�B�b�N�n���h�� )
extern	int			MV1LoadTextureWithStrLen(				const TCHAR *FilePath, size_t FilePathLength ) ;					// �R�c���f���ɓ\��t����̂Ɍ������摜�̓ǂݍ��ݕ����ŉ摜��ǂݍ���( �߂�l  -1:�G���[  0�ȏ�:�O���t�B�b�N�n���h�� )

// �t���[���֌W
extern	int			MV1GetFrameNum(						int MHandle ) ;															// �t���[���̐���擾����
extern	int			MV1SearchFrame(						int MHandle, const TCHAR *FrameName                         ) ;			// �t���[���̖��O���烂�f�����̃t���[���̃t���[���C���f�b�N�X��擾����( ���������ꍇ�͖߂�l��-1 )
extern	int			MV1SearchFrameWithStrLen(			int MHandle, const TCHAR *FrameName, size_t FrameNameLength ) ;			// �t���[���̖��O���烂�f�����̃t���[���̃t���[���C���f�b�N�X��擾����( ���������ꍇ�͖߂�l��-1 )
extern	int			MV1SearchFrameChild(				int MHandle, int FrameIndex DEFAULTPARAM( = -1 ) , const TCHAR *ChildName DEFAULTPARAM( = NULL )                              ) ;	// �t���[���̖��O����w��̃t���[���̎q�t���[���̃t���[���C���f�b�N�X��擾����( ���O�w��� )( FrameIndex �� -1 �ɂ���Ɛe������Ȃ��t���[���� ChildIndex �Ŏw�肷�� )( ���������ꍇ�͖߂�l��-1 )
extern	int			MV1SearchFrameChildWithStrLen(		int MHandle, int FrameIndex DEFAULTPARAM( = -1 ) , const TCHAR *ChildName DEFAULTPARAM( = NULL ) , size_t ChildNameLength DEFAULTPARAM( = 0 ) ) ;	// �t���[���̖��O����w��̃t���[���̎q�t���[���̃t���[���C���f�b�N�X��擾����( ���O�w��� )( FrameIndex �� -1 �ɂ���Ɛe������Ȃ��t���[���� ChildIndex �Ŏw�肷�� )( ���������ꍇ�͖߂�l��-1 )
extern	const TCHAR *MV1GetFrameName(					int MHandle, int FrameIndex ) ;											// �w��̃t���[���̖��O��擾����( �G���[�̏ꍇ�͖߂�l�� NULL )
extern	int			MV1GetFrameName2(					int MHandle, int FrameIndex, TCHAR *StrBuffer ) ;						// �w��̃t���[���̖��O��擾����( �߂�l   -1:�G���[  -1�ȊO:������̃T�C�Y )
extern	int			MV1GetFrameParent(					int MHandle, int FrameIndex ) ;											// �w��̃t���[���̐e�t���[���̃C���f�b�N�X�𓾂�( �e�����Ȃ��ꍇ�� -2 ���Ԃ� )
extern	int			MV1GetFrameChildNum(				int MHandle, int FrameIndex DEFAULTPARAM( = -1 ) ) ;											// �w��̃t���[���̎q�t���[���̐���擾����( FrameIndex �� -1 �ɂ���Ɛe������Ȃ��t���[���̐����Ԃ��Ă��� )
extern	int			MV1GetFrameChild(					int MHandle, int FrameIndex DEFAULTPARAM( = -1 ) , int ChildIndex DEFAULTPARAM( = 0 ) ) ;		// �w��̃t���[���̎q�t���[���̃t���[���C���f�b�N�X��擾����( �ԍ��w��� )( FrameIndex �� -1 �ɂ���Ɛe������Ȃ��t���[���� ChildIndex �Ŏw�肷�� )( �G���[�̏ꍇ�͖߂�l��-1 )
extern	VECTOR		MV1GetFramePosition(				int MHandle, int FrameIndex ) ;											// �w��̃t���[���̍��W��擾����
extern	VECTOR_D	MV1GetFramePositionD(				int MHandle, int FrameIndex ) ;											// �w��̃t���[���̍��W��擾����
extern	MATRIX		MV1GetFrameBaseLocalMatrix(			int MHandle, int FrameIndex ) ;											// �w��̃t���[���̏�����Ԃł̍��W�ϊ��s���擾����
extern	MATRIX_D	MV1GetFrameBaseLocalMatrixD(		int MHandle, int FrameIndex ) ;											// �w��̃t���[���̏�����Ԃł̍��W�ϊ��s���擾����
extern	MATRIX		MV1GetFrameLocalMatrix(				int MHandle, int FrameIndex ) ;											// �w��̃t���[���̍��W�ϊ��s���擾����
extern	MATRIX_D	MV1GetFrameLocalMatrixD(			int MHandle, int FrameIndex ) ;											// �w��̃t���[���̍��W�ϊ��s���擾����
extern	MATRIX		MV1GetFrameLocalWorldMatrix(		int MHandle, int FrameIndex ) ;											// �w��̃t���[���̃��[�J�����W���烏�[���h���W�ɕϊ�����s��𓾂�
extern	MATRIX_D	MV1GetFrameLocalWorldMatrixD(		int MHandle, int FrameIndex ) ;											// �w��̃t���[���̃��[�J�����W���烏�[���h���W�ɕϊ�����s��𓾂�
extern	int			MV1SetFrameUserLocalMatrix(			int MHandle, int FrameIndex, MATRIX   Matrix ) ;						// �w��̃t���[���̍��W�ϊ��s��( ���[�J���s�� )��ݒ肷��
extern	int			MV1SetFrameUserLocalMatrixD(		int MHandle, int FrameIndex, MATRIX_D Matrix ) ;						// �w��̃t���[���̍��W�ϊ��s��( ���[�J���s�� )��ݒ肷��
extern	int			MV1ResetFrameUserLocalMatrix(		int MHandle, int FrameIndex ) ;											// �w��̃t���[���̍��W�ϊ��s��( ���[�J���s�� )��f�t�H���g�ɖ߂�
extern	int			MV1SetFrameUserLocalWorldMatrix(	int MHandle, int FrameIndex, MATRIX   Matrix ) ;						// �w��̃t���[���̍��W�ϊ��s��( ���[�J�����W���烏�[���h���W�ɕϊ�����s�� )��ݒ肷��
extern	int			MV1SetFrameUserLocalWorldMatrixD(	int MHandle, int FrameIndex, MATRIX_D Matrix ) ;						// �w��̃t���[���̍��W�ϊ��s��( ���[�J�����W���烏�[���h���W�ɕϊ�����s�� )��ݒ肷��
extern	int			MV1ResetFrameUserLocalWorldMatrix(	int MHandle, int FrameIndex ) ;											// �w��̃t���[���̍��W�ϊ��s��( ���[�J�����W���烏�[���h���W�ɕϊ�����s�� )��f�t�H���g�ɖ߂�
extern	VECTOR		MV1GetFrameMaxVertexLocalPosition(	int MHandle, int FrameIndex ) ;											// �w��̃t���[���������b�V�����_�̃��[�J�����W�ł̍ő�l�𓾂�
extern	VECTOR_D	MV1GetFrameMaxVertexLocalPositionD(	int MHandle, int FrameIndex ) ;											// �w��̃t���[���������b�V�����_�̃��[�J�����W�ł̍ő�l�𓾂�
extern	VECTOR		MV1GetFrameMinVertexLocalPosition(	int MHandle, int FrameIndex ) ;											// �w��̃t���[���������b�V�����_�̃��[�J�����W�ł̍ŏ��l�𓾂�
extern	VECTOR_D	MV1GetFrameMinVertexLocalPositionD(	int MHandle, int FrameIndex ) ;											// �w��̃t���[���������b�V�����_�̃��[�J�����W�ł̍ŏ��l�𓾂�
extern	VECTOR		MV1GetFrameAvgVertexLocalPosition(	int MHandle, int FrameIndex ) ;											// �w��̃t���[���������b�V�����_�̃��[�J�����W�ł̕��ϒl�𓾂�
extern	VECTOR_D	MV1GetFrameAvgVertexLocalPositionD(	int MHandle, int FrameIndex ) ;											// �w��̃t���[���������b�V�����_�̃��[�J�����W�ł̕��ϒl�𓾂�
extern	int			MV1GetFrameVertexNum(				int MHandle, int FrameIndex ) ;											// �w��̃t���[���Ɋ܂܂�钸�_�̐���擾����
extern	int			MV1GetFrameTriangleNum(				int MHandle, int FrameIndex ) ;											// �w��̃t���[���Ɋ܂܂��|���S���̐���擾����
extern	int			MV1GetFrameMeshNum(					int MHandle, int FrameIndex ) ;											// �w��̃t���[���������b�V���̐���擾����
extern	int			MV1GetFrameMesh(					int MHandle, int FrameIndex, int Index ) ;								// �w��̃t���[���������b�V���̃��b�V���C���f�b�N�X��擾����
extern	int			MV1SetFrameVisible(					int MHandle, int FrameIndex, int VisibleFlag ) ;						// �w��̃t���[���̕\���A��\����Ԃ�ύX����( TRUE:�\��  FALSE:��\�� )
extern	int			MV1GetFrameVisible(					int MHandle, int FrameIndex ) ;											// �w��̃t���[���̕\���A��\����Ԃ�擾����( TRUE:�\��  FALSE:��\�� )
extern	int			MV1SetFrameDifColorScale(			int MHandle, int FrameIndex, COLOR_F Scale ) ;							// �w��̃t���[���̃f�B�t���[�Y�J���[�̃X�P�[���l��ݒ肷��( �f�t�H���g�l�� 1.0f )
extern	int			MV1SetFrameSpcColorScale(			int MHandle, int FrameIndex, COLOR_F Scale ) ;							// �w��̃t���[���̃X�y�L�����J���[�̃X�P�[���l��ݒ肷��( �f�t�H���g�l�� 1.0f )
extern	int			MV1SetFrameEmiColorScale(			int MHandle, int FrameIndex, COLOR_F Scale ) ;							// �w��̃t���[���̃G�~�b�V�u�J���[�̃X�P�[���l��ݒ肷��( �f�t�H���g�l�� 1.0f )
extern	int			MV1SetFrameAmbColorScale(			int MHandle, int FrameIndex, COLOR_F Scale ) ;							// �w��̃t���[���̃A���r�G���g�J���[�̃X�P�[���l��ݒ肷��( �f�t�H���g�l�� 1.0f )
extern	COLOR_F		MV1GetFrameDifColorScale(			int MHandle, int FrameIndex ) ;											// �w��̃t���[���̃f�B�t���[�Y�J���[�̃X�P�[���l��擾����( �f�t�H���g�l�� 1.0f )
extern	COLOR_F		MV1GetFrameSpcColorScale(			int MHandle, int FrameIndex ) ;											// �w��̃t���[���̃X�y�L�����J���[�̃X�P�[���l��擾����( �f�t�H���g�l�� 1.0f )
extern	COLOR_F		MV1GetFrameEmiColorScale(			int MHandle, int FrameIndex ) ;											// �w��̃t���[���̃G�~�b�V�u�J���[�̃X�P�[���l��擾����( �f�t�H���g�l�� 1.0f )
extern	COLOR_F		MV1GetFrameAmbColorScale(			int MHandle, int FrameIndex ) ;											// �w��̃t���[���̃A���r�G���g�J���[�̃X�P�[���l��擾����( �f�t�H���g�l�� 1.0f )
extern	int			MV1GetFrameSemiTransState(			int MHandle, int FrameIndex ) ;											// �w��̃t���[���ɔ������v�f�����邩�ǂ�����擾����( �߂�l TRUE:����  FALSE:�Ȃ� )
extern	int			MV1SetFrameOpacityRate(				int MHandle, int FrameIndex, float Rate ) ;								// �w��̃t���[���̕s�����x��ݒ肷��( �s���� 1.0f �` ���� 0.0f )
extern	float		MV1GetFrameOpacityRate(				int MHandle, int FrameIndex ) ;											// �w��̃t���[���̕s�����x��擾����( �s���� 1.0f �` ���� 0.0f )
extern	int			MV1SetFrameBaseVisible(				int MHandle, int FrameIndex, int VisibleFlag ) ;						// �w��̃t���[���̏����\����Ԃ�ݒ肷��( TRUE:�\��  FALSE:��\�� )
extern	int			MV1GetFrameBaseVisible(				int MHandle, int FrameIndex ) ;											// �w��̃t���[���̏����\����Ԃ�擾����( TRUE:�\��  FALSE:��\�� )
extern	int			MV1SetFrameTextureAddressTransform( int MHandle, int FrameIndex, float TransU, float TransV, float ScaleU, float ScaleV, float RotCenterU, float RotCenterV, float Rotate ) ;	// �w��̃t���[���̃e�N�X�`�����W�ϊ��p�����[�^��ݒ肷��
extern	int			MV1SetFrameTextureAddressTransformMatrix( int MHandle, int FrameIndex, MATRIX Matrix ) ;					// �w��̃t���[���̃e�N�X�`�����W�ϊ��s���Z�b�g����
extern	int			MV1ResetFrameTextureAddressTransform( int MHandle, int FrameIndex ) ;										// �w��̃t���[���̃e�N�X�`�����W�ϊ��p�����[�^����Z�b�g����

// ���b�V���֌W
extern	int			MV1GetMeshNum(						int MHandle ) ;															// ���f���Ɋ܂܂�郁�b�V���̐���擾����
extern	int			MV1GetMeshMaterial(					int MHandle, int MeshIndex ) ;											// �w�胁�b�V�����g�p���Ă���}�e���A���̃C���f�b�N�X��擾����
extern	int			MV1GetMeshVertexNum(				int MHandle, int MeshIndex ) ;											// �w�胁�b�V���Ɋ܂܂�钸�_�̐���擾����
extern	int			MV1GetMeshTriangleNum(				int MHandle, int MeshIndex ) ;											// �w�胁�b�V���Ɋ܂܂��O�p�`�|���S���̐���擾����
extern	int			MV1SetMeshVisible(					int MHandle, int MeshIndex, int VisibleFlag ) ;							// �w�胁�b�V���̕\���A��\����Ԃ�ύX����( TRUE:�\��  FALSE:��\�� )
extern	int			MV1GetMeshVisible(					int MHandle, int MeshIndex ) ;											// �w�胁�b�V���̕\���A��\����Ԃ�擾����( TRUE:�\��  FALSE:��\�� )
extern	int			MV1SetMeshDifColorScale(			int MHandle, int MeshIndex, COLOR_F Scale ) ;							// �w��̃��b�V���̃f�B�t���[�Y�J���[�̃X�P�[���l��ݒ肷��( �f�t�H���g�l�� 1.0f )
extern	int			MV1SetMeshSpcColorScale( 			int MHandle, int MeshIndex, COLOR_F Scale ) ;							// �w��̃��b�V���̃X�y�L�����J���[�̃X�P�[���l��ݒ肷��( �f�t�H���g�l�� 1.0f )
extern	int			MV1SetMeshEmiColorScale( 			int MHandle, int MeshIndex, COLOR_F Scale ) ;							// �w��̃��b�V���̃G�~�b�V�u�J���[�̃X�P�[���l��ݒ肷��( �f�t�H���g�l�� 1.0f )
extern	int			MV1SetMeshAmbColorScale( 			int MHandle, int MeshIndex, COLOR_F Scale ) ;							// �w��̃��b�V���̃A���r�G���g�J���[�̃X�P�[���l��ݒ肷��( �f�t�H���g�l�� 1.0f )
extern	COLOR_F		MV1GetMeshDifColorScale( 			int MHandle, int MeshIndex ) ;											// �w��̃��b�V���̃f�B�t���[�Y�J���[�̃X�P�[���l��擾����( �f�t�H���g�l�� 1.0f )
extern	COLOR_F		MV1GetMeshSpcColorScale( 			int MHandle, int MeshIndex ) ;											// �w��̃��b�V���̃X�y�L�����J���[�̃X�P�[���l��擾����( �f�t�H���g�l�� 1.0f )
extern	COLOR_F		MV1GetMeshEmiColorScale( 			int MHandle, int MeshIndex ) ;											// �w��̃��b�V���̃G�~�b�V�u�J���[�̃X�P�[���l��擾����( �f�t�H���g�l�� 1.0f )
extern	COLOR_F		MV1GetMeshAmbColorScale( 			int MHandle, int MeshIndex ) ;											// �w��̃��b�V���̃A���r�G���g�J���[�̃X�P�[���l��擾����( �f�t�H���g�l�� 1.0f )
extern	int			MV1SetMeshOpacityRate( 				int MHandle, int MeshIndex, float Rate ) ;								// �w��̃��b�V���̕s�����x��ݒ肷��( �s���� 1.0f �` ���� 0.0f )
extern	float		MV1GetMeshOpacityRate( 				int MHandle, int MeshIndex ) ;											// �w��̃��b�V���̕s�����x��擾����( �s���� 1.0f �` ���� 0.0f )
extern	int			MV1SetMeshDrawBlendMode( 			int MHandle, int MeshIndex, int BlendMode ) ;							// �w��̃��b�V���̕`��u�����h���[�h��ݒ肷��( DX_BLENDMODE_ALPHA �� )
extern	int			MV1SetMeshDrawBlendParam( 			int MHandle, int MeshIndex, int BlendParam ) ;							// �w��̃��b�V���̕`��u�����h�p�����[�^��ݒ肷��
extern	int			MV1GetMeshDrawBlendMode( 			int MHandle, int MeshIndex ) ;											// �w��̃��b�V���̕`��u�����h���[�h��擾����( DX_BLENDMODE_ALPHA �� )
extern	int			MV1GetMeshDrawBlendParam( 			int MHandle, int MeshIndex ) ;											// �w��̃��b�V���̕`��u�����h�p�����[�^��ݒ肷��
extern	int			MV1SetMeshBaseVisible( 				int MHandle, int MeshIndex, int VisibleFlag ) ;							// �w��̃��b�V���̏����\����Ԃ�ݒ肷��( TRUE:�\��  FALSE:��\�� )
extern	int			MV1GetMeshBaseVisible( 				int MHandle, int MeshIndex ) ;											// �w��̃��b�V���̏����\����Ԃ�擾����( TRUE:�\��  FALSE:��\�� )
extern	int			MV1SetMeshBackCulling( 				int MHandle, int MeshIndex, int CullingFlag ) ;							// �w��̃��b�V���̃o�b�N�J�����O��s�����ǂ�����ݒ肷��( DX_CULLING_LEFT �� )
extern	int			MV1GetMeshBackCulling( 				int MHandle, int MeshIndex ) ;											// �w��̃��b�V���̃o�b�N�J�����O��s�����ǂ�����擾����( DX_CULLING_LEFT �� )
extern	VECTOR		MV1GetMeshMaxPosition( 				int MHandle, int MeshIndex ) ;											// �w��̃��b�V���Ɋ܂܂��|���S���̍ő働�[�J�����W��擾����
extern	VECTOR		MV1GetMeshMinPosition( 				int MHandle, int MeshIndex ) ;											// �w��̃��b�V���Ɋ܂܂��|���S���̍ŏ����[�J�����W��擾����
extern	int			MV1GetMeshTListNum( 				int MHandle, int MeshIndex ) ;											// �w��̃��b�V���Ɋ܂܂��g���C�A���O�����X�g�̐���擾����
extern	int			MV1GetMeshTList( 					int MHandle, int MeshIndex, int Index ) ;								// �w��̃��b�V���Ɋ܂܂��g���C�A���O�����X�g�̃C���f�b�N�X��擾����
extern	int			MV1GetMeshSemiTransState( 			int MHandle, int MeshIndex ) ;											// �w��̃��b�V���ɔ������v�f�����邩�ǂ�����擾����( �߂�l TRUE:����  FALSE:�Ȃ� )
extern	int			MV1SetMeshUseVertDifColor( 			int MHandle, int MeshIndex, int UseFlag ) ;								// �w��̃��b�V���̒��_�f�B�t���[�Y�J���[��}�e���A���̃f�B�t���[�Y�J���[�̑���Ɏg�p���邩�ǂ�����ݒ肷��( TRUE:�}�e���A���J���[�̑���Ɏg�p����  FALSE:�}�e���A���J���[��g�p���� )
extern	int			MV1SetMeshUseVertSpcColor( 			int MHandle, int MeshIndex, int UseFlag ) ;								// �w��̃��b�V���̒��_�X�y�L�����J���[��}�e���A���̃X�y�L�����J���[�̑���Ɏg�p���邩�ǂ�����ݒ肷��( TRUE:�}�e���A���J���[�̑���Ɏg�p����  FALSE:�}�e���A���J���[��g�p���� )
extern	int			MV1GetMeshUseVertDifColor( 			int MHandle, int MeshIndex ) ;											// �w��̃��b�V���̒��_�f�B�t���[�Y�J���[��}�e���A���̃f�B�t���[�Y�J���[�̑���Ɏg�p���邩�ǂ����̐ݒ��擾����( �߂�l  TRUE:�}�e���A���J���[�̑���Ɏg�p����  FALSE:�}�e���A���J���[��g�p���� )
extern	int			MV1GetMeshUseVertSpcColor( 			int MHandle, int MeshIndex ) ;											// �w��̃��b�V���̒��_�X�y�L�����J���[��}�e���A���̃X�y�L�����J���[�̑���Ɏg�p���邩�ǂ����̐ݒ��擾����( �߂�l  TRUE:�}�e���A���J���[�̑���Ɏg�p����  FALSE:�}�e���A���J���[��g�p���� )
extern	int			MV1GetMeshShapeFlag(				int MHandle, int MeshIndex ) ;											// �w��̃��b�V�����V�F�C�v���b�V�����ǂ�����擾����( �߂�l TRUE:�V�F�C�v���b�V��  FALSE:�ʏ탁�b�V�� )

// �V�F�C�v�֌W
extern	int			MV1GetShapeNum(						int MHandle ) ;															// ���f���Ɋ܂܂��V�F�C�v�̐���擾����
extern	int			MV1SearchShape(						int MHandle, const TCHAR *ShapeName                         ) ;			// �V�F�C�v�̖��O���烂�f�����̃V�F�C�v�̃V�F�C�v�C���f�b�N�X��擾����( ���������ꍇ�͖߂�l��-1 )
extern	int			MV1SearchShapeWithStrLen(			int MHandle, const TCHAR *ShapeName, size_t ShapeNameLength ) ;			// �V�F�C�v�̖��O���烂�f�����̃V�F�C�v�̃V�F�C�v�C���f�b�N�X��擾����( ���������ꍇ�͖߂�l��-1 )
extern	const TCHAR *MV1GetShapeName(					int MHandle, int ShapeIndex ) ;											// �w��V�F�C�v�̖��O��擾����
extern	int			MV1GetShapeTargetMeshNum(			int MHandle, int ShapeIndex ) ;											// �w��V�F�C�v���ΏۂƂ��Ă��郁�b�V���̐���擾����
extern	int			MV1GetShapeTargetMesh(				int MHandle, int ShapeIndex, int Index ) ;								// �w��V�F�C�v���ΏۂƂ��Ă��郁�b�V���̃��b�V���C���f�b�N�X��擾����
extern	int			MV1SetShapeRate(					int MHandle, int ShapeIndex, float Rate, int Type DEFAULTPARAM( = DX_MV1_SHAPERATE_ADD ) ) ;	// �w��V�F�C�v�̗L������ݒ肷��( Rate  0.0f:0% �` 1.0f:100% )
extern	float		MV1GetShapeRate(					int MHandle, int ShapeIndex ) ;											// �w��V�F�C�v�̗L������擾����( �߂�l  0.0f:0% �` 1.0f:100% )
extern	float		MV1GetShapeApplyRate(				int MHandle, int ShapeIndex ) ;											// �w��V�F�C�v�̗L������擾����( �߂�l  0.0f:0% �` 1.0f:100% )( MV1SetShapeRate �Ŏw�肵���l�����̂܂ܖ߂�l�ƂȂ� MV1GetShapeRate �ƈقȂ�A�j���[�V�����̃V�F�C�v���Ȃǂ���������l���߂�l�ƂȂ�܂� )

// �g���C�A���O�����X�g�֌W
extern	int			MV1GetTriangleListNum(						int MHandle ) ;																		// ���f���Ɋ܂܂��g���C�A���O�����X�g�̐���擾����
extern	int			MV1GetTriangleListVertexType(				int MHandle, int TListIndex ) ;														// �w��̃g���C�A���O�����X�g�̒��_�f�[�^�^�C�v��擾����( DX_MV1_VERTEX_TYPE_1FRAME �� )
extern	int			MV1GetTriangleListPolygonNum(				int MHandle, int TListIndex ) ;														// �w��̃g���C�A���O�����X�g�Ɋ܂܂��|���S���̐���擾����
extern	int			MV1GetTriangleListVertexNum(				int MHandle, int TListIndex ) ;														// �w��̃g���C�A���O�����X�g�Ɋ܂܂�钸�_�f�[�^�̐���擾����
extern	int			MV1GetTriangleListLocalWorldMatrixNum(		int MHandle, int TListIndex ) ;														// �w��̃g���C�A���O�����X�g���g�p������W�ϊ��s��̐���擾����
extern	MATRIX		MV1GetTriangleListLocalWorldMatrix(			int MHandle, int TListIndex, int LWMatrixIndex ) ;									// �w��̃g���C�A���O�����X�g���g�p������W�ϊ��s��( ���[�J�������[���h )��擾����
extern	int			MV1GetTriangleListPolygonVertexPosition(	int MHandle, int TListIndex, int PolygonIndex, VECTOR *VertexPositionArray DEFAULTPARAM( = NULL ) , float *MatrixWeightArray DEFAULTPARAM( = NULL ) ) ;	// �w��̃g���C�A���O�����X�g�̎w��̃|���S�����g�p���Ă��钸�_�̍��W��擾����( �߂�l  �G���[�F-1  0�ȏ�F�|���S�����g�p���Ă��钸�_�̐� )
extern	int			MV1GetTriangleListUseMaterial(				int MHandle, int TListIndex ) ;														// �w��̃g���C�A���O�����X�g���g�p���Ă���}�e���A���̃C���f�b�N�X��擾����

// �R���W�����֌W
extern	int							MV1SetupCollInfo(				int MHandle, int FrameIndex DEFAULTPARAM( = -1 ) , int XDivNum DEFAULTPARAM( = 32 ) , int YDivNum DEFAULTPARAM( = 8 ) , int ZDivNum DEFAULTPARAM( = 32 ) , int MeshIndex DEFAULTPARAM( = -1 ) ) ;		// �R���W��������\�z����
extern	int							MV1TerminateCollInfo(			int MHandle, int FrameIndex DEFAULTPARAM( = -1 ) , int MeshIndex DEFAULTPARAM( = -1 ) ) ;																// �R���W�������̌�n��
extern	int							MV1RefreshCollInfo(				int MHandle, int FrameIndex DEFAULTPARAM( = -1 ) , int MeshIndex DEFAULTPARAM( = -1 ) ) ;																// �R���W��������X�V����
extern	MV1_COLL_RESULT_POLY		MV1CollCheck_Line(				int MHandle, int FrameIndex, VECTOR PosStart, VECTOR PosEnd , int MeshIndex DEFAULTPARAM( = -1 ) ) ;					// ���ƃ��f���̓����蔻��
extern	MV1_COLL_RESULT_POLY_DIM	MV1CollCheck_LineDim(			int MHandle, int FrameIndex, VECTOR PosStart, VECTOR PosEnd , int MeshIndex DEFAULTPARAM( = -1 ) ) ;					// ���ƃ��f���̓����蔻��( �߂�l�� MV1_COLL_RESULT_POLY_DIM )
extern	MV1_COLL_RESULT_POLY_DIM	MV1CollCheck_Sphere(			int MHandle, int FrameIndex, VECTOR CenterPos, float r , int MeshIndex DEFAULTPARAM( = -1 ) ) ;							// ���ƃ��f���̓����蔻��
extern	MV1_COLL_RESULT_POLY_DIM	MV1CollCheck_Capsule(			int MHandle, int FrameIndex, VECTOR Pos1, VECTOR Pos2, float r , int MeshIndex DEFAULTPARAM( = -1 ) ) ;					// �J�v�Z���ƃ��f���̓����蔻��
extern	MV1_COLL_RESULT_POLY_DIM	MV1CollCheck_Triangle(			int MHandle, int FrameIndex, VECTOR Pos1, VECTOR Pos2, VECTOR Pos3 , int MeshIndex DEFAULTPARAM( = -1 ) ) ;				// �O�p�`�ƃ��f���̓����蔻��
extern	MV1_COLL_RESULT_POLY		MV1CollCheck_GetResultPoly(		MV1_COLL_RESULT_POLY_DIM ResultPolyDim, int PolyNo ) ;																	// �R���W�������ʃ|���S���z�񂩂�w��ԍ��̃|���S������擾����
extern	int							MV1CollResultPolyDimTerminate(	MV1_COLL_RESULT_POLY_DIM ResultPolyDim ) ;																				// �R���W�������ʃ|���S���z��̌�n�������

// �Q�Ɨp���b�V���֌W
extern	int					MV1SetupReferenceMesh(		int MHandle, int FrameIndex, int IsTransform, int IsPositionOnly DEFAULTPARAM( = FALSE ) , int MeshIndex DEFAULTPARAM( = -1 ) ) ;					// �Q�Ɨp���b�V���̃Z�b�g�A�b�v
extern	int					MV1TerminateReferenceMesh(	int MHandle, int FrameIndex, int IsTransform, int IsPositionOnly DEFAULTPARAM( = FALSE ) , int MeshIndex DEFAULTPARAM( = -1 ) ) ;					// �Q�Ɨp���b�V���̌�n��
extern	int					MV1RefreshReferenceMesh(	int MHandle, int FrameIndex, int IsTransform, int IsPositionOnly DEFAULTPARAM( = FALSE ) , int MeshIndex DEFAULTPARAM( = -1 ) ) ;					// �Q�Ɨp���b�V���̍X�V
extern	MV1_REF_POLYGONLIST	MV1GetReferenceMesh(		int MHandle, int FrameIndex, int IsTransform, int IsPositionOnly DEFAULTPARAM( = FALSE ) , int MeshIndex DEFAULTPARAM( = -1 ) ) ;					// �Q�Ɨp���b�V����擾����

#endif // DX_NON_MODEL
























// DxLive2DCubism4.cpp �֐� �v���g�^�C�v�錾

#ifndef DX_NON_LIVE2D_CUBISM4

extern	int			Live2D_SetCubism4CoreDLLPath(           const TCHAR *CoreDLLFilePath ) ;								// Live2DCubismCore.dll �̃t�@�C���p�X��ݒ肷��
extern	int			Live2D_SetCubism4CoreDLLPathWithStrLen( const TCHAR *CoreDLLFilePath, size_t CoreDLLFilePathLength ) ;	// Live2DCubismCore.dll �̃t�@�C���p�X��ݒ肷��
extern	int			Live2D_SetCubism3CoreDLLPath(           const TCHAR *CoreDLLFilePath ) ;								// Live2DCubismCore.dll �̃t�@�C���p�X��ݒ肷��
extern	int			Live2D_SetCubism3CoreDLLPathWithStrLen( const TCHAR *CoreDLLFilePath, size_t CoreDLLFilePathLength ) ;	// Live2DCubismCore.dll �̃t�@�C���p�X��ݒ肷��

extern	int			Live2D_RenderBegin( void ) ;																			// Live2D �̕`�揈����J�n����
extern	int			Live2D_RenderEnd( void ) ;																				// Live2D �̕`�揈����I������

extern	int			Live2D_LoadModel(			const TCHAR *FilePath ) ;													// Live2D �̃��f���t�@�C����ǂݍ���( 0�ȏ�:Live2D���f���n���h��  �}�C�i�X�l:�G���[���� )
extern	int			Live2D_LoadModelWithStrLen(	const TCHAR *FilePath, size_t FilePathLength ) ;							// Live2D �̃��f���t�@�C����ǂݍ���( 0�ȏ�:Live2D���f���n���h��  �}�C�i�X�l:�G���[���� )
extern	int			Live2D_DeleteModel(			int Live2DModelHandle ) ;													// Live2D �̃��f����폜����
extern	int			Live2D_InitModel(			void ) ;																	// ���ׂĂ� Live2D �̃��f����폜����

extern	int			Live2D_SetUserShader( int TargetShader /* DX_LIVE2D_SHADER_NORMAL_PIXEL �� */ , int ShaderHandle DEFAULTPARAM( = -1 ) ) ;		// Live2D �̃��f���`��Ŏg�p����V�F�[�_�[��ݒ肷��( ShaderHandle �� -1 ��n���Ɛݒ���� )
extern	int			Live2D_DrawCallback( void ( *Callback )( int Live2DModelHandle, int TextureIndex, void *UserData ), void *UserData ) ;			// Live2D �̃��f���`��̑O�ɌĂ΂��R�[���o�b�N�֐���ݒ肷�� Callback �� NULL ��n���Ɛݒ���� )
extern	int			Live2D_SetUseAutoScaling( int UseFlag ) ;																// Live2D �̃��f���`������ۂɁA��ʃT�C�Y�ɉ������X�P�[�����O��s������ݒ肷��( UseFlag  TRUE:�X�P�[�����O��s��( �f�t�H���g )  FALSE:�X�P�[�����O��s��Ȃ� )
extern	int			Live2D_SetUseAutoCentering( int UseFlag ) ;																// Live2D �̃��f�����ʂ̒��S�ɕ`�悷�邩��ݒ肷��( UseFlag   TRUE:��ʂ̒��S�ɕ`�悷��( �f�t�H���g )   FALSE:��ʂ̒��S�ɕ`�悵�Ȃ� )
extern	int			Live2D_SetUseReverseYAxis( int UseFlag ) ;																// Live2D_Model_SetTranslate �Ŏw�肷�镽�s�ړ��l�� y �̌����𔽓]���邩��ݒ肷��( UseFlag   TRUE:���]����( �f�t�H���g )   FALSE:���]���Ȃ� )

extern	int			Live2D_Model_Update(			int Live2DModelHandle, float DeltaTimeSeconds ) ;						// Live2D �̃��f���̏�Ԃ�X�V����
extern	int			Live2D_Model_SetTranslate(		int Live2DModelHandle, float x, float y ) ;								// Live2D �̃��f���̈ʒu��ݒ肷��
extern	int			Live2D_Model_SetExtendRate(		int Live2DModelHandle, float ExRateX, float ExRateY ) ;					// Live2D �̃��f���̊g�嗦��ݒ肷��
extern	int			Live2D_Model_SetRotate(			int Live2DModelHandle, float RotAngle ) ;								// Live2D �̃��f���̉�]��ݒ肷��
extern	int			Live2D_Model_Draw(				int Live2DModelHandle ) ;												// Live2D �̃��f����`�悷��

extern	int			Live2D_Model_StartMotion(				int Live2DModelHandle, const TCHAR *group,						int no, float fadeInSeconds DEFAULTPARAM( = -1.0f ) , float fadeOutSeconds DEFAULTPARAM( = -1.0f ) , int isLoopFadeIn DEFAULTPARAM( = TRUE ) ) ;	// Live2D �̃��f���̎w��̃��[�V������Đ�����
extern	int			Live2D_Model_StartMotionWithStrLen(		int Live2DModelHandle, const TCHAR *group, size_t groupLength,	int no, float fadeInSeconds DEFAULTPARAM( = -1.0f ) , float fadeOutSeconds DEFAULTPARAM( = -1.0f ) , int isLoopFadeIn DEFAULTPARAM( = TRUE ) ) ;	// Live2D �̃��f���̎w��̃��[�V������Đ�����
extern	int			Live2D_Model_GetLastPlayMotionNo(		int Live2DModelHandle ) ;																			// Live2D �̃��f���ōŌ�ɍĐ��������[�V�����̃O���[�v��̔ԍ���擾����
extern	int			Live2D_Model_IsMotionFinished(			int Live2DModelHandle ) ;																			// Live2D �̃��f���̃��[�V�����Đ����I�����Ă��邩��擾����( �߂�l  TRUE:�Đ����I�����Ă���  FALSE:�Đ��� )
extern	float		Live2D_Model_GetMotionPlayTime(			int Live2DModelHandle ) ;																			// Live2D �̃��f���̃��[�V�����Đ����Ԃ�擾����
extern	int			Live2D_Model_SetExpression(				int Live2DModelHandle, const TCHAR *expressionID ) ;												// Live2D �̃��f���̎w��̕\��[�V������ݒ肷��
extern	int			Live2D_Model_SetExpressionWithStrLen(	int Live2DModelHandle, const TCHAR *expressionID, size_t expressionIDLength ) ;						// Live2D �̃��f���̎w��̕\��[�V������ݒ肷��
extern	int			Live2D_Model_HitTest(					int Live2DModelHandle, const TCHAR *hitAreaName,							float x, float y ) ;	// �w��̍��W�� Live2D �̃��f���̎w��̓����蔻��̋�`�͈͓�����肷��( TRUE:��`�͈͓�  FALSE:��`�͈͊O )
extern	int			Live2D_Model_HitTestWithStrLen(			int Live2DModelHandle, const TCHAR *hitAreaName, size_t hitAreaNameLength,	float x, float y ) ;	// �w��̍��W�� Live2D �̃��f���̎w��̓����蔻��̋�`�͈͓�����肷��( TRUE:��`�͈͓�  FALSE:��`�͈͊O )

extern	int			Live2D_Model_GetParameterCount(						int Live2DModelHandle ) ;																// Live2D �̃��f���ɐݒ肳��Ă���p�����[�^�̐���擾����
extern	const TCHAR *Live2D_Model_GetParameterId(						int Live2DModelHandle, int index ) ;													// Live2D �̃��f���ɐݒ肳��Ă���p�����[�^��ID��擾����
extern	float		Live2D_Model_GetParameterValue(						int Live2DModelHandle, const TCHAR *parameterId ) ;										// Live2D �̃��f���ɐݒ肳��Ă���p�����[�^��擾����
extern	float		Live2D_Model_GetParameterValueWithStrLen(			int Live2DModelHandle, const TCHAR *parameterId, size_t parameterIdLength ) ;			// Live2D �̃��f���ɐݒ肳��Ă���p�����[�^��擾����
extern	int			Live2D_Model_SetParameterValue(						int Live2DModelHandle, const TCHAR *parameterId,                           float value ) ;	// Live2D �̃��f���ɐݒ肳��Ă���p�����[�^��ݒ肷��
extern	int			Live2D_Model_SetParameterValueWithStrLen(			int Live2DModelHandle, const TCHAR *parameterId, size_t parameterIdLength, float value ) ;	// Live2D �̃��f���ɐݒ肳��Ă���p�����[�^��ݒ肷��

extern	int			Live2D_Model_GetHitAreasCount(						int Live2DModelHandle ) ;																// Live2D �̃��f���ɐݒ肳�ꂽ�����蔻��̐���擾����
extern	const TCHAR *Live2D_Model_GetHitAreaName(						int Live2DModelHandle, int index ) ;													// Live2D �̃��f���̓����蔻��ɐݒ肳�ꂽ���O��擾����
extern	const TCHAR *Live2D_Model_GetPhysicsFileName(					int Live2DModelHandle ) ;																// Live2D �̃��f���̕������Z�ݒ�t�@�C���̖��O��擾����
extern	const TCHAR *Live2D_Model_GetPoseFileName(						int Live2DModelHandle ) ;																// Live2D �̃��f���̃p�[�c�؂�ւ��ݒ�t�@�C���̖��O��擾����
extern	int			Live2D_Model_GetExpressionCount(					int Live2DModelHandle ) ;																// Live2D �̃��f���̕\��ݒ�t�@�C���̐���擾����
extern	const TCHAR *Live2D_Model_GetExpressionName(					int Live2DModelHandle, int index ) ;													// Live2D �̃��f���̕\��ݒ�t�@�C������ʂ���ID��擾����
extern	const TCHAR *Live2D_Model_GetExpressionFileName(				int Live2DModelHandle, int index ) ;													// Live2D �̃��f���̕\��ݒ�t�@�C���̖��O��擾����
extern	int			Live2D_Model_GetMotionGroupCount(					int Live2DModelHandle ) ;																// Live2D �̃��f���̃��[�V�����O���[�v�̐���擾����
extern	const TCHAR *Live2D_Model_GetMotionGroupName(					int Live2DModelHandle, int index ) ;													// Live2D �̃��f���̃��[�V�����O���[�v�̖��O��擾����
extern	int			Live2D_Model_GetMotionCount(						int Live2DModelHandle, const TCHAR *groupName ) ;										// Live2D �̃��f���̃��[�V�����O���[�v�Ɋ܂܂�郂�[�V�����̐���擾����
extern	int			Live2D_Model_GetMotionCountWithStrLen(				int Live2DModelHandle, const TCHAR *groupName, size_t groupNameLength ) ;				// Live2D �̃��f���̃��[�V�����O���[�v�Ɋ܂܂�郂�[�V�����̐���擾����
extern	const TCHAR *Live2D_Model_GetMotionFileName(					int Live2DModelHandle, const TCHAR *groupName,							int index ) ;	// Live2D �̃��f���̃O���[�v���ƃC���f�b�N�X�l���烂�[�V�����t�@�C���̖��O��擾����
extern	const TCHAR *Live2D_Model_GetMotionFileNameWithStrLen(			int Live2DModelHandle, const TCHAR *groupName, size_t groupNameLength,	int index ) ;	// Live2D �̃��f���̃O���[�v���ƃC���f�b�N�X�l���烂�[�V�����t�@�C���̖��O��擾����
extern	const TCHAR *Live2D_Model_GetMotionSoundFileName(				int Live2DModelHandle, const TCHAR *groupName,							int index ) ;	// Live2D �̃��f���̃��[�V�����ɑΉ�����T�E���h�t�@�C���̖��O��擾����
extern	const TCHAR *Live2D_Model_GetMotionSoundFileNameWithStrLen(		int Live2DModelHandle, const TCHAR *groupName, size_t groupNameLength,	int index ) ;	// Live2D �̃��f���̃��[�V�����ɑΉ�����T�E���h�t�@�C���̖��O��擾����
extern	float		Live2D_Model_GetMotionFadeInTimeValue(				int Live2DModelHandle, const TCHAR *groupName,							int index ) ;	// Live2D �̃��f���̃��[�V�����J�n���̃t�F�[�h�C���������Ԃ�擾����
extern	float		Live2D_Model_GetMotionFadeInTimeValueWithStrLen(	int Live2DModelHandle, const TCHAR *groupName, size_t groupNameLength,	int index ) ;	// Live2D �̃��f���̃��[�V�����J�n���̃t�F�[�h�C���������Ԃ�擾����
extern	float		Live2D_Model_GetMotionFadeOutTimeValue(				int Live2DModelHandle, const TCHAR *groupName,							int index ) ;	// Live2D �̃��f���̃��[�V�����I�����̃t�F�[�h�A�E�g�������Ԃ�擾����
extern	float		Live2D_Model_GetMotionFadeOutTimeValueWithStrLen(	int Live2DModelHandle, const TCHAR *groupName, size_t groupNameLength,	int index ) ;	// Live2D �̃��f���̃��[�V�����I�����̃t�F�[�h�A�E�g�������Ԃ�擾����
extern	const TCHAR *Live2D_Model_GetUserDataFile(						int Live2DModelHandle ) ;																// Live2D �̃��f���̃��[�U�f�[�^�̃t�@�C������擾����
extern	int			Live2D_Model_GetEyeBlinkParameterCount(				int Live2DModelHandle ) ;																// Live2D �̃��f���̖ڃp�`�Ɋ֘A�t����ꂽ�p�����[�^�̐���擾����
extern	const TCHAR *Live2D_Model_GetEyeBlinkParameterId(				int Live2DModelHandle, int index ) ;													// Live2D �̃��f���̖ڃp�`�Ɋ֘A�t����ꂽ�p�����[�^��ID��擾����
extern	int			Live2D_Model_GetLipSyncParameterCount(				int Live2DModelHandle ) ;																// Live2D �̃��f���̃��b�v�V���N�Ɋ֘A�t����ꂽ�p�����[�^�̐���擾����
extern	const TCHAR *Live2D_Model_GetLipSyncParameterId(				int Live2DModelHandle, int index ) ;													// Live2D �̃��f���̃��b�v�V���N�Ɋ֘A�t����ꂽ�p�����[�^��ID��擾����
extern	float		Live2D_Model_GetCanvasWidth(						int Live2DModelHandle ) ;																// Live2D �̃��f���̃L�����o�X�̉�����擾����
extern	float		Live2D_Model_GetCanvasHeight(						int Live2DModelHandle ) ;																// Live2D �̃��f���̃L�����o�X�̏c����擾����

#endif // DX_NON_LIVE2D_CUBISM4








#undef DX_FUNCTION_START
#define DX_FUNCTION_END
#undef DX_FUNCTION_END

#if defined( __cplusplus ) && defined( DX_COMPILE_TYPE_C_LANGUAGE )
}
#endif

#ifndef DX_NON_NAMESPACE

}

#endif // DX_NON_NAMESPACE

// �l�[���X�y�[�X DxLib ��g�p���� ------------------------------------------------------
#ifndef DX_NON_NAMESPACE
#ifndef DX_NON_USING_NAMESPACE_DXLIB

using namespace DxLib ;

#endif // DX_NON_USING_NAMESPACE_DXLIB
#endif // DX_NON_NAMESPACE

// �c�w���C�u��������ł̂ݎg�p����w�b�_�t�@�C���̃C���N���[�h -------------------------

#ifdef DX_MAKE
//	#include "DxStatic.h"
#endif

#endif // DX_LIB_H


