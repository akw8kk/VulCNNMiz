void FUN1()
{
    char * VAR1;
    char * VAR2 = (char *)FUN2(50*sizeof(char));
    char * VAR3 = (char *)FUN2(100*sizeof(char));
    if(VAR4)
    {
        
        VAR1 = VAR2;
        VAR1[0] = ''; 
    }
    {
        size_t VAR5;
        char VAR6[100];
        memset(VAR6, '', 100-1); 
        VAR6[100-1] = ''; 
        
        for (VAR5 = 0; VAR5 < 100; VAR5++)
        {
            VAR1[VAR5] = VAR6[VAR5];
        }
        VAR1[100-1] = ''; 
        FUN3(VAR1);
    }
}