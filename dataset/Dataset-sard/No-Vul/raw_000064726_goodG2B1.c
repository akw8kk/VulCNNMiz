static void FUN1()
{
    int * VAR1;
    int VAR2[50];
    int VAR3[100];
    switch(5)
    {
    case 6:
        
        FUN2("");
        break;
    default:
        
        VAR1 = VAR3;
        break;
    }
    {
        int VAR4[100] = {0}; 
        
        memcpy(VAR1, VAR4, 100*sizeof(int));
        FUN3(VAR1[0]);
    }
}