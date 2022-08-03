////1、示例：用operator + 作为函数名，作为成员函数
//
//vec2 Add(const vec2 & other) const
//{
//	return vec2(m_x + other.m_x, m_y + other.m_y);
//}
//vec2 operator+(const vec2& other) const
//{
//	return Add(other);
//}
////2、对 << 的重载示例：非成员函数
//
//std::ostream & operator<<(std::ostream & stream, const vec2 & v)
//{
//	stream << v.m_x << "," << v.m_y << std::endl;
//	return stream;
//}
////3、对于 == 和！ = 的重载：
//
//bool operator==(const vec2 & other) const
//{
//	return m_x == other.m_x && m_y == other.m_y;
//}
//bool operator!=(const vec2& other) const
//{
//	return !(*this == other);
//}
////注意此处的* this，代表对象本身