static void FUN1()
{
    int VAR1;
    int * VAR2;
    int * VAR3 = (int *)FUN2(50*sizeof(int));
    int * VAR4 = (int *)FUN2(100*sizeof(int));
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        VAR2 = VAR4;
    }
    {
        int VAR5[100] = {0}; 
        
        memcpy(VAR2, VAR5, 100*sizeof(int));
        FUN3(VAR2[0]);
    }
}