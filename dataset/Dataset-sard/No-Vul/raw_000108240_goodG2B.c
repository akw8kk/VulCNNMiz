static void FUN1()
{
    VAR1 * VAR2;
    VAR2 = NULL; 
    {
        
        VAR1 * VAR3 = (VAR1 *)malloc(100*sizeof(VAR1));
        if (VAR3 == NULL)
        {
            FUN2("");
            FUN3(1);
        }
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
    FUN4();
}