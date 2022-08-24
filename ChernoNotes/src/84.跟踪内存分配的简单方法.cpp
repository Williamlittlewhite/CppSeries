//#include<iostream>
//#include<memory>
//struct AllocationMetrics
//{
//	uint32_t TotalAllocated = 0;
//	uint32_t TotalFreed = 0;
//
//	uint32_t CurrentUsage() { return TotalAllocated - TotalFreed; }
//};
//
//static AllocationMetrics s_AllocationMetrics;
////��ʹ�ñ�׼���new��������������ʵ���ϻ����ӵ����������
//void* operator new(size_t size)
//{
//	/*std::cout << "Allocating " << size << " bytes\n";*/
//	s_AllocationMetrics.TotalAllocated += size;
//	return malloc(size);
//}
////��ʹ�ñ�׼���free��������������ʵ���ϻ����ӵ���������� �������������������ڴ����
//void operator delete(void* memory,size_t size)
//{
//	/*std::cout << "Freezing " << size << " bytes\n";*/
//	s_AllocationMetrics.TotalFreed += size;
//	free(memory);
//}
//static void PrintMemoryUsage()
//{
//	std::cout << "Memory Usage: " << s_AllocationMetrics.CurrentUsage() << " bytes\n";
//}
//
//struct Object
//{
//	int x, y, z;
//};
//int main()                         
//{
//	PrintMemoryUsage();
//	std::string string = "Cherno";
//	PrintMemoryUsage();
//	{
//		//Object* obj = new Object;
//		
//		std::unique_ptr<Object> obj = std::make_unique<Object>();
//		PrintMemoryUsage();
//	}
//	PrintMemoryUsage();
//}