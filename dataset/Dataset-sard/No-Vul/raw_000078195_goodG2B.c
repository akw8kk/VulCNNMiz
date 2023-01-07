static void FUN1()
{
    wchar_t * VAR1;
    VAR1 = NULL;
    VAR1 = FUN2(VAR1);
    {
        wchar_t VAR2[100];
        wmemset(VAR2, VAR3'', 100-1); 
        VAR2[100-1] = VAR3''; 
        
        wcsncpy(VAR2, VAR1, wcslen(VAR2));
        
        VAR2[100-1] = VAR3'';
        FUN3(VAR2);
        
    }
}