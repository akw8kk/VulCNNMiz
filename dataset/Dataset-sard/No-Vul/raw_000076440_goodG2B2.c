static void FUN1()
{
    wchar_t * VAR1;
    VAR1 = NULL;
    switch(6)
    {
    case 6:
        
        VAR1 = (wchar_t *)malloc(100*sizeof(wchar_t));
        wmemset(VAR1, VAR2'', 100-1); 
        VAR1[100-1] = VAR2''; 
        break;
    default:
        
        FUN2("");
        break;
    }
    {
        wchar_t VAR3[100];
        wmemset(VAR3, VAR2'', 100-1);
        VAR3[100-1] = VAR2''; 
        
        memcpy(VAR3, VAR1, wcslen(VAR3)*sizeof(wchar_t));
        VAR3[100-1] = VAR2'';
        FUN3(VAR3);
        free(VAR1);
    }
}