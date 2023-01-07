void FUN1()
{
    int * VAR1;
    int * *VAR2 = &VAR1;
    int * *VAR3 = &VAR1;
    VAR1 = NULL;
    {
        int * VAR1 = *VAR2;
        
        VAR1 = (int *)malloc(10);
        *VAR2 = VAR1;
    }
    {
        int * VAR1 = *VAR3;
        {
            int VAR4[10] = {0};
            
            memcpy(VAR1, VAR4, 10*sizeof(int));
            FUN2(VAR1[0]);
            free(VAR1);
        }
    }
}