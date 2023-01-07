void FUN1()
{
    int * VAR1;
    int * VAR2 = (int *)FUN2(50*sizeof(int));
    int * VAR3 = (int *)FUN2(100*sizeof(int));
    while(1)
    {
        
        VAR1 = VAR2;
        break;
    }
    {
        int VAR4[100] = {0}; 
        
        memcpy(VAR1, VAR4, 100*sizeof(int));
        FUN3(VAR1[0]);
    }
}