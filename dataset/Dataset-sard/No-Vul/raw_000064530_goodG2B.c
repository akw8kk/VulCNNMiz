static void FUN1()
{
    VAR1 * VAR2;
    int64_t VAR3[50];
    int64_t VAR4[100];
    
    VAR2 = VAR4;
    {
        VAR1 * VAR5 = VAR2;
        VAR1 * VAR2 = VAR5;
        {
            int64_t VAR6[100] = {0}; 
            
            memmove(VAR2, VAR6, 100*sizeof(VAR1));
            FUN2(VAR2[0]);
        }
    }
}