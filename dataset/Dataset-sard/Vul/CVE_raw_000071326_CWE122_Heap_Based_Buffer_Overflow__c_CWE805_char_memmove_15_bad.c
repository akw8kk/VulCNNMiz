void FUN1()
{
    char * VAR1;
    VAR1 = NULL;
    switch(6)
    {
    case 6:
        
        VAR1 = (char *)malloc(50*sizeof(char));
        VAR1[0] = ''; 
        break;
    default:
        
        FUN2("");
        break;
    }
    {
        char VAR2[100];
        memset(VAR2, '', 100-1); 
        VAR2[100-1] = ''; 
        
        memmove(VAR1, VAR2, 100*sizeof(char));
        VAR1[100-1] = ''; 
        FUN2(VAR1);
        free(VAR1);
    }
}