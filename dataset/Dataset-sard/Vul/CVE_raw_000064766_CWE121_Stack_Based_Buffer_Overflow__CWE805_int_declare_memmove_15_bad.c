void FUN1()
{
    int * VAR1;
    int VAR2[50];
    int VAR3[100];
    switch(6)
    {
    case 6:
        
        VAR1 = VAR2;
        break;
    default:
        
        FUN2("");
        break;
    }
    {
        int VAR4[100] = {0}; 
        
        memmove(VAR1, VAR4, 100*sizeof(int));
        FUN3(VAR1[0]);
    }
}