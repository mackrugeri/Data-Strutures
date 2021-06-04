

			//cout << "Copying array function is called " << endl;
			for(int i=0; i < (Items / 2); i++)
			{
				if(array[i] != -1)
				{
					int storing_index = array[i] % Items;

					array2[storing_index] = array[i];

					// Check Mission
				}
			}
		}

		int Calling_function()
		{
				for(int i =0;i < Items; i++)
				{
						main_function(array);
				}
		}
		int printing(int *array)
		{
			for (int i = 0; i < Item2; ++i)
			{
				cout << array[i] << " ";
			}
		}
};


int main(){
	
	Hashing h;
	h.Calling_function();



	return 0;
}

