#include <iostream>
#include <cstdlib>//for "exit()" on some systems
#include <vector>
#include <string>

using namespace std;

/**
\fn linearSearch
\brief Search data for the first occurrence of key
\param [in] key The value being searched for
\param [in] data The data set that will be searched
\returns location of key if found or -1 if not found
*/
//int linearSearch(auto data, auto key);//prototype
int linearSearch(auto data, auto key) 
{
	for(int i = 0;i < data.size();i++)
	{
		if(data[i] == key) 
		{
			return i;// return its location
		}
	}
	return -1; //element not found
}


int main()
{
  vector<string> inputs;
  string search_key, input;
  int result;

   cout<<"Welcome to \"SORT it\". We first need some input data."<<endl;
   cout<<"We'll assume the inputs do not have any spaces."<<endl<<endl;
   cout<<"To end input type the #-character (followed by Enter)"<<endl<<endl;

   cin>>input;
 
    while(input != "#")//read an unknown number of inputs from keyboard
    {
       inputs.push_back(input);
       cin>>input;
    }

   cout<<endl<<"["<<inputs.size()<<" values read from input source]"<<endl<<endl;

  if(inputs.size() == 0)//no input
  {
      cout<<endl<<"No input received, quiting..."<<endl<<endl;
       exit(1);//nothing to do but quit program
  }
 
   //cout<<endl<<""<<endl<<endl;
  
	/*
    while(low <= high)//perform searches until sentinel entered
    {
        
        result = linearSearch(inputs,search_key);

        cout<<"  '"<<search_key<<"' was ";

        if (result == -1)
          cout<<"not found";
        else
          cout<<"found at index "<<result;


        cout<<endl<<endl<<"Enter a value to search for: ";
        cin>>search_key; 
        
        
    }*/
	cout << "Unordered LIST" << endl;
	for(int i = 0;i < inputs.size();i++) {
		cout<<(i+1)<<"\) "<<" \""<<inputs[i]<<"\""<<endl;
	}
	
	int i,j,minIndex;
	string tmp;
	//cout<<endl<<"TEST.------------------------"<<endl;
	for(i = 0; i<inputs.size();i++) {
		minIndex = i;
		for(j=i+1;j<inputs.size();j++) {//find smallest
			if(inputs[j]<inputs[minIndex]) {
				minIndex = j;
			}
			cout<<endl<<"TEST.------------------------"<<endl;
		}
		if (minIndex != i) {
			tmp = inputs[i];
			inputs[i]= inputs[minIndex];
			inputs[minIndex]= tmp;
		}
	}
	
	cout << "Ordered LIST" << endl;
	for(int i = 0;i < inputs.size();i++) {
		cout<<(i+1)<<"\) "<<" \""<<inputs[i]<<"\""<<endl;
	}
   cout<<endl<<"Program \"SORT it\" is now finished."<<endl<<endl;

    return 0;
}
