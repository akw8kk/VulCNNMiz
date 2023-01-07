static void FUN1()
{
    wchar_t * VAR1;
    VAR1 = NULL;
    switch(5)
    {
    case 6:
        
        FUN2("");
        break;
    default:
        
        VAR1 = (wchar_t *)malloc(100*sizeof(wchar_t));
        VAR1[0] = VAR2''; 
        break;
    }
    {
        wchar_t VAR3[100];
        wmemset(VAR3, VAR2'', 100-1); 
        VAR3[100-1] = VAR2''; 
        
        wcsncpy(VAR1, VAR3, 100-1);
        VAR1[100-1] = VAR2''; 
        FUN3(VAR1);
        free(VAR1);
    }
}