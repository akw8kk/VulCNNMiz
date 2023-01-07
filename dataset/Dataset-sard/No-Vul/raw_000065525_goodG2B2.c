static void FUN1()
{
    char * VAR1;
    char * VAR2 = (char *)FUN2(100*sizeof(char));
    VAR1 = VAR2;
    if(VAR3==5)
    {
        
        memset(VAR1, '', 50-1); 
        VAR1[50-1] = ''; 
    }
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