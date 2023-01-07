static void FUN1()
{
    char * VAR1;
    char VAR2[10];
    char VAR3[10+1];
    if(FUN2())
    {
        
        FUN3("");
    }
    else
    {
        
        VAR1 = VAR3;
        VAR1[0] = ''; 
    }
    {
        char VAR4[10+1] = VAR5;
        size_t VAR6, VAR7;
        VAR7 = strlen(VAR4);
        
        
        for (VAR6 = 0; VAR6 < VAR7 + 1; VAR6++)
        {
            VAR1[VAR6] = VAR4[VAR6];
        }
        FUN3(VAR1);
    }
}