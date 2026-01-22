/*A text editor auto-detects whether an input letter is a vowel, a consonant or a number. Implement a solution to classify the
 symbol.*/
 #include<iostream>
 #include<cctype>
 int main()
{
    char choice;
    std::cout<<"enter a number or character:";
    std::cin>>choice;
    if(isdigit(choice))
    {
        std::cout<<choice<<" is a digit";
    }
    else 
    {
        switch(choice)
        {
            case'a':
            case'e':
            case'i':
            case'o':
            case'u':
                    std::cout<<"it is a vowel";
                    break;
            default: std::cout<<"it is a consonent";
        }            
    }
    return 0;
}
