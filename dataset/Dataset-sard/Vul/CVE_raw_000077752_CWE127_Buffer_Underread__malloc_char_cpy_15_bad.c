void FUN1()
{
    char * VAR1;
    VAR1 = NULL;
    switch(6)
    {
    case 6:
    {
        char * VAR2 = (char *)malloc(100*sizeof(char));
        memset(VAR2, '', 100-1);
        VAR2[100-1] = '';
        
        VAR1 = VAR2 - 8;
    }
    break;
    default:
        
        FUN2("");
        break;
    }
    {
        char VAR3[100*2];
        memset(VAR3, '', 100*2-1); 
        VAR3[100*2-1] = ''; 
        
        strcpy(VAR3, VAR1);
        FUN2(VAR3);
        
    }
}