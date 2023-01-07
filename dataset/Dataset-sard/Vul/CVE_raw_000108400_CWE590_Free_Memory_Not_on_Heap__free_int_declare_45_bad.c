void FUN1()
{
    int * VAR1;
    VAR1 = NULL; 
    {
        
        int VAR2[100];
        {
            size_t VAR3;
            for (VAR3 = 0; VAR3 < 100; VAR3++)
            {
                VAR2[VAR3] = 5;
            }
        }
        VAR1 = VAR2;
    }
    VAR4 = VAR1;
    FUN2();
}