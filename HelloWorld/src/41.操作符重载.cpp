////1��ʾ������operator + ��Ϊ����������Ϊ��Ա����
//
//vec2 Add(const vec2 & other) const
//{
//	return vec2(m_x + other.m_x, m_y + other.m_y);
//}
//vec2 operator+(const vec2& other) const
//{
//	return Add(other);
//}
////2���� << ������ʾ�����ǳ�Ա����
//
//std::ostream & operator<<(std::ostream & stream, const vec2 & v)
//{
//	stream << v.m_x << "," << v.m_y << std::endl;
//	return stream;
//}
////3������ == �ͣ� = �����أ�
//
//bool operator==(const vec2 & other) const
//{
//	return m_x == other.m_x && m_y == other.m_y;
//}
//bool operator!=(const vec2& other) const
//{
//	return !(*this == other);
//}
////ע��˴���* this�����������