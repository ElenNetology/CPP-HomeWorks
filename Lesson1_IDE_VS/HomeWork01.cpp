// HomeWork01.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
int main()
{
    std::ifstream in("in.txt");

    while (!in.eof())
    {
        int i, n, j, m;
        in >> n;
        std::cout << n << std::endl;
        int* a1 = new int[n];
        for (i = 0; i < n; i++)
        {
            in >> a1[i];
        }
        int temp1 = a1[0];
        for (int i = 0; i < n; i++)
        {
            a1[i] = a1[i + 1];
        }
        a1[n - 1] = temp1;
        for (int i = 0; i < n; i++)
        {
            std::cout << a1[i] << " ";
        }
        std::cout << std::endl;
        in >> m;
        std::cout << m << std::endl;
        int* a2 = new int[m];
        for (i = 0; i < m; i++)
        {
            in >> a2[i];
        }
        int temp = a2[m - 1];
        for (int i = m - 2; i >= 0; i--) {
            a2[i + 1] = a2[i];
        }
        a2[0] = temp;
        for (i = 0; i < m; i++) {
            std::cout << a2[i] << " ";
        }
        in.close();
        std::ofstream fout("out.txt");
        fout << m << std::endl;
        for (i = 0; i < m; i++)
        {
            fout << a2[i] << " ";
        }
        fout << std::endl << n << std::endl;
        for (i = 0; i < n; i++)
        {
            fout << a1[i] << " ";
            std::cout << std::endl;
        }
        fout.close();
    }
    return 0;
}