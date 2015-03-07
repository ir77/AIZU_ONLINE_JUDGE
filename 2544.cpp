#include <list>
#include <iostream>
#include <string>

int main()
{
	int changeCount, bookMadeYear, m_count = 0;
	std::string m_string = "kogakubu10gokan";
	bool endIs = false;

	std::cin >> changeCount >> bookMadeYear;

	for( int i = 0; i < changeCount; i++ )
	{
		int tmpYear;
		std::string tmpString;
		std::cin >> tmpYear >> tmpString;

		if (endIs) {
			continue;
		}

		if (m_count <= bookMadeYear 
				&& bookMadeYear < tmpYear) {
			endIs = true;
		} else {
			m_count = tmpYear;
			m_string = tmpString;
		}
	}
	std::cout << m_string << std::endl;

	return 0;
}
