#include <iostream>
#include <string>

using namespace std;

int maxNum;
int num[20];

int main()
{
  int sum=0;  
  cout << "Enter an Array" << endl;
  for (int i=0;i<20;i++)
  {
      cin >> num[i];
      maxNum++;
      if (num[i]==-1)
      break;
  }

  cout <<"Your array is: " << endl;

  for (int i=0;i<maxNum;i++)
  cout << num[i]<<ends;

  cout << endl;

    cout << "Your doubled array is:" << endl;

    for (int j=0;j<maxNum;j++)
    {
    num[j]*=2;
    cout << num[j]<<ends;
    }

    cout << endl;

    cout << "When the digits of each seat are added..." << endl;
    
    int r=0;
    for (int k=0;k<maxNum;k++)
    {
           while (num[k]>0)
           {
           	r=num[k]%10;
           	sum+=r;
           	num[k]=num[k]/10;
           }
           cout<<sum<<ends;
           sum=0;
           r=0;
    }
    cout << endl;
}
