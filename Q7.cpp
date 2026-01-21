/*A game compares three players' scores to find who is ahead. Implement a solution to accept three scores and identify the
 winner.*/
 #include<iostream>
 int main()
 {
    int sc_1;
    std::cout<<"\nEnter the score of the first player:";
    std::cin>>sc_1;
    int sc_2;
    std::cout<<"\nEnter the score of the second player:";
    std::cin>>sc_2;
    int sc_3;
    std::cout<<"\nEnter the score of the third player:";
    std::cin>>sc_3;
    if(sc_1>sc_2 && sc_1>sc_3)
    std::cout<<"\nTHE FIRST PLAYER IS THE WINNER";
    else if(sc_2>sc_1 && sc_2>sc_3)
    std::cout<<"\nTHE SECOND PLAYER IS THE WINNER";
    else 
    std::cout<<"\nTHE THIRD PLAYER IS THE WINNER";
    return 0 ;
 }
