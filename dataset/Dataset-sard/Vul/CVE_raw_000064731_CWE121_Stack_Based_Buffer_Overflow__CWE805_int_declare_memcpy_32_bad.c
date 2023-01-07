void FUN1()
{
    int * VAR1;
    int * *VAR2 = &VAR1;
    int * *VAR3 = &VAR1;
    int VAR4[50];
    int VAR5[100];
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
            FUN2(VAR1[0]);
        }
    }
}