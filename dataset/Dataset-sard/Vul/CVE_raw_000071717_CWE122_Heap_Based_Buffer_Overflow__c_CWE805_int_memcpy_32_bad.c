void FUN1()
{
    int * VAR1;
    int * *VAR2 = &VAR1;
    int * *VAR3 = &VAR1;
    VAR1 = NULL;
    {
        int * VAR1 = *VAR2;
        
        VAR1 = (int *)malloc(50*sizeof(int));
        *VAR2 = VAR1;
    }
    {
        int * VAR1 = *VAR3;
        {
            int VAR4[100] = {0}; 
            
            memcpy(VAR1, VAR4, 100*sizeof(int));
            FUN2(VAR1[0]);
            free(VAR1);
        }
    }
}