void FUN1()
{
    int VAR1;
    int * VAR2;
    int VAR3[50];
    int VAR4[100];
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        VAR2 = VAR3;
    }
    {
        int VAR5[100] = {0}; 
        
        memmove(VAR2, VAR5, 100*sizeof(int));
        FUN2(VAR2[0]);
    }
}