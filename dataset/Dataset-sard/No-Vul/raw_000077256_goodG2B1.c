static void FUN1()
{
    char * VAR1;
    char * VAR2 = (char *)FUN2(100*sizeof(char));
    memset(VAR2, '', 100-1);
    VAR2[100-1] = '';
    switch(5)
    {
    case 6:
        
        FUN3("");
        break;
    default:
        
        VAR1 = VAR2;
        break;
    }
    {
        char VAR3[100*2];
        memset(VAR3, '', 100*2-1); 
        VAR3[100*2-1] = ''; 
        
        strcpy(VAR3, VAR1);
        FUN3(VAR3);
    }
}