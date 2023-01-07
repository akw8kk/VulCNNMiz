void FUN1()
{
    VAR1 * VAR2;
    VAR2 = NULL; 
    {
        
        int64_t VAR3[100];
        {
            size_t VAR4;
            for (VAR4 = 0; VAR4 < 100; VAR4++)
            {
                VAR3[VAR4] = 5LL;
            }
        }
        VAR2 = VAR3;
    }
    VAR5 = VAR2;
    FUN2();
}