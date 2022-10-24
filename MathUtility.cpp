#include "MathUtility.h"

// ��x�N�g����Ԃ�
//const Vector3 Vector3Zero()
//{
//	
//}

//// �m����(����)�����߂�
//float Vector3Length(const Vector3& v);

//// ���K������
//Vector3& Vector3Normalize(Vector3& v);

//// ���ς����߂�
//float Vector3Dot(const Vector3& v1, const Vector3& v2);

//// �O�ς����߂�
//Vector3 Vector3Cross(const Vector3& v1, const Vector3& v2);

//// 2�����Z�q�I�[�o�[���[�h
//const Vector3 operator+(const Vector3& v1, const Vector3& v2);
//const Vector3 operator-(const Vector3& v1, const Vector3& v2);
//const Vector3 operator*(const Vector3& v, float s);
//const Vector3 operator*(float s, const Vector3& v);
//const Vector3 operator/(const Vector3& v, float s);

// �P�ʍs������߂�
Matrix4 MathUtility::Matrix4Identity()
{
	Matrix4 result
	{
		1.0f,0.0f,0.0f,0.0f,
		0.0f,1.0f,0.0f,0.0f,
		0.0f,0.0f,1.0f,0.0f,
		0.0f,0.0f,0.0f,1.0f,
	};

	return result;
}

//// �]�u�s������߂�
//Matrix4 Matrix4Transpose(const Matrix4& m);

//// �g��k���s��̍쐬
//Matrix4 Matrix4Scaling(float sx, float sy, float sz);

//// ��]�s��̍쐬
//Matrix4 Matrix4RotationX(float angle);
//Matrix4 Matrix4RotationY(float angle);
//Matrix4 Matrix4RotationZ(float angle);

//// ���s�ړ��s��̍쐬
//Matrix4 Matrix4Translation(float tx, float ty, float tz);

//// �r���[�s��̍쐬
//Matrix4 Matrix4LookAtLH(const Vector3& eye, const Vector3& target, const Vector3& up);

//// ���s���e�s��̍쐬
//Matrix4 Matrix4Orthographic(
//	float viewLeft, float viewRight, float viewBottom, float viewTop, float nearZ, float farZ);

//// �������e�s��̍쐬
//Matrix4 Matrix4Perspective(float fovAngleY, float aspectRatio, float nearZ, float farZ);

//// ���W�ϊ��iw���Z�Ȃ��j
//Vector3 Vector3Transform(const Vector3& v, const Matrix4& m);

//// ���W�ϊ��iw���Z����j
//Vector3 Vector3TransformCoord(const Vector3& v, const Matrix4& m);

//// �x�N�g���ϊ�
//Vector3 Vector3TransformNormal(const Vector3& v, const Matrix4& m);

//// 2�����Z�q�I�[�o�[���[�h
//Matrix4 operator*(const Matrix4& m1, const Matrix4& m2);
//Vector3 operator*(const Vector3& v, const Matrix4& m);