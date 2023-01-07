void FUN1()
{
    int * VAR1;
    VAR1 = NULL;
    VAR2 = 1; 
    VAR1 = FUN2(VAR1);
    {
        int VAR3[10] = {0};
        size_t VAR4;
        
        for (VAR4 = 0; VAR4 < 10; VAR4++)
        {
            VAR1[VAR4] = VAR3[VAR4];
        }
        FUN3(VAR1[0]);
    }
}