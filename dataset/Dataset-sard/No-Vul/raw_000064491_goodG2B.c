static void FUN1()
{
    VAR1 * VAR2;
    VAR1 * *VAR3 = &VAR2;
    VAR1 * *VAR4 = &VAR2;
    int64_t VAR5[50];
    int64_t VAR6[100];
    {
        VAR1 * VAR2 = *VAR3;
        
        VAR2 = VAR6;
        *VAR3 = VAR2;
    }
    {
        VAR1 * VAR2 = *VAR4;
        {
            int64_t VAR7[100] = {0}; 
            
            memcpy(VAR2, VAR7, 100*sizeof(VAR1));
            FUN2(VAR2[0]);
        }
    }
}