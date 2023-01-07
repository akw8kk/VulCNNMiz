void FUN1()
{
    char * VAR1;
    char * VAR2 = (char *)FUN2(50*sizeof(char));
    char * VAR3 = (char *)FUN2(100*sizeof(char));
    goto VAR4;
VAR4:
    
    VAR1 = VAR2;
    VAR1[0] = ''; 
    {
        size_t VAR5;
        char VAR4[100];
        memset(VAR4, '', 100-1); 
        VAR4[100-1] = ''; 
        
        for (VAR5 = 0; VAR5 < 100; VAR5++)
        {
            VAR1[VAR5] = VAR4[VAR5];
        }
        VAR1[100-1] = ''; 
        FUN3(VAR1);
    }
}