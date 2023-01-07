void FUN1()
{
    char * VAR1;
    char * VAR2 = (char *)FUN2(50*sizeof(char));
    char * VAR3 = (char *)FUN2(100*sizeof(char));
    while(1)
    {
        
        VAR1 = VAR2;
        VAR1[0] = ''; 
        break;
    }
    {
        size_t VAR4;
        char VAR5[100];
        memset(VAR5, '', 100-1); 
        VAR5[100-1] = ''; 
        
        for (VAR4 = 0; VAR4 < 100; VAR4++)
        {
            VAR1[VAR4] = VAR5[VAR4];
        }
        VAR1[100-1] = ''; 
        FUN3(VAR1);
    }
}