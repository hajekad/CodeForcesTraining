<div class="header"><div class="title">G. Ehab and subtraction</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file"><div class="property-title">input</div>standard input</div><div class="output-file"><div class="property-title">output</div>standard output</div></div><div><p>You're given an array <span class="MathJax_Preview" style="color: inherit; --darkreader-inline-color: inherit;" data-darkreader-inline-color=""></span><span class="MathJax" id="MathJax-Element-1-Frame" tabindex="0" style="position: relative;" data-mathml="<math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;><mi>a</mi></math>" role="presentation"><nobr aria-hidden="true"><span class="math" id="MathJax-Span-1" style="width: 0.663em; display: inline-block;"><span style="display: inline-block; position: relative; width: 0.54em; height: 0px; font-size: 119%;"><span style="position: absolute; clip: rect(1.6em, 1000.52em, 2.411em, -1000em); top: -2.221em; left: 0em;"><span class="mrow" id="MathJax-Span-2"><span class="mi" id="MathJax-Span-3" style="font-family: MathJax_Math; font-style: italic;">a</span></span><span style="display: inline-block; width: 0px; height: 2.221em;"></span></span></span><span style="display: inline-block; overflow: hidden; vertical-align: -0.083em; border-left: 0px solid; width: 0px; height: 0.68em; --darkreader-inline-border-left: currentcolor;" data-darkreader-inline-border-left=""></span></span></nobr><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>a</mi></math></span></span><script type="math/tex" id="MathJax-Element-1">a</script>. You should repeat the following operation <span class="MathJax_Preview" style="color: inherit; --darkreader-inline-color: inherit;" data-darkreader-inline-color=""></span><span class="MathJax" id="MathJax-Element-2-Frame" tabindex="0" style="position: relative;" data-mathml="<math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;><mi>k</mi></math>" role="presentation"><nobr aria-hidden="true"><span class="math" id="MathJax-Span-4" style="width: 0.663em; display: inline-block;"><span style="display: inline-block; position: relative; width: 0.54em; height: 0px; font-size: 119%;"><span style="position: absolute; clip: rect(1.347em, 1000.52em, 2.412em, -1000em); top: -2.221em; left: 0em;"><span class="mrow" id="MathJax-Span-5"><span class="mi" id="MathJax-Span-6" style="font-family: MathJax_Math; font-style: italic;">k</span></span><span style="display: inline-block; width: 0px; height: 2.221em;"></span></span></span><span style="display: inline-block; overflow: hidden; vertical-align: -0.085em; border-left: 0px solid; width: 0px; height: 0.982em; --darkreader-inline-border-left: currentcolor;" data-darkreader-inline-border-left=""></span></span></nobr><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>k</mi></math></span></span><script type="math/tex" id="MathJax-Element-2">k</script> times: find the minimum non-zero element in the array, print it, and then subtract it from all the non-zero elements of the array. If all the elements are 0s, just print 0.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains integers <span class="MathJax_Preview" style="color: inherit; --darkreader-inline-color: inherit;" data-darkreader-inline-color=""></span><span class="MathJax" id="MathJax-Element-3-Frame" tabindex="0" style="position: relative;" data-mathml="<math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;><mi>n</mi></math>" role="presentation"><nobr aria-hidden="true"><span class="math" id="MathJax-Span-7" style="width: 0.723em; display: inline-block;"><span style="display: inline-block; position: relative; width: 0.6em; height: 0px; font-size: 119%;"><span style="position: absolute; clip: rect(1.599em, 1000.58em, 2.412em, -1000em); top: -2.221em; left: 0em;"><span class="mrow" id="MathJax-Span-8"><span class="mi" id="MathJax-Span-9" style="font-family: MathJax_Math; font-style: italic;">n</span></span><span style="display: inline-block; width: 0px; height: 2.221em;"></span></span></span><span style="display: inline-block; overflow: hidden; vertical-align: -0.085em; border-left: 0px solid; width: 0px; height: 0.682em; --darkreader-inline-border-left: currentcolor;" data-darkreader-inline-border-left=""></span></span></nobr><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math></span></span><script type="math/tex" id="MathJax-Element-3">n</script> and <span class="MathJax_Preview" style="color: inherit; --darkreader-inline-color: inherit;" data-darkreader-inline-color=""></span><span class="MathJax" id="MathJax-Element-4-Frame" tabindex="0" style="position: relative;" data-mathml="<math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;><mi>k</mi></math>" role="presentation"><nobr aria-hidden="true"><span class="math" id="MathJax-Span-10" style="width: 0.663em; display: inline-block;"><span style="display: inline-block; position: relative; width: 0.54em; height: 0px; font-size: 119%;"><span style="position: absolute; clip: rect(1.347em, 1000.52em, 2.412em, -1000em); top: -2.221em; left: 0em;"><span class="mrow" id="MathJax-Span-11"><span class="mi" id="MathJax-Span-12" style="font-family: MathJax_Math; font-style: italic;">k</span></span><span style="display: inline-block; width: 0px; height: 2.221em;"></span></span></span><span style="display: inline-block; overflow: hidden; vertical-align: -0.085em; border-left: 0px solid; width: 0px; height: 0.982em; --darkreader-inline-border-left: currentcolor;" data-darkreader-inline-border-left=""></span></span></nobr><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>k</mi></math></span></span><script type="math/tex" id="MathJax-Element-4">k</script> <span class="MathJax_Preview" style="color: inherit; --darkreader-inline-color: inherit;" data-darkreader-inline-color=""></span><span class="MathJax" id="MathJax-Element-5-Frame" tabindex="0" style="position: relative;" data-mathml="<math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;><mo stretchy=&quot;false&quot;>(</mo><mn>1</mn><mo>&amp;#x2264;</mo><mi>n</mi><mo>,</mo><mi>k</mi><mo>&amp;#x2264;</mo><msup><mn>10</mn><mn>5</mn></msup><mo stretchy=&quot;false&quot;>)</mo></math>" role="presentation"><nobr aria-hidden="true"><span class="math" id="MathJax-Span-13" style="width: 8.286em; display: inline-block;"><span style="display: inline-block; position: relative; width: 6.963em; height: 0px; font-size: 119%;"><span style="position: absolute; clip: rect(1.237em, 1006.87em, 2.711em, -1000em); top: -2.281em; left: 0em;"><span class="mrow" id="MathJax-Span-14"><span class="mo" id="MathJax-Span-15" style="font-family: MathJax_Main;">(</span><span class="mn" id="MathJax-Span-16" style="font-family: MathJax_Main;">1</span><span class="mo" id="MathJax-Span-17" style="font-family: MathJax_Main; padding-left: 0.278em;">≤</span><span class="mi" id="MathJax-Span-18" style="font-family: MathJax_Math; font-style: italic; padding-left: 0.278em;">n</span><span class="mo" id="MathJax-Span-19" style="font-family: MathJax_Main;">,</span><span class="mi" id="MathJax-Span-20" style="font-family: MathJax_Math; font-style: italic; padding-left: 0.167em;">k</span><span class="mo" id="MathJax-Span-21" style="font-family: MathJax_Main; padding-left: 0.278em;">≤</span><span class="msubsup" id="MathJax-Span-22" style="padding-left: 0.278em;"><span style="display: inline-block; position: relative; width: 1.429em; height: 0px;"><span style="position: absolute; clip: rect(3.176em, 1000.96em, 4.224em, -1000em); top: -4.022em; left: 0em;"><span class="mn" id="MathJax-Span-23" style="font-family: MathJax_Main;">10</span><span style="display: inline-block; width: 0px; height: 4.022em;"></span></span><span style="position: absolute; top: -4.415em; left: 1em;"><span class="mn" id="MathJax-Span-24" style="font-size: 70.7%; font-family: MathJax_Main;">5</span><span style="display: inline-block; width: 0px; height: 4.022em;"></span></span></span></span><span class="mo" id="MathJax-Span-25" style="font-family: MathJax_Main;">)</span></span><span style="display: inline-block; width: 0px; height: 2.281em;"></span></span></span><span style="display: inline-block; overflow: hidden; vertical-align: -0.369em; border-left: 0px solid; width: 0px; height: 1.468em; --darkreader-inline-border-left: currentcolor;" data-darkreader-inline-border-left=""></span></span></nobr><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mo stretchy="false">(</mo><mn>1</mn><mo>≤</mo><mi>n</mi><mo>,</mo><mi>k</mi><mo>≤</mo><msup><mn>10</mn><mn>5</mn></msup><mo stretchy="false">)</mo></math></span></span><script type="math/tex" id="MathJax-Element-5">(1 \le n,k \le 10^5)</script>, the length of the array and the number of operations you should perform.</p><p>The second line contains <span class="MathJax_Preview" style="color: inherit; --darkreader-inline-color: inherit;" data-darkreader-inline-color=""></span><span class="MathJax" id="MathJax-Element-6-Frame" tabindex="0" style="position: relative;" data-mathml="<math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;><mi>n</mi></math>" role="presentation"><nobr aria-hidden="true"><span class="math" id="MathJax-Span-26" style="width: 0.723em; display: inline-block;"><span style="display: inline-block; position: relative; width: 0.6em; height: 0px; font-size: 119%;"><span style="position: absolute; clip: rect(1.599em, 1000.58em, 2.412em, -1000em); top: -2.221em; left: 0em;"><span class="mrow" id="MathJax-Span-27"><span class="mi" id="MathJax-Span-28" style="font-family: MathJax_Math; font-style: italic;">n</span></span><span style="display: inline-block; width: 0px; height: 2.221em;"></span></span></span><span style="display: inline-block; overflow: hidden; vertical-align: -0.085em; border-left: 0px solid; width: 0px; height: 0.682em; --darkreader-inline-border-left: currentcolor;" data-darkreader-inline-border-left=""></span></span></nobr><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math></span></span><script type="math/tex" id="MathJax-Element-6">n</script> space-separated integers <span class="MathJax_Preview" style="color: inherit; --darkreader-inline-color: inherit;" data-darkreader-inline-color=""></span><span class="MathJax" id="MathJax-Element-7-Frame" tabindex="0" style="position: relative;" data-mathml="<math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;><msub><mi>a</mi><mn>1</mn></msub><mo>,</mo><msub><mi>a</mi><mn>2</mn></msub><mo>,</mo><mo>&amp;#x2026;</mo><mo>,</mo><msub><mi>a</mi><mi>n</mi></msub></math>" role="presentation"><nobr aria-hidden="true"><span class="math" id="MathJax-Span-29" style="width: 6.726em; display: inline-block;"><span style="display: inline-block; position: relative; width: 5.642em; height: 0px; font-size: 119%;"><span style="position: absolute; clip: rect(1.66em, 1005.64em, 2.655em, -1000em); top: -2.281em; left: 0em;"><span class="mrow" id="MathJax-Span-30"><span class="msubsup" id="MathJax-Span-31"><span style="display: inline-block; position: relative; width: 0.958em; height: 0px;"><span style="position: absolute; clip: rect(3.401em, 1000.51em, 4.212em, -1000em); top: -4.022em; left: 0em;"><span class="mi" id="MathJax-Span-32" style="font-family: MathJax_Math; font-style: italic;">a</span><span style="display: inline-block; width: 0px; height: 4.022em;"></span></span><span style="position: absolute; top: -3.872em; left: 0.529em;"><span class="mn" id="MathJax-Span-33" style="font-size: 70.7%; font-family: MathJax_Main;">1</span><span style="display: inline-block; width: 0px; height: 4.022em;"></span></span></span></span><span class="mo" id="MathJax-Span-34" style="font-family: MathJax_Main;">,</span><span class="msubsup" id="MathJax-Span-35" style="padding-left: 0.167em;"><span style="display: inline-block; position: relative; width: 0.958em; height: 0px;"><span style="position: absolute; clip: rect(3.401em, 1000.51em, 4.212em, -1000em); top: -4.022em; left: 0em;"><span class="mi" id="MathJax-Span-36" style="font-family: MathJax_Math; font-style: italic;">a</span><span style="display: inline-block; width: 0px; height: 4.022em;"></span></span><span style="position: absolute; top: -3.872em; left: 0.529em;"><span class="mn" id="MathJax-Span-37" style="font-size: 70.7%; font-family: MathJax_Main;">2</span><span style="display: inline-block; width: 0px; height: 4.022em;"></span></span></span></span><span class="mo" id="MathJax-Span-38" style="font-family: MathJax_Main;">,</span><span class="mo" id="MathJax-Span-39" style="font-family: MathJax_Main; padding-left: 0.167em;">…</span><span class="mo" id="MathJax-Span-40" style="font-family: MathJax_Main; padding-left: 0.167em;">,</span><span class="msubsup" id="MathJax-Span-41" style="padding-left: 0.167em;"><span style="display: inline-block; position: relative; width: 1.028em; height: 0px;"><span style="position: absolute; clip: rect(3.401em, 1000.51em, 4.212em, -1000em); top: -4.022em; left: 0em;"><span class="mi" id="MathJax-Span-42" style="font-family: MathJax_Math; font-style: italic;">a</span><span style="display: inline-block; width: 0px; height: 4.022em;"></span></span><span style="position: absolute; top: -3.872em; left: 0.529em;"><span class="mi" id="MathJax-Span-43" style="font-size: 70.7%; font-family: MathJax_Math; font-style: italic;">n</span><span style="display: inline-block; width: 0px; height: 4.022em;"></span></span></span></span></span><span style="display: inline-block; width: 0px; height: 2.281em;"></span></span></span><span style="display: inline-block; overflow: hidden; vertical-align: -0.302em; border-left: 0px solid; width: 0px; height: 0.899em; --darkreader-inline-border-left: currentcolor;" data-darkreader-inline-border-left=""></span></span></nobr><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><msub><mi>a</mi><mn>1</mn></msub><mo>,</mo><msub><mi>a</mi><mn>2</mn></msub><mo>,</mo><mo>…</mo><mo>,</mo><msub><mi>a</mi><mi>n</mi></msub></math></span></span><script type="math/tex" id="MathJax-Element-7">a_1, a_2, \ldots, a_n</script> <span class="MathJax_Preview" style="color: inherit; --darkreader-inline-color: inherit;" data-darkreader-inline-color=""></span><span class="MathJax" id="MathJax-Element-8-Frame" tabindex="0" style="position: relative;" data-mathml="<math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;><mo stretchy=&quot;false&quot;>(</mo><mn>1</mn><mo>&amp;#x2264;</mo><msub><mi>a</mi><mi>i</mi></msub><mo>&amp;#x2264;</mo><msup><mn>10</mn><mn>9</mn></msup><mo stretchy=&quot;false&quot;>)</mo></math>" role="presentation"><nobr aria-hidden="true"><span class="math" id="MathJax-Span-44" style="width: 7.446em; display: inline-block;"><span style="display: inline-block; position: relative; width: 6.242em; height: 0px; font-size: 119%;"><span style="position: absolute; clip: rect(1.237em, 1006.15em, 2.711em, -1000em); top: -2.281em; left: 0em;"><span class="mrow" id="MathJax-Span-45"><span class="mo" id="MathJax-Span-46" style="font-family: MathJax_Main;">(</span><span class="mn" id="MathJax-Span-47" style="font-family: MathJax_Main;">1</span><span class="mo" id="MathJax-Span-48" style="font-family: MathJax_Main; padding-left: 0.278em;">≤</span><span class="msubsup" id="MathJax-Span-49" style="padding-left: 0.278em;"><span style="display: inline-block; position: relative; width: 0.848em; height: 0px;"><span style="position: absolute; clip: rect(3.401em, 1000.51em, 4.212em, -1000em); top: -4.022em; left: 0em;"><span class="mi" id="MathJax-Span-50" style="font-family: MathJax_Math; font-style: italic;">a</span><span style="display: inline-block; width: 0px; height: 4.022em;"></span></span><span style="position: absolute; top: -3.872em; left: 0.529em;"><span class="mi" id="MathJax-Span-51" style="font-size: 70.7%; font-family: MathJax_Math; font-style: italic;">i</span><span style="display: inline-block; width: 0px; height: 4.022em;"></span></span></span></span><span class="mo" id="MathJax-Span-52" style="font-family: MathJax_Main; padding-left: 0.278em;">≤</span><span class="msubsup" id="MathJax-Span-53" style="padding-left: 0.278em;"><span style="display: inline-block; position: relative; width: 1.429em; height: 0px;"><span style="position: absolute; clip: rect(3.176em, 1000.96em, 4.224em, -1000em); top: -4.022em; left: 0em;"><span class="mn" id="MathJax-Span-54" style="font-family: MathJax_Main;">10</span><span style="display: inline-block; width: 0px; height: 4.022em;"></span></span><span style="position: absolute; top: -4.415em; left: 1em;"><span class="mn" id="MathJax-Span-55" style="font-size: 70.7%; font-family: MathJax_Main;">9</span><span style="display: inline-block; width: 0px; height: 4.022em;"></span></span></span></span><span class="mo" id="MathJax-Span-56" style="font-family: MathJax_Main;">)</span></span><span style="display: inline-block; width: 0px; height: 2.281em;"></span></span></span><span style="display: inline-block; overflow: hidden; vertical-align: -0.369em; border-left: 0px solid; width: 0px; height: 1.468em; --darkreader-inline-border-left: currentcolor;" data-darkreader-inline-border-left=""></span></span></nobr><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mo stretchy="false">(</mo><mn>1</mn><mo>≤</mo><msub><mi>a</mi><mi>i</mi></msub><mo>≤</mo><msup><mn>10</mn><mn>9</mn></msup><mo stretchy="false">)</mo></math></span></span><script type="math/tex" id="MathJax-Element-8">(1 \le a_i \le 10^9)</script>, the elements of the array.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print the minimum non-zero element before each operation in a new line.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0016212001370943074" id="id0004871599866128973" class="input-output-copier">Copy</div></div><pre id="id0016212001370943074">3 5<br>1 2 3<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006258905467826268" id="id009125794784088004" class="input-output-copier">Copy</div></div><pre id="id006258905467826268">1<br>1<br>1<br>0<br>0<br></pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00018635354350473032" id="id005657322104851741" class="input-output-copier">Copy</div></div><pre id="id00018635354350473032">4 2<br>10 3 5 3<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007387738093925651" id="id009248184576866095" class="input-output-copier">Copy</div></div><pre id="id007387738093925651">3<br>2<br></pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first sample:</p><p>In the first step: the array is <span class="MathJax_Preview" style="color: inherit; --darkreader-inline-color: inherit;" data-darkreader-inline-color=""></span><span class="MathJax" id="MathJax-Element-9-Frame" tabindex="0" style="position: relative;" data-mathml="<math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;><mo stretchy=&quot;false&quot;>[</mo><mn>1</mn><mo>,</mo><mn>2</mn><mo>,</mo><mn>3</mn><mo stretchy=&quot;false&quot;>]</mo></math>" role="presentation"><nobr aria-hidden="true"><span class="math" id="MathJax-Span-57" style="width: 3.544em; display: inline-block;"><span style="display: inline-block; position: relative; width: 2.941em; height: 0px; font-size: 119%;"><span style="position: absolute; clip: rect(1.351em, 1002.82em, 2.711em, -1000em); top: -2.281em; left: 0em;"><span class="mrow" id="MathJax-Span-58"><span class="mo" id="MathJax-Span-59" style="font-family: MathJax_Main;">[</span><span class="mn" id="MathJax-Span-60" style="font-family: MathJax_Main;">1</span><span class="mo" id="MathJax-Span-61" style="font-family: MathJax_Main;">,</span><span class="mn" id="MathJax-Span-62" style="font-family: MathJax_Main; padding-left: 0.167em;">2</span><span class="mo" id="MathJax-Span-63" style="font-family: MathJax_Main;">,</span><span class="mn" id="MathJax-Span-64" style="font-family: MathJax_Main; padding-left: 0.167em;">3</span><span class="mo" id="MathJax-Span-65" style="font-family: MathJax_Main;">]</span></span><span style="display: inline-block; width: 0px; height: 2.281em;"></span></span></span><span style="display: inline-block; overflow: hidden; vertical-align: -0.369em; border-left: 0px solid; width: 0px; height: 1.333em; --darkreader-inline-border-left: currentcolor;" data-darkreader-inline-border-left=""></span></span></nobr><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mo stretchy="false">[</mo><mn>1</mn><mo>,</mo><mn>2</mn><mo>,</mo><mn>3</mn><mo stretchy="false">]</mo></math></span></span><script type="math/tex" id="MathJax-Element-9">[1,2,3]</script>, so the minimum non-zero element is 1.</p><p>In the second step: the array is <span class="MathJax_Preview" style="color: inherit; --darkreader-inline-color: inherit;" data-darkreader-inline-color=""></span><span class="MathJax" id="MathJax-Element-10-Frame" tabindex="0" style="position: relative;" data-mathml="<math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;><mo stretchy=&quot;false&quot;>[</mo><mn>0</mn><mo>,</mo><mn>1</mn><mo>,</mo><mn>2</mn><mo stretchy=&quot;false&quot;>]</mo></math>" role="presentation"><nobr aria-hidden="true"><span class="math" id="MathJax-Span-66" style="width: 3.544em; display: inline-block;"><span style="display: inline-block; position: relative; width: 2.941em; height: 0px; font-size: 119%;"><span style="position: absolute; clip: rect(1.351em, 1002.82em, 2.711em, -1000em); top: -2.281em; left: 0em;"><span class="mrow" id="MathJax-Span-67"><span class="mo" id="MathJax-Span-68" style="font-family: MathJax_Main;">[</span><span class="mn" id="MathJax-Span-69" style="font-family: MathJax_Main;">0</span><span class="mo" id="MathJax-Span-70" style="font-family: MathJax_Main;">,</span><span class="mn" id="MathJax-Span-71" style="font-family: MathJax_Main; padding-left: 0.167em;">1</span><span class="mo" id="MathJax-Span-72" style="font-family: MathJax_Main;">,</span><span class="mn" id="MathJax-Span-73" style="font-family: MathJax_Main; padding-left: 0.167em;">2</span><span class="mo" id="MathJax-Span-74" style="font-family: MathJax_Main;">]</span></span><span style="display: inline-block; width: 0px; height: 2.281em;"></span></span></span><span style="display: inline-block; overflow: hidden; vertical-align: -0.369em; border-left: 0px solid; width: 0px; height: 1.333em; --darkreader-inline-border-left: currentcolor;" data-darkreader-inline-border-left=""></span></span></nobr><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mo stretchy="false">[</mo><mn>0</mn><mo>,</mo><mn>1</mn><mo>,</mo><mn>2</mn><mo stretchy="false">]</mo></math></span></span><script type="math/tex" id="MathJax-Element-10">[0,1,2]</script>, so the minimum non-zero element is 1.</p><p>In the third step: the array is <span class="MathJax_Preview" style="color: inherit; --darkreader-inline-color: inherit;" data-darkreader-inline-color=""></span><span class="MathJax" id="MathJax-Element-11-Frame" tabindex="0" style="position: relative;" data-mathml="<math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;><mo stretchy=&quot;false&quot;>[</mo><mn>0</mn><mo>,</mo><mn>0</mn><mo>,</mo><mn>1</mn><mo stretchy=&quot;false&quot;>]</mo></math>" role="presentation"><nobr aria-hidden="true"><span class="math" id="MathJax-Span-75" style="width: 3.544em; display: inline-block;"><span style="display: inline-block; position: relative; width: 2.941em; height: 0px; font-size: 119%;"><span style="position: absolute; clip: rect(1.351em, 1002.82em, 2.711em, -1000em); top: -2.281em; left: 0em;"><span class="mrow" id="MathJax-Span-76"><span class="mo" id="MathJax-Span-77" style="font-family: MathJax_Main;">[</span><span class="mn" id="MathJax-Span-78" style="font-family: MathJax_Main;">0</span><span class="mo" id="MathJax-Span-79" style="font-family: MathJax_Main;">,</span><span class="mn" id="MathJax-Span-80" style="font-family: MathJax_Main; padding-left: 0.167em;">0</span><span class="mo" id="MathJax-Span-81" style="font-family: MathJax_Main;">,</span><span class="mn" id="MathJax-Span-82" style="font-family: MathJax_Main; padding-left: 0.167em;">1</span><span class="mo" id="MathJax-Span-83" style="font-family: MathJax_Main;">]</span></span><span style="display: inline-block; width: 0px; height: 2.281em;"></span></span></span><span style="display: inline-block; overflow: hidden; vertical-align: -0.369em; border-left: 0px solid; width: 0px; height: 1.333em; --darkreader-inline-border-left: currentcolor;" data-darkreader-inline-border-left=""></span></span></nobr><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mo stretchy="false">[</mo><mn>0</mn><mo>,</mo><mn>0</mn><mo>,</mo><mn>1</mn><mo stretchy="false">]</mo></math></span></span><script type="math/tex" id="MathJax-Element-11">[0,0,1]</script>, so the minimum non-zero element is 1.</p><p>In the fourth and fifth step: the array is <span class="MathJax_Preview" style="color: inherit; --darkreader-inline-color: inherit;" data-darkreader-inline-color=""></span><span class="MathJax" id="MathJax-Element-12-Frame" tabindex="0" style="position: relative;" data-mathml="<math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;><mo stretchy=&quot;false&quot;>[</mo><mn>0</mn><mo>,</mo><mn>0</mn><mo>,</mo><mn>0</mn><mo stretchy=&quot;false&quot;>]</mo></math>" role="presentation"><nobr aria-hidden="true"><span class="math" id="MathJax-Span-84" style="width: 3.544em; display: inline-block;"><span style="display: inline-block; position: relative; width: 2.941em; height: 0px; font-size: 119%;"><span style="position: absolute; clip: rect(1.351em, 1002.82em, 2.711em, -1000em); top: -2.281em; left: 0em;"><span class="mrow" id="MathJax-Span-85"><span class="mo" id="MathJax-Span-86" style="font-family: MathJax_Main;">[</span><span class="mn" id="MathJax-Span-87" style="font-family: MathJax_Main;">0</span><span class="mo" id="MathJax-Span-88" style="font-family: MathJax_Main;">,</span><span class="mn" id="MathJax-Span-89" style="font-family: MathJax_Main; padding-left: 0.167em;">0</span><span class="mo" id="MathJax-Span-90" style="font-family: MathJax_Main;">,</span><span class="mn" id="MathJax-Span-91" style="font-family: MathJax_Main; padding-left: 0.167em;">0</span><span class="mo" id="MathJax-Span-92" style="font-family: MathJax_Main;">]</span></span><span style="display: inline-block; width: 0px; height: 2.281em;"></span></span></span><span style="display: inline-block; overflow: hidden; vertical-align: -0.369em; border-left: 0px solid; width: 0px; height: 1.333em; --darkreader-inline-border-left: currentcolor;" data-darkreader-inline-border-left=""></span></span></nobr><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mo stretchy="false">[</mo><mn>0</mn><mo>,</mo><mn>0</mn><mo>,</mo><mn>0</mn><mo stretchy="false">]</mo></math></span></span><script type="math/tex" id="MathJax-Element-12">[0,0,0]</script>, so we printed 0.</p><p>In the second sample:</p><p>In the first step: the array is <span class="MathJax_Preview" style="color: inherit; --darkreader-inline-color: inherit;" data-darkreader-inline-color=""></span><span class="MathJax" id="MathJax-Element-13-Frame" tabindex="0" style="position: relative;" data-mathml="<math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;><mo stretchy=&quot;false&quot;>[</mo><mn>10</mn><mo>,</mo><mn>3</mn><mo>,</mo><mn>5</mn><mo>,</mo><mn>3</mn><mo stretchy=&quot;false&quot;>]</mo></math>" role="presentation"><nobr aria-hidden="true"><span class="math" id="MathJax-Span-93" style="width: 5.225em; display: inline-block;"><span style="display: inline-block; position: relative; width: 4.382em; height: 0px; font-size: 119%;"><span style="position: absolute; clip: rect(1.351em, 1004.26em, 2.711em, -1000em); top: -2.281em; left: 0em;"><span class="mrow" id="MathJax-Span-94"><span class="mo" id="MathJax-Span-95" style="font-family: MathJax_Main;">[</span><span class="mn" id="MathJax-Span-96" style="font-family: MathJax_Main;">10</span><span class="mo" id="MathJax-Span-97" style="font-family: MathJax_Main;">,</span><span class="mn" id="MathJax-Span-98" style="font-family: MathJax_Main; padding-left: 0.167em;">3</span><span class="mo" id="MathJax-Span-99" style="font-family: MathJax_Main;">,</span><span class="mn" id="MathJax-Span-100" style="font-family: MathJax_Main; padding-left: 0.167em;">5</span><span class="mo" id="MathJax-Span-101" style="font-family: MathJax_Main;">,</span><span class="mn" id="MathJax-Span-102" style="font-family: MathJax_Main; padding-left: 0.167em;">3</span><span class="mo" id="MathJax-Span-103" style="font-family: MathJax_Main;">]</span></span><span style="display: inline-block; width: 0px; height: 2.281em;"></span></span></span><span style="display: inline-block; overflow: hidden; vertical-align: -0.369em; border-left: 0px solid; width: 0px; height: 1.333em; --darkreader-inline-border-left: currentcolor;" data-darkreader-inline-border-left=""></span></span></nobr><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mo stretchy="false">[</mo><mn>10</mn><mo>,</mo><mn>3</mn><mo>,</mo><mn>5</mn><mo>,</mo><mn>3</mn><mo stretchy="false">]</mo></math></span></span><script type="math/tex" id="MathJax-Element-13">[10,3,5,3]</script>, so the minimum non-zero element is 3.</p><p>In the second step: the array is <span class="MathJax_Preview" style="color: inherit; --darkreader-inline-color: inherit;" data-darkreader-inline-color=""></span><span class="MathJax" id="MathJax-Element-14-Frame" tabindex="0" style="position: relative;" data-mathml="<math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;><mo stretchy=&quot;false&quot;>[</mo><mn>7</mn><mo>,</mo><mn>0</mn><mo>,</mo><mn>2</mn><mo>,</mo><mn>0</mn><mo stretchy=&quot;false&quot;>]</mo></math>" role="presentation"><nobr aria-hidden="true"><span class="math" id="MathJax-Span-104" style="width: 4.685em; display: inline-block;"><span style="display: inline-block; position: relative; width: 3.902em; height: 0px; font-size: 119%;"><span style="position: absolute; clip: rect(1.351em, 1003.78em, 2.711em, -1000em); top: -2.281em; left: 0em;"><span class="mrow" id="MathJax-Span-105"><span class="mo" id="MathJax-Span-106" style="font-family: MathJax_Main;">[</span><span class="mn" id="MathJax-Span-107" style="font-family: MathJax_Main;">7</span><span class="mo" id="MathJax-Span-108" style="font-family: MathJax_Main;">,</span><span class="mn" id="MathJax-Span-109" style="font-family: MathJax_Main; padding-left: 0.167em;">0</span><span class="mo" id="MathJax-Span-110" style="font-family: MathJax_Main;">,</span><span class="mn" id="MathJax-Span-111" style="font-family: MathJax_Main; padding-left: 0.167em;">2</span><span class="mo" id="MathJax-Span-112" style="font-family: MathJax_Main;">,</span><span class="mn" id="MathJax-Span-113" style="font-family: MathJax_Main; padding-left: 0.167em;">0</span><span class="mo" id="MathJax-Span-114" style="font-family: MathJax_Main;">]</span></span><span style="display: inline-block; width: 0px; height: 2.281em;"></span></span></span><span style="display: inline-block; overflow: hidden; vertical-align: -0.369em; border-left: 0px solid; width: 0px; height: 1.333em; --darkreader-inline-border-left: currentcolor;" data-darkreader-inline-border-left=""></span></span></nobr><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mo stretchy="false">[</mo><mn>7</mn><mo>,</mo><mn>0</mn><mo>,</mo><mn>2</mn><mo>,</mo><mn>0</mn><mo stretchy="false">]</mo></math></span></span><script type="math/tex" id="MathJax-Element-14">[7,0,2,0]</script>, so the minimum non-zero element is 2.</p></div>