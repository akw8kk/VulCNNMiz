void FUN1()
{
    int * VAR1;
    int * *VAR2 = &VAR1;
    int * *VAR3 = &VAR1;
    int * VAR4 = (int *)FUN2(50*sizeof(int));
    int * VAR5 = (int *)FUN2(100*sizeof(int));
    {
        int * VAR1 = *VAR2;
        
        VAR1 = VAR4;
        *VAR2 = VAR1;
    }
    {
        int * VAR1 = *VAR3;
        {
            int VAR6[100] = {0}; 
            
            memcpy(VAR1, VAR6, 100*sizeof(int));
            FUN3(VAR1[0]);
        }
    }
}