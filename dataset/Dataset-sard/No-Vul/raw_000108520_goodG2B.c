static void FUN1()
{
    long * VAR1;
    VAR1 = NULL; 
    {
        
        long * VAR2 = (long *)malloc(100*sizeof(long));
        if (VAR2 == NULL)
        {
            FUN2("");
            FUN3(1);
        }
        {
            size_t VAR3;
            for (VAR3 = 0; VAR3 < 100; VAR3++)
            {
                VAR2[VAR3] = 5L;
            }
        }
        VAR1 = VAR2;
    }
    VAR4 = VAR1;
    FUN4();
}