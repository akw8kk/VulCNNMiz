static void FUN1()
{
    char * VAR1;
    char * VAR2 = (char *)FUN2(50*sizeof(char));
    char * VAR3 = (char *)FUN2(100*sizeof(char));
    switch(5)
    {
    case 6:
        
        FUN3("");
        break;
    default:
        
        VAR1 = VAR3;
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