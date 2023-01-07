static void FUN1()
{
    VAR1 * VAR2;
    VAR1 * *VAR3 = &VAR2;
    VAR1 * *VAR4 = &VAR2;
    VAR2 = NULL;
    {
        VAR1 * VAR2 = *VAR3;
        
        VAR2 = (VAR1 *)malloc(100*sizeof(VAR1));
        *VAR3 = VAR2;
    }
    {
        VAR1 * VAR2 = *VAR4;
        {
            int64_t VAR5[100] = {0}; 
            
            memmove(VAR2, VAR5, 100*sizeof(VAR1));
            FUN2(VAR2[0]);
            free(VAR2);
        }
    }
}