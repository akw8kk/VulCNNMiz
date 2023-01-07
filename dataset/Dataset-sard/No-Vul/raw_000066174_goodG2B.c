static void FUN1()
{
    wchar_t * VAR1;
    wchar_t * VAR2[5];
    wchar_t * VAR3 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    VAR1 = VAR3;
    
    wmemset(VAR1, VAR4'', 50-1); 
    VAR1[50-1] = VAR4''; 
    VAR2[2] = VAR1;
    FUN3(VAR2);
}