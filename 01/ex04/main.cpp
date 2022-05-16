#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char **argv)
{
    std::string filename;
    std::string s1;
    std::string s2;
    std::string	str;
    std::string	tmp;
    int i;
    std::ifstream ifs;
    std::ofstream ofs;
    if (argc != 4)
	{
		std::cout << "error number of parameters" << std::endl;
		return (1);
	}
    filename = argv[1];
    s1 = argv[2];
    s2 = argv[3];
    if (filename.empty() || s1.empty() || s2.empty())
	{
		std::cout << "some parameter is empty" << std::endl;
		return (1);
	}
    ifs.open(filename.c_str());
    ofs.open(filename.append(".replace").c_str());
    if (!ifs.is_open() || !ofs.is_open())
	{
		std::cout << "file cannot open" << std::endl;
		return (1);
	}
    while(!ifs.eof())
    {
        getline(ifs,str);       
        while (str.find(s1, 0) != std::string::npos) 
        {
			i = str.find(s1);
			tmp.append(str.substr(0, i));
			tmp.append(s2);
			tmp.append(str.substr(i + s1.length()));
			str = tmp;
            tmp.clear();
		}
		ofs << str << std::endl;
    }
    ifs.close();
    ofs.close();
    return (0);
}  

