#include<string>
#include<iostream>
using namespace std;
string  ReadString()
{

	string S1;
	cout << "Please Enter Your String?\n";
	getline(cin, S1);
	return S1;

}



int PrintEachWordInString(string S1,string search)
{
	  //find -> للبحث عن شيء ما داخل مصفوفة
	 // npos -> هو قيمة ثابتة تعني "غير موجود" أو "لم يتم العثور عليه".
	// supstr -> هي الدالة الصحيحة لاستخراج جزء من السلسلة في C++.  // تأخذ معلمتين : الموضع الذي تبدأ منه والطول المطلوب للسلسلة الجزئية.
   // erase ->   تُستخدم لحذف أجزاء معينة من السلسلة النصية أو لحذف عناصر من الحاويات مثل vector أو list.
	string sWord;
	short pos = 0;
	int count = 0;
	while ((pos = S1.find(search)) != std::string::npos)
	{
		sWord = S1.substr(0, pos);
		if (sWord != "")
		{
			count++;
			S1.erase(0, pos + search.length());
		}
	}
	if (S1 != "")
	{
		count++;
	}
	return count;
}




int main()
{
	string S1 = ReadString();
	//char Ch1 = ReadChar();
	cout << " The Number of words your string is : " << PrintEachWordInString(S1," ");

	return 0;
}