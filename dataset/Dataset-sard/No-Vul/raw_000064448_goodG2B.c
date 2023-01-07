static void FUN1()
{
    int VAR1;
    VAR2 * VAR3;
    int64_t VAR4[50];
    int64_t VAR5[100];
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        VAR3 = VAR5;
    }
    {
        int64_t VAR6[100] = {0}; 
        {
            size_t VAR7;
            
            for (VAR7 = 0; VAR7 < 100; VAR7++)
            {
                VAR3[VAR7] = VAR6[VAR7];
            }
            FUN2(VAR3[0]);
        }
    }
}