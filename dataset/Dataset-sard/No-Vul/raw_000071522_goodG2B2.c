static void FUN1()
{
    VAR1 * VAR2;
    VAR2 = NULL;
    VAR3 = 1; 
    VAR2 = FUN2(VAR2);
    {
        int64_t VAR4[100] = {0}; 
        {
            size_t VAR5;
            
            for (VAR5 = 0; VAR5 < 100; VAR5++)
            {
                VAR2[VAR5] = VAR4[VAR5];
            }
            FUN3(VAR2[0]);
            free(VAR2);
        }
    }
}