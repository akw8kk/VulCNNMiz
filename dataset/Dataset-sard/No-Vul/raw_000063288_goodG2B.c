static void FUN1()
{
    int VAR1;
    char * VAR2;
    char VAR3[10];
    char VAR4[10+1];
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        VAR2 = VAR4;
        VAR2[0] = ''; 
    }
    {
        char VAR5[10+1] = VAR6;
        size_t VAR7, VAR8;
        VAR8 = strlen(VAR5);
        
        
        for (VAR7 = 0; VAR7 < VAR8 + 1; VAR7++)
        {
            VAR2[VAR7] = VAR5[VAR7];
        }
        FUN2(VAR2);
    }
}