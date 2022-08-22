#include <iostream>
#include<functional>
#include<vector>
using namespace std;

void pozitiv (int i)
{

        if (i >= 0)
            cout <<"pozitiv " << i << endl;
    
   
}
void otr(int i)
{
    
    
        if (i< 0)
            cout <<"negative  "<< i << endl;
    

}
void chet(int i)
{
    
        if (i%2== 0)
            cout << "chet " << i << endl;
    

}
void nechet(int i)
{
    int y = abs(i);
        if (y %2!= 0)
            cout << "nechet " << i << endl;
    

}
void prost(int i)
{
  
       int k = 0;
       int p = abs(i);
       for (int j=2;j<=p/2;j++)
           if (p% j == 0)
           {
               k++;
              
               break;
           }
       if (k == 0)
           cout <<"prostoe "<< i << endl;

}
void fn(vector <int>& b, vector<function<void(int)>>fun)
{
    for (auto i : b)
    {
        for (auto & f : fun)
        {
            f(i);
        }
    }

}
int main()
{
    vector <int> b;
    
    // Создать вектор из случайных чисел
    // Вывод всех положительных, отрицательных, четных, нечетных, простых
    //(отдельными функциями)
    for (int i = 0; i <= 5; i++)
    {
        b.push_back(rand() % 100 - 50);
        
    }
    vector<function<void(int)>>f;
    f.emplace_back(pozitiv);
    f.emplace_back(otr);
    f.emplace_back(chet);
    f.emplace_back(nechet);
    f.emplace_back(prost);
    fn(b, f);
    


}

