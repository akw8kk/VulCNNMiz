static void FUN1()
{
    wchar_t * VAR1;
    wchar_t * VAR2 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    VAR1 = VAR2;
    goto VAR3;
VAR3:
    
    wmemset(VAR1, VAR4'', 50-1); 
    VAR1[50-1] = VAR4''; 
    {
        wchar_t VAR5[50] = VAR4"";
        
        wcscpy(VAR5, VAR1);
        FUN3(VAR1);
    }
}