void FUN1()
{
    wchar_t * VAR1;
    VAR1 = (wchar_t *)malloc(100*sizeof(wchar_t));
    switch(6)
    {
    case 6:
        
        wmemset(VAR1, VAR2'', 100-1); 
        VAR1[100-1] = VAR2''; 
        break;
    default:
        
        FUN2("");
        break;
    }
    {
        wchar_t VAR3[50] = VAR2"";
        
        wcsncpy(VAR3, VAR1, wcslen(VAR1));
        VAR3[50-1] = VAR2''; 
        FUN3(VAR1);
        free(VAR1);
    }
}