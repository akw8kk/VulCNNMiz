void FUN1()
{
    char * VAR1;
    char VAR2[100];
    VAR1 = VAR2;
    VAR3 = 1; 
    VAR1 = FUN2(VAR1);
    {
        char VAR4[50] = "";
        size_t VAR5, VAR6;
        VAR6 = strlen(VAR1);
        
        for (VAR5 = 0; VAR5 < VAR6; VAR5++)
        {
            VAR4[VAR5] = VAR1[VAR5];
        }
        VAR4[50-1] = ''; 
        FUN3(VAR1);
    }
}