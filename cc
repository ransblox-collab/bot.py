keys: BattleLaunch, launchStep, ripTick, aimS, press, RIP_TICK, RIP_BEAT, tapReady, lockIn, LockedIn, AimPrompt
scripts scanned: 362

===== Players.RansbloxScripts.PlayerScripts.Battle.BattleFx =====
   ...
200: 		local v100 = v_u_18
201: 		local v101 = p79 * p79 + p80 * p80
202: 		local v102 = math.sqrt(v101)
203: 		local v103 = not v100 and 0 or v_u_7.height(v100, v102)
204: 		v98(v84, v99((v_u_19 * CFrame.new(p79, v103 + 0.06, p80)).Position, v97, v95), 1)
205: 	end
206: end
207: local function v_u_109() -- name: bus
208: 	-- upvalues: (copy) v_u_5
209: 	local v105 = v_u_5:FindFirstChild("Sfx")
210: 	if not (v105 and v105:IsA("SoundGroup")) then
211: 		return nil
212: 	end
213: 	local v106 = v105:FindFirstChild("Battle")
214: 	if v106 and v106:IsA("SoundGroup") then
215: 		return v106
216: 	end
217: 	local v107 = Instance.new("SoundGroup")
218: 	v107.Name = "Battle"
219: 	v107.Volume = 1
220: 	local v108 = Instance.new("CompressorSoundEffect")
221: 	v108.Threshold = -10
222: 	v108.Ratio = 3
223: 	v108.Attack = 0.004
224: 	v108.Release = 0.15
225: 	v108.Parent = v107
226: 	v107.Parent = v105
227: 	return v107
228: end
229: local v_u_110 = {}
230: local v_u_111 = 0
231: local v_u_112 = nil
232: local v_u_113 = 0
233: local function v_u_129(p114, p115, p116) -- name: play
234: 	-- upvalues: (ref) v_u_15, (copy) v_u_110, (copy) v_u_109, (copy) v_u_3
235: 	local v117 = v_u_15
236: 	if not (p114 and (p114:IsA("Sound") and v117)) then
237: 		return nil
238: 	end
239: 	local v118 = p114:GetAttribute("Gain")
240: 	local v119 = v_u_110[p114]

===== Players.RansbloxScripts.PlayerScripts.Battle.BattleHud =====
   ...
984: 	v_u_37.move = v204("", UDim2.fromOffset(900, 80), UDim2.fromScale(0.5, 0.7), 56)
985: 	v_u_37.rivalMove = v204("", UDim2.fromOffset(420, 34), UDim2.new(1, -292, 0, 222), 28)
986: 	v_u_37.beatText = v204("", UDim2.fromOffset(600, 50), UDim2.new(0.5, 0, 0.37, 226), 40)
987: 	v_u_37.beatTextPop = v_u_46("UIScale", {
988: 		["Scale"] = 1
989: 	}, v_u_37.beatText)
990: 	v_u_37.gradeText = v204("", UDim2.fromOffset(1000, 110), UDim2.fromScale(0.5, 0.37), 84)
991: 	v_u_37.gradeTextPop = v_u_46("UIScale", {
992: 		["Scale"] = 1
993: 	}, v_u_37.gradeText)
994: 	v_u_37.gradeCall = v204("", UDim2.fromOffset(900, 52), UDim2.new(0.5, 0, 0.37, 78), 40)
995: 	local v205 = v_u_19.pill(v_u_142, "BankTag", "BANK SHOT", Color3.fromRGB(70, 170, 255), UDim2.new(0.5, -90, 0.37, 254), Vector2.new(180, 40), 35)
996: 	v205.Visible = false
997: 	v_u_37.bankTag = v205
998: 	v_u_37.bankPop = v_u_46("UIScale", {
999: 		["Scale"] = 1
1000: 	}, v205)
1001: 	local v206 = v_u_2.PreferredInput
1002: 	local v207 = v206 == Enum.PreferredInput.Touch
1003: 	local v208 = v_u_46("Frame", {
1004: 		["Name"] = "AimPrompt",
1005: 		["AnchorPoint"] = nil,
1006: 		["BackgroundTransparency"] = 1,
1007: 		["Position"] = nil,
1008: 		["Size"] = nil,
1009: 		["Visible"] = false,
1010: 		["ZIndex"] = 24,
1011: 		["AnchorPoint"] = Vector2.new(0.5, 0.5),
1012: 		["Position"] = UDim2.new(0.5, 0, 1, -150),
1013: 		["Size"] = UDim2.fromOffset(300, 78)
1014: 	}, v_u_142)
1015: 	v_u_37.aimBox = v208
1016: 	v_u_37.aimPop = v_u_46("UIScale", {
1017: 		["Scale"] = 1
1018: 	}, v208)
1019: 	v_u_19.panel(v208, "Glass", UDim2.fromOffset(0, 0), Vector2.new(300, 78), v_u_19.MINE, 22, 24)
1020: 	local v209
1021: 	if v207 then
1022: 		v209 = 24
1023: 	else
1024: 		local v210 = v_u_19.keycap
   ...
2197: end
2198: function v_u_23.clash(p410) -- name: clash
2199: 	-- upvalues: (ref) v_u_36, (ref) v_u_37, (copy) v_u_409, (copy) v_u_373, (ref) v_u_222, (copy) v_u_293, (copy) v_u_18, (copy) v_u_19, (copy) v_u_2, (copy) v_u_6, (copy) v_u_15, (ref) v_u_38, (copy) v_u_14, (copy) v_u_405, (copy) v_u_298, (copy) v_u_297
2200: 	if v_u_36 then
2201: 		local v411 = v_u_37.clash
2202: 		if p410 == nil then
2203: 			if v411 then
2204: 				v411.Visible = false
2205: 				v_u_409()
2206: 			end
2207: 			v_u_37.clashPhase = 0
2208: 			v_u_37.clashPressing = false
2209: 		else
2210: 			local v412 = v411 or v_u_373(v_u_37.view)
2211: 			local v413 = os.clock()
2212: 			local v414 = v413 - (v_u_37.clashAt or v413)
2213: 			local v415 = math.min(v414, 0.1)
2214: 			v_u_37.clashAt = v413
2215: 			v_u_37.clashPhase = p410.phase
2216: 			local v416 = v_u_37
2217: 			local v417 = p410.pressing
2218: 			if v417 then
2219: 				v417 = not v_u_222
2220: 			end
2221: 			v416.clashPressing = v417
2222: 			if not v412.Visible then
2223: 				v412.Visible = true
2224: 				v_u_409()
2225: 				v_u_293.x = 0.5
2226: 				local v418 = v_u_37
2227: 				local v419 = v_u_37
2228: 				local v420 = v_u_37
2229: 				v_u_37.clashMineShown = 0
2230: 				v418.clashTheirsShown = 0
2231: 				v419.clashCalled = nil
2232: 				v420.clashComboShown = 0
2233: 				local v421 = v_u_37.clashMine
2234: 				local v422 = v_u_37.clashTheirs
2235: 				local v423 = v_u_37.clashCombo
2236: 				v421.Text = ""
2237: 				v422.Text = ""
   ...
2256: 			if p410.left then
2257: 				local v433 = UDim2.fromOffset
2258: 				local v434 = 760 * p410.left
2259: 				local v435 = math.floor(v434)
2260: 				v432.Size = v433(math.max(v435, 10), 10)
2261: 				local v436 = p410.left < 0.3
2262: 				if v_u_37.clashClockLow ~= v436 then
2263: 					v_u_37.clashClockLow = v436
2264: 					local v437 = v_u_37.clashClockPaint
2265: 					local v438
2266: 					if v436 then
2267: 						v438 = ColorSequence.new(Color3.fromRGB(255, 150, 110), v_u_19.LOW)
2268: 					else
2269: 						v438 = ColorSequence.new(v_u_19.GOLD[1], v_u_19.GOLD[2])
2270: 					end
2271: 					v437.Color = v438
2272: 				end
2273: 			end
2274: 			if p410.phase >= 2 then
2275: 				local v439 = v_u_37.clashMine
2276: 				local v440 = p410.pressing and "YOU:" or (p410.ally and "ALLY:" or "")
2277: 				local v441 = p410.mine + 0.5
2278: 				local v442 = math.floor(v441)
2279: 				local v443 = v_u_37.clashMinePop
2280: 				local v444
2281: 				if v440 == "" then
2282: 					v444 = tostring(v442)
2283: 				else
2284: 					v444 = ("%* %*"):format(v440, v442)
2285: 				end
2286: 				if v439.Text ~= v444 then
2287: 					v439.Text = v444
2288: 					if (v_u_37.clashMineShown or 0) < v442 then
2289: 						v_u_18.punch(v443, 1.22, 0.1)
2290: 					end
2291: 					v_u_37.clashMineShown = v442
2292: 				end
2293: 				local v445 = v_u_37.clashTheirs
2294: 				local v446 = p410.theirs + 0.5
2295: 				local v447 = math.floor(v446)
2296: 				local v448 = v_u_37.clashTheirsPop
   ...
2330: 					v457 = "TIE!"
2331: 				elseif p410.x >= 1 then
2332: 					v457 = "PERFECT!"
2333: 				elseif p410.x > 0 then
2334: 					v457 = v458 and "YOU WIN!" or "WON!"
2335: 				else
2336: 					v457 = v458 and "PUSHED BACK!" or 

===== Players.RansbloxScripts.PlayerScripts.Battle.BattleInput =====
   ...
75: 		["key"] = nil,
76: 		["pad"] = nil,
77: 		["about"] = "Uses your driver\'s skill. What it does depends on the driver.",
78: 		["key"] = Enum.KeyCode.Space,
79: 		["pad"] = Enum.KeyCode.ButtonA
80: 	},
81: 	{
82: 		["id"] = "Brace",
83: 		["label"] = "Brace / Bank",
84: 		["key"] = nil,
85: 		["pad"] = nil,
86: 		["about"] = "Hold to dig in. Tap it as they hit you for a PERFECT GUARD, or as you hit them to hit harder.",
87: 		["key"] = Enum.KeyCode.F,
88: 		["pad"] = Enum.KeyCode.ButtonL1
89: 	},
90: 	{
91: 		["id"] = "Counter",
92: 		["label"] = "Counter Attack",
93: 		["key"] = nil,
94: 		["pad"] = nil,
95: 		["about"] = "Right after a PERFECT GUARD, press it to hit straight back and knock them away.",
96: 		["key"] = Enum.KeyCode.X,
97: 		["pad"] = Enum.KeyCode.ButtonR1
98: 	},
99: 	{
100: 		["id"] = "Primary",
101: 		["label"] = "Move 1",
102: 		["key"] = nil,
103: 		["pad"] = nil,
104: 		["about"] = "Your bey\'s first move.",
105: 		["key"] = Enum.KeyCode.R,
106: 		["pad"] = Enum.KeyCode.ButtonX
107: 	},
108: 	{
109: 		["id"] = "Secondary",
110: 		["label"] = "Move 2",
111: 		["key"] = nil,
112: 		["pad"] = nil,
113: 		["about"] = "Your bey\'s second move.",
114: 		["key"] = Enum.KeyCode.G,
115: 		["pad"] = Enum.KeyCode.ButtonB
   ...
120: 		["key"] = nil,
121: 		["pad"] = nil,
122: 		["about"] = "Your bey\'s strongest move. Ready when its bar is full.",
123: 		["key"] = Enum.KeyCode.V,
124: 		["pad"] = Enum.KeyCode.ButtonY
125: 	},
126: 	{
127: 		["id"] = "Awaken",
128: 		["label"] = "Awaken",
129: 		["key"] = nil,
130: 		["pad"] = nil,
131: 		["about"] = "Once a match, with a full meter: your bey gets faster and stronger for a while.",
132: 		["key"] = Enum.KeyCode.E,
133: 		["pad"] = Enum.KeyCode.DPadUp
134: 	},
135: 	{
136: 		["id"] = "Rip",
137: 		["label"] = "Rip",
138: 		["key"] = nil,
139: 		["pad"] = nil,
140: 		["about"] = "Locks in your launch, then press it on each ring to rip.",
141: 		["key"] = Enum.KeyCode.Q,
142: 		["pad"] = Enum.KeyCode.ButtonR2
143: 	},
144: 	{
145: 		["id"] = "Aim",
146: 		["label"] = "Aim (hold)",
147: 		["key"] = nil,
148: 		["pad"] = nil,
149: 		["about"] = "Hold it and point: your moves go that way instead of at the nearest rival.",
150: 		["key"] = Enum.KeyCode.LeftShift,
151: 		["pad"] = Enum.KeyCode.ButtonL2
152: 	},
153: 	{
154: 		["id"] = "Lock",
155: 		["label"] = "Lock In",
156: 		["key"] = nil,
157: 		["pad"] = nil,
158: 		["about"] = "Keeps the camera and your moves on one rival.",
159: 		["key"] = Enum.KeyCode.L,
160: 		["pad"] = Enum.KeyCode.ButtonR3
   ...
246: 	["Eight"] = "8",
247: 	["Nine"] = "9",
248: 	["Zero"] = "0",
249: 	["MouseLeftButton"] = "LMB",
250: 	["MouseRightButton"] = "RMB"
251: }
252: v_u_11.padName = v_u_10.padName
253: function v_u_11.keyName(p41) -- name: keyName
254: 	-- upvalues: (copy) v_u_40
255: 	return v_u_40[p41.Name] or string.upper(p41.Name)
256: end
257: function v_u_11.say(p42) -- name: say
258: 	-- upvalues: (copy) v_u_4, (copy) v_u_10, (copy) v_u_11
259: 	local v43 = v_u_4.PreferredInput
260: 	local v44, v45
261: 	if v43 == Enum.PreferredInput.Touch then
262: 		v44 = "the BRACE button"
263: 		v45 = "tap AWAKEN"
264: 	elseif v43 == Enum.PreferredInput.Gamepad then
265: 		v44 = v_u_10.padName(v_u_11.padFor("Brace"))
266: 		v45 = ("press %*"):format((v_u_10.padName(v_u_11.padFor("Awaken"))))
267: 	else
268: 		v44 = v_u_11.keyName(v_u_11.keyFor("Brace"))
269: 		v45 = ("press %*"):format((v_u_11.keyName(v_u_11.keyFor("Awaken"))))
270: 	end
271: 	local v46 = string.gsub(p42, "%(F%)", (("(%*)"):format(v44)))
272: 	local v47 = string.gsub(v46, "press E([%s%.,!])", v45 .. "%1")
273: 	return string.gsub(v47, "press E$", v45)
274: end
275: local v_u_48 = {}
276: local v_u_49 = nil
277: local v_u_50 = nil
278: local v_u_51 = nil
279: local function v_u_58(p52) -- name: hold
280: 	-- upvalues: (ref) v_u_50, (copy) v_u_7, (copy) v_u_48, (ref) v_u_49
281: 	local v53 = p52:FindFirstChild("HumanoidRootPart")
282: 	local v54 = v_u_50
283: 	local v55 = v54 and (v53 and v53:IsA("BasePart")) and v_u_7.standPivot(v54.frame, v54.slot, p52, v54.count)
284: 	if v55 then
285: 		v53.Anchored = false
286: 		p52:PivotTo(v55)
287: 	end
288: 	if v53 and (v53:IsA("BasePart") and not v53.Anchored) then
289: 		v53.Anchored = true
290: 		local v56 = v_u_48
291: 		table.insert(v56, v53)
292: 	end
293: 	local v57 = p52:FindFirstChildOfClass("Humanoid")
   ...
518: function v_u_11.bracing() -- name: bracing
519: 	-- upvalues: (ref) v_u_21, (ref) v_u_18, (copy) v_u_12
520: 	local v130 = v_u_21
521: 	if v130 then
522: 		local v131 = v_u_18
523: 		local v132 = v_u_12.Brace
524: 		v130 = bit32.btest(v131, v132)
525: 	end
526: 	return v130
527: end
528: function v_u_11.setAim(p133) -- name: setAim
529: 	-- upvalues: (ref) v_u_23
530: 	local v134
531: 	if p133.Magnitude > 0.001 then
532: 		v134 = p133.Unit
533: 	else
534: 		v134 = Vector2.zero
535: 	end
536: 	v_u_23 = v134
537: end
538: function v_u_11.press(p135) -- name: press
539: 	-- upvalues: (

===== Players.RansbloxScripts.PlayerScripts.Battle.BeyView =====
   ...
303: 		["dead"] = nil,
304: 		["ghostAlpha"] = 1,
305: 		["layerBase"] = v91:GetPivot():ToObjectSpace(v92[1]:GetPivot()),
306: 		["clicks"] = 0,
307: 		["tipAt"] = nil,
308: 		["springN"] = p88.springN,
309: 		["springAt"] = -10,
310: 		["springPh"] = 0,
311: 		["cutT"] = nil,
312: 		["cutRel"] = 1,
313: 		["calmK"] = 1,
314: 		["notch"] = 0,
315: 		["notchFrom"] = 0,
316: 		["ratchetT"] = 1,
317: 		["popT"] = 1,
318: 		["bank"] = 0,
319: 		["ghosted"] = false,
320: 		["acc"] = Vector3.new(0, 0, 0),
321: 		["lastV"] = nil,
322: 		["leanV"] = Vector3.new(0, 0, 0),
323: 		["press"] = nil,
324: 		["onLand"] = nil,
325: 		["flashHl"] = v111,
326: 		["flashT"] = 0,
327: 		["slamAt"] = -10,
328: 		["slamP"] = 0,
329: 		["glowK"] = 0,
330: 		["glowHit"] = 0,
331: 		["glowHold"] = 0,
332: 		["glowColor"] = v_u_6.glowColors(p88.combo.layer)
333: 	}
334: 	local v114
335: 	if v111 then
336: 		v114 = v111.OutlineColor
337: 	else
338: 		v114 = Color3.new()
339: 	end
340: 	v113.rimColor = v114
341: 	v113.rimT = not v111 and 1 or v111.OutlineTransparency
342: 	local v115 = v_u_8
343: 	return setmetatable(v113, v115)
   ...
921: 				local v387 = v385.Unit
922: 				local v388 = v386 / 100
923: 				v378 = v378 + v387 * math.min(v388, 1) * 0.45
924: 			end
925: 		end
926: 		local v389
927: 		if p292.onRidge and (not v319 and v305 > 1) then
928: 			local v390 = p292.vx * -v311 + p292.vz * v310
929: 			local v391 = v390 * v390 / v305 / (50 * p297.bowlRadius / 7.56)
930: 			v389 = math.min(v391, 0.5)
931: 		else
932: 			v389 = 0
933: 		end
934: 		local v392 = p291.bank
935: 		local v393 = v389 - p291.bank
936: 		local v394 = p295 * 8
937: 		p291.bank = v392 + v393 * math.min(v394, 1)
938: 		local v395 = -v310
939: 		local v396 = -v311
940: 		local v397 = v378 + Vector3.new(v395, 0, v396) * p291.bank
941: 		local v398 = p291.press
942: 		if v398 and not v319 then
943: 			local v399 = p291.clock * 31
944: 			v397 = v397 + v398 * (math.sin(v399) * 0.06 + 0.36)
945: 		end
946: 		local v400 = (v367 + v397 + v353).Unit
947: 		if p291.calmK >= 0.5 then
948: 			v314 = v400
949: 		end
950: 		local v401 = Vector3.new(p293, v306, p294)
951: 		local v402 = v_u_172(p291, p297, v401, v314)
952: 		local v403 = v401 + Vector3.new(0, v402, 0)
953: 		if v398 and not v319 then
954: 			local v404 = -v398.Z
955: 			local v405 = v398.X
956: 			local v406 = Vector3.new(v404, 0, v405)
957: 			local v407 = p291.clock * 97
958: 			local v408 = v398 * (math.sin(v407) * 0.05)
959: 			local v409 = p291.clock * 71 + 1.3
960: 			v403 = v403 + (v408 + v406 * (math.sin(v409) * 0.03))
961: 			local v410 = p291.clock - p291.slamAt

===== Players.RansbloxScripts.PlayerScripts.Battle.SwapScreen =====
   ...
354: 	local v_u_69 = v_u_16("Frame", {
355: 		["Size"] = nil,
356: 		["BackgroundColor3"] = nil,
357: 		["BorderSizePixel"] = 0,
358: 		["ZIndex"] = 5,
359: 		["Size"] = UDim2.fromScale(1, 1),
360: 		["BackgroundColor3"] = v_u_8.WHITE
361: 	}, v68)
362: 	v_u_8.corner(v_u_69, 9)
363: 	local v_u_70 = v_u_8.gradient(v_u_69, v_u_8.Hues.lime.top, v_u_8.Hues.lime.bottom)
364: 	local v71 = v_u_8.text
365: 	local v72 = {
366: 		["text"] = nil,
367: 		["size"] = 22,
368: 		["color"] = nil,
369: 		["stroke"] = 0,
370: 		["z"] = 4
371: 	}
372: 	local v73
373: 	if v41 then
374: 		v73 = "Click a bey or press 1-" .. v39 .. ". If you don\'t pick, the one in play stays."
375: 	else
376: 		v73 = v_u_5.PreferredInput ~= Enum.PreferredInput.Gamepad and "Tap a bey. If you don\'t pick, the one in play stays." or ("Pick a bey with %*. If you don\'t pick, the one in play stays."):format((v_u_8.padName(Enum.KeyCode.ButtonA)))
377: 	end
378: 	v72.text = v73
379: 	v72.color = v_u_8.MUTED
380: 	v_u_38.hint = v71(v34, v72, {
381: 		["AnchorPoint"] = Vector2.new(0.5, 0.5),
382: 		["Position"] = UDim2.fromOffset(v_u_11.X / 2, 630),
383: 		["Size"] = UDim2.fromOffset(900, 30)
384: 	})
385: 	local v_u_74 = os.clock()
386: 	local v_u_75 = false
387: 	local v76 = v_u_38.conns
388: 	local v77 = v_u_4.Heartbeat
389: 	local function v83()
390: 		-- upvalues: (copy) v_u_74, (copy) p_u_31, (copy) v_u_69, (ref) v_u_75, (copy) v_u_70, (ref) v_u_8, (copy) v_u_38, (ref) v_u_1, (copy) v_u_42
391: 		local v78 = os.clock() - v_u_74
392: 		local v79 = p_u_31.time
393: 		local v80 = 1 - v78 / math.max(v79, 0.1)
394: 		local v81 = math.clamp(v80, 0, 1)

===== Players.RansbloxScripts.PlayerScripts.Battle.SpringCinematic =====
   ...
203: 		for _, v95 in v93:GetDescendants() do
204: 			if not v95:IsA("ParticleEmitter") then
205: 				continue
206: 			end
207: 			v95.Enabled = false
208: 			local v96 = v95.Lifetime.Max
209: 			v94 = math.max(v94, v96)
210: 		end
211: 		v_u_4:AddItem(v93, v94 + 0.2)
212: 	end
213: 	table.clear(p92.worn)
214: end
215: local function v_u_105(p98) -- name: finishRun
216: 	-- upvalues: (ref) v_u_17, (copy) v_u_97, (copy) v_u_8, (copy) v_u_1, (copy) v_u_16, (copy) v_u_5, (copy) v_u_10, (copy) v_u_7, (copy) v_u_9, (copy) v_u_11
217: 	if v_u_17 == p98 then
218: 		v_u_17 = nil
219: 	end
220: 	v_u_97(p98)
221: 	v_u_8.undirect(p98.fn)
222: 	p98.ctx.calm(1)
223: 	p98.ctx.press(nil, 1)
224: 	p98.ctx.ghost(0)
225: 	local v99 = p98.dof
226: 	local v100 = v_u_1:FindFirstChildOfClass("DepthOfFieldEffect")
227: 	if v99 and v100 then
228: 		local v101 = v99.far
229: 		local v102 = v99.near
230: 		v100.FarIntensity = v101
231: 		v100.NearIntensity = v102
232: 	end
233: 	p98.dof = nil
234: 	local v_u_103 = p98.grade
235: 	if v_u_103 then
236: 		local v104 = {
237: 			["Saturation"] = 0,
238: 			["Contrast"] = 0,
239: 			["Brightness"] = 0,
240: 			["TintColor"] = nil,
241: 			["TintColor"] = v_u_16
242: 		}
243: 		v_u_5:Create(v_u_103, TweenInfo.new(0.3, Enum.EasingStyle.Quad, Enum.EasingDirection.Out), v104):Play()
   ...
320: 				for _, v118 in v117:GetDescendants() do
321: 					if not v118:IsA("ParticleEmitter") then
322: 						continue
323: 					end
324: 					local v119 = {}
325: 					for _, v120 in v118.Transparency.Keypoints do
326: 						local v121 = NumberSequenceKeypoint.new
327: 						local v122 = v120.Time
328: 						local v123 = 1 - (1 - v120.Value) * 0.35
329: 						local v124 = v120.Envelope
330: 						table.insert(v119, v121(v122, v123, v124))
331: 					end
332: 					v118.Transparency = NumberSequence.new(v119)
333: 					v118.Rate = v118.Rate * 0.5
334: 				end
335: 			end
336: 			v_u_7.play(v_u_7.find("Sounds/Bey/SetRatchet"), 0.45, 0.7)
337: 		end
338: 	end
339: 	if v107 >= 0.3 and v107 < 1.45 then
340: 		p106.ctx.press(v107 - 0.3, 0.6499999999999999)
341: 	elseif v107 >= 1.45 then
342: 		local v125
343: 		if p106.done.rung then
344: 			v125 = false
345: 		else
346: 			p106.done.rung = true
347: 			v125 = true
348: 		end
349: 		if v125 then
350: 			p106.ctx.press(nil, 1)
351: 		end
352: 	end
353: 	if v107 >= 0.7 then
354: 		local v126
355: 		if p106.done.creak then
356: 			v126 = false
357: 		else
358: 			p106.done.creak = true
359: 			v126 = true
360: 		end
361: 		if v126 then
362: 			v_u_7.play(v_u_7.find("Sounds/Bey/SetRatchet"), 0.5, 0.55)
363: 		end
364: 	end
365: 	if v107 >= 0.95 then
366: 		local v127
367: 		if p106.done.fire then
368: 			v127 = false
369: 		else
370: 			p106.done.fire = true

===== Players.RansbloxScripts.PlayerScripts.Controllers.BattleController =====
   ...
105: 		["ownSum"] = 0,
106: 		["ownMax"] = 0,
107: 		["lagD"] = 0,
108: 		["lagBehindN"] = 0,
109: 		["lagFrames"] = 0,
110: 		["reclaims"] = 0
111: 	}
112: }
113: local v_u_71 = nil
114: local v_u_72 = false
115: local v_u_73 = nil
116: local v_u_74 = false
117: local v_u_75 = false
118: local v_u_76 = false
119: local v_u_77 = {
120: 	["smash"] = "Your bey is glowing! Hit them head-on now for a SMASH.",
121: 	["break_dealt"] = "GUARD BREAK! Keep pushing into a bracing bey and its guard gives out.",
122: 	["break_taken"] = "Your guard broke! Holding Brace won\'t stop a long push. Dash into them instead.",
123: 	["caught"] = "CAUGHT! They rammed you while you were pushing, so it hit extra hard.",
124: 	["crush"] = "CRUSH! A stunned bey that\'s lost most of its burst locks bursts in one hit.",
125: 	["siphon"] = "SIPHON! Bracing while you\'re pressed against them pulls their spin into yours.",
126: 	["rim"] = "RIM CHARGED! Steer straight at them NOW. If your bey glows, your next head-on hit is a SMASH."
127: }
128: local v_u_78 = {}
129: local function v_u_86() -- name: veteran
130: 	-- upvalues: (copy) v_u_57, (copy) v_u_3
131: 	local v79 = v_u_57:Get({ "Rivals", "Stats" })
132: 	if v_u_3:IsStudio() or type(v79) ~= "table" then
133: 		return false
134: 	end
135: 	local v80 = v79.matches
136: 	local v81 = tonumber(v80) or 0
137: 	local v82 = v79.wins
138: 	local v83 = tonumber(v82) or 0
139: 	local v84 = v79.losses
140: 	local v85 = v83 + (tonumber(v84) or 0)
141: 	return math.max(v81, v85) >= 5
142: end
143: local v_u_87 = 0
144: local v_u_88 = 0
145: local function v_u_92() -- name: grindLine
   ...
951: 				end,
952: 				["layer"] = function() -- name: layer
953: 					-- upvalues: (copy) p_u_307, (ref) v_u_312
954: 					local v330 = p_u_307.views[v_u_312]
955: 					if v330 then
956: 						return v330.pieces[1]:GetPivot().Position
957: 					else
958: 						return nil
959: 					end
960: 				end,
961: 				["dir"] = v327.Magnitude <= 0.001 and Vector3.new(1, 0, 0) or v327.Unit,
962: 				["centre"] = p_u_307.origin.Position,
963: 				["seed"] = v311,
964: 				["calm"] = function(p331) -- name: calm
965: 					-- upvalues: (copy) p_u_307, (ref) v_u_312
966: 					local v332 = p_u_307.views[v_u_312]
967: 					if v332 then
968: 						v332:calm(p331)
969: 					end
970: 				end,
971: 				["press"] = function(p333, p334) -- name: press
972: 					-- upvalues: (copy) p_u_307, (ref) v_u_312
973: 					local v335 = p_u_307.views[v_u_312]
974: 					if v335 then
975: 						v335:springCut(p333, p334)
976: 					end
977: 				end,
978: 				["ghost"] = function(p336) -- name: ghost
979: 					-- upvalues: (copy) v_u_323, (copy) p_u_307, (ref) v_u_320
980: 					local v337
981: 					if v_u_323 then
982: 						v337 = nil
983: 					else
984: 						v337 = p_u_307.views[v_u_320]
985: 					end
986: 					if v337 then
987: 						local v338 = v337.model:GetDescendants()
988: 						for _, v339 in v337.ghosts do
989: 							for _, v340 in v339:GetDescendants() do
990: 								table.insert(v338, v340)
991: 							end
   ...
1180: 			end
1181: 		else
1182: 			v399 = nil
1183: 		end
1184: 		local v403 = v_u_31.clash
1185: 		local v404 = {
1186: 			["x"] = v370.clashX * v383,
1187: 			["mine"] = v390,
1188: 			["theirs"] = v395,
1189: 			["combo"] = not v397 and 0 or v397.clashC
1190: 		}
1191: 		local v405
1192: 		if v370.clash == 2 then
1193: 			local v406 = v370.clashT / v_u_13.clashContest(v370)
1194: 			v405 = math.clamp(v406, 0, 1)
1195: 		else
1196: 			v405 = nil
1197: 		end
1198: 		v404.left = v405
1199: 		v404.phase = v370.clash
1200: 		v404.pressing = v398
1201: 		local v407 = not p366.watch
1202: 		if v407 then
1203: 			local v408
1204: 			if v383 == 1 then
1205: 				v408 = v370.clashA
1206: 			else
1207: 				v408 = v370.clashB
1208: 			end
1209: 			local v409 = p366.mySlot
1210: 			if p366.rules.ffa then
1211: 				v407 = v408 == v409
1212: 			else
1213: 				v407 = (v408 - 1) % 2 + 1 == (v409 - 1) % 2 + 1
1214: 			end
1215: 		end
1216: 		v404.ally = v407
1217: 		v404.now = p369
1218: 		v404.notes = v399
1219: 		v403(v404)
1220: 	elseif p367.clashShown then
   ...
2797: 			local v866 = v_u_100
2798: 			if v866 then
2799: 				local v867 = v_u_14.applySnapshot(p863, v866)
2800: 				if v867 then
2801: 					if not v864.late then
2802: 						v_u_844(v864, v865)
2803: 					end
2804: 					local v868 = v865.history[v867]
2805: 					local v869 = v_u_70.Stats
2806: 					v869.snapshots = v869.snapshots + 1
2807: 					if v868 and v_u_13.checksum(v868) == v_u_13.checksum(v866) then
2808: 						local v870 = v865.confirmed
2809: 						v865.confirmed = math.max(v870, v867)
2810: 						return
2811: 					elseif v864.late then
2812: 						v864.late = nil
2813: 						local v871 = v_u_13.copy(v866)
2814: 						v865.sim = v871
2815: 						v865.history[v867] = v_u_13.copy(v871)
2816: 						for v872, v873 in v871.beys do
2817: 							if v873.ripTick > 0 then
2818: 								v865.ripped[v872] = true
2819: 								local v874 = v864.views[v872]
2820: 							

===== Players.RansbloxScripts.PlayerScripts.Controllers.SettingsController =====
   ...
714: 		for _, v266 in v_u_261() do
715: 			if v266.id == p262.id then
716: 				continue
717: 			end
718: 			local v267
719: 			if v_u_254 then
720: 				v267 = v_u_12.padFor(v266.id)
721: 			else
722: 				v267 = v_u_12.keyFor(v266.id)
723: 			end
724: 			if v267 ~= p263 then
725: 				continue
726: 			end
727: 			v_u_5.SettingsSet:Fire(v264 .. v266.id, v265.Value)
728: 		end
729: 		v_u_5.SettingsSet:Fire(v264 .. p262.id, p263.Value)
730: 		v_u_9.play("good")
731: 	end
732: 	v_u_257 = function()
733: 		-- upvalues: (copy) v_u_255, (ref) v_u_254, (copy) v_u_258, (copy) v_u_253, (copy) v_u_261, (ref) v_u_256, (ref) v_u_12, (ref) v_u_8, (ref) v_u_20, (ref) v_u_9, (ref) v_u_257, (ref) v_u_17, (ref) v_u_1, (ref) v_u_250, (copy) v_u_268, (ref) v_u_16
734: 		v_u_255.Text = v_u_254 and "Pick an action, then press its new button. START keeps it. A button already in use swaps over." or "Click a key, then press the new one. Esc keeps it. A key already in use swaps over."
735: 		for v269, v270 in v_u_258 do
736: 			v270.kind(v269 == "pad" == v_u_254 and "theme" or "off")
737: 		end
738: 		for _, v271 in v_u_253:GetChildren() do
739: 			if v271.Name ~= "Key" then
740: 				continue
741: 			end
742: 			v271:Destroy()
743: 		end
744: 		for v272, v_u_273 in v_u_261() do
745: 			local v274 = (v272 - 1) % 3
746: 			local v275 = (v272 - 1) // 3
747: 			local v276 = v274 * 375 + 16
748: 			local v277 = v275 * 136 + 72
749: 			local v278 = v_u_256 == v_u_273.id
750: 			local v279
751: 			if v_u_254 then
752: 				v279 = v_u_273.pad
753: 			else
754: 				v279 = v_u_273.key

===== Players.RansbloxScripts.PlayerScripts.Controllers.RivalsController =====
   ...
362: 		local v116
363: 		if v115 then
364: 			v116 = v_u_3.LocalPlayer.PlayerGui:FindFirstChild(v115)
365: 		else
366: 			v116 = nil
367: 		end
368: 		if v116 and (v116:IsA("ScreenGui") and v116.Enabled) then
369: 			v_u_13.closeAll("Back")
370: 		end
371: 		return Enum.ContextActionResult.Sink
372: 	end
373: 	if p113 == Enum.UserInputState.Begin and (p114.KeyCode == Enum.KeyCode.ButtonSelect and v_u_13.isOpen()) then
374: 		v_u_13.focus()
375: 		return Enum.ContextActionResult.Sink
376: 	end
377: 	if p113 ~= Enum.UserInputState.Begin or v_u_50 or (v_u_13.isOpen() or (v_u_24.isOpen() or v_u_25.isOpen()) or (v_u_26.isOpen() or v_u_3.LocalPlayer:GetAttribute("InTutorial") == true)) then
378: 		return Enum.ContextActionResult.Pass
379: 	end
380: 	local v117 = p114.KeyCode
381: 	if v117 == Enum.KeyCode.F then
382: 		v_u_11.press("play")
383: 		if not v_u_50 then
384: 			if v_u_3.LocalPlayer:GetAttribute("InTutorial") == true or v_u_3.LocalPlayer:GetAttribute("InTour") == true then
385: 				v_u_21.toast("Step onto a queue pad at a stadium to battle!")
386: 			else
387: 				v_u_38.go("1v1")
388: 			end
389: 		end
390: 	elseif v117 == Enum.KeyCode.H then
391: 		v_u_11.press("summon")
392: 		v_u_81("banner")
393: 	elseif v117 == Enum.KeyCode.J then
394: 		v_u_11.press("inventory")
395: 		v_u_81("inventory")
396: 	elseif v117 == Enum.KeyCode.M then
397: 		v_u_11.press("store")
398: 		v_u_81("store")
399: 	elseif v117 == Enum.KeyCode.B then
400: 		v_u_81("emotes")
401: 	elseif v117 == Enum.KeyCode.G then
402: 		v_u_11.press("autoqueue")
403: 		local v118 = not v_u_55.autoqueue
404: 		v_u_55.autoqueue = v118
405: 		v_u_11.setToggle("autoqueue", v118)
406: 		v_u_21.toast(v118 and "Auto Queue ON. You\'ll rejoin the queue after each match." or "Auto Queue OFF")
407: 	elseif v117 == Enum.KeyCode.N then
408: 		v_u_11.press("spectate")
409: 		local v119 = not v_u_55.spectate
410: 		if v_u_23.spectate(v119) then
411: 			v_u_55.spectate = v119
412: 			v_u_11.setToggle("spectate", v119)
413: 			v_u_21.toast(v119 and "Spectate ON" or "Spectate OFF")
414: 		else
415: 			v_u_55.spectate = false
416: 			v_u_11.setToggle("spectate", false)
417: 			v_u_21.toast("No live battles right now. Try again in a moment!")
418: 		end
419: 	elseif v117 == Enum.KeyCode.ButtonY then
420: 		v_u_11.press("play")
421: 		if not v_u_50 then
422: 			if v_u_3.LocalPlayer:GetAttribute("InTutorial") == true or v_u_3.LocalPlayer:GetAttribute("InTour") == true then
423: 				v_u_21.toast("Step onto a queue pad at a stadium to battle!")
424: 			else
425: 				v_u_38.go("1v1")
426: 			end
427: 		end
428: 	elseif v117 == Enum.KeyCode.ButtonSelect then
429: 		v_u_11.focus()
430: 	else
431: 		if v117 ~= Enum.KeyCode.DPadRight then
432: 			return Enum.ContextActionResult.Pass
433: 		end
434: 		if v_u_2.SelectedObject ~= nil then
435: 			return Enum.ContextActionResult.Pass
436: 		end
437: 		v_u_11.press("spectate")
438: 		local v120 = not v_u_55.spectate
439: 		if v_u_23.spectate(v120) then
440: 			v_u_55.spectate = v120
441: 			v_u_11.setToggle("spectate", v120)
442: 			v_u_21.toast(v120 and "Spectate ON" or "Spectate OFF")
443: 		else
444: 			v_u_55.spectate = false
445: 			v_u_11.setToggle("spectate", false)
446: 			v_u_21.toast("No live battles right now. Try again in a moment!")
447: 		end
448: 	end
449: 	return Enum.ContextActionResult.Sink
450: end
451: function v44.Init(_, p122) -- name: Init
452: 	-- upvalues: (ref) v_u_46, (ref) v_u_47, (ref) v_u_48, (ref) v_u_49
453: 	v_u_46 = p122.SettingsController
454: 	v_u_47 = p122.WorkshopController
455: 	v_u_48 = p122.EmoteController
456: 	v_u_49 = p122.ShowOffController
457: end
   ...
655: 				end
656: 				v_u_20.setShown(v168)
657: 			end
658: 		end
659: 		table.insert(v166, v167:Connect(v170))
660: 		function v_u_23.canPrompt()
661: 			-- upvalues: (ref) v_u_50, (ref) v_u_13, (ref) v_u_24, (ref) v_u_25, (ref) v_u_26, (ref) v_u_55, (ref) v_u_3
662: 			local v171 = not (v_u_50 or (v_u_13.isOpen() or (v_u_24.isOpen() or v_u_25.isOpen()) or (v_u_26.isOpen() or v_u_55.spectate)))
663: 			if v171 then
664: 				if v_u_3.LocalPlayer:GetAttribute("InTutorial") == true then
665: 					v171 = false
666: 				else
667: 					v171 = v_u_3.LocalPlayer:GetAttribute("InTour") ~= true
668: 				end
669: 			end
670: 			return v171
671: 		end
672: 		function v_u_23.promptPress()
673: 			-- upvalues: (ref) v_u_55, (ref) v_u_11, (ref) v_u_23, (ref) v_u_21
674: 			if not v_u_55.spectate then
675: 				v_u_11.press("spectate")
676: 				local v172 = true
677: 				if not v_u_23.spectate(v172) then
678: 					v_u_55.spectate = false
679: 					v_u_11.setToggle("spectate", false)
680: 					v_u_21.toast("No live battles right now. Try again in a moment!")
681: 					return
682: 				end
683: 				v_u_55.spectate = v172
684: 				v_u_11.setToggle("spectate", v172)
685: 				v_u_21.toast(v172 and "Spectate ON" or "Spectate OFF")
686: 			end
687: 		end
688: 		local v173 = v_u_45
689: 		local v174 = v_u_23.spectateStopped.Event
690: 		local func

===== Players.RansbloxScripts.PlayerScripts.Controllers.TutorialController =====
   ...
652: end
653: local function v_u_214(p213) -- name: keyOf
654: 	-- upvalues: (copy) v_u_5, (copy) v_u_43
655: 	if v_u_5.PreferredInput == Enum.PreferredInput.Gamepad then
656: 		return v_u_43.padName(v_u_43.padFor(p213))
657: 	else
658: 		return v_u_43.keyName(v_u_43.keyFor(p213))
659: 	end
660: end
661: local function v_u_215() -- name: moveKeys
662: 	-- upvalues: (copy) v_u_5
663: 	return v_u_5.PreferredInput == Enum.PreferredInput.Gamepad and { "L STICK" } or {
664: 		"W",
665: 		"A",
666: 		"S",
667: 		"D"
668: 	}
669: end
670: local function v_u_216() -- name: lockedIn
671: 	-- upvalues: (copy) v_u_29
672: 	return v_u_29:LockedIn()
673: end
674: local function v_u_228() -- name: aimSteps
675: 	-- upvalues: (copy) v_u_5, (copy) v_u_43, (copy) v_u_212, (copy) v_u_216, (copy) v_u_29
676: 	local v217 = v_u_5.PreferredInput == Enum.PreferredInput.Gamepad
677: 	local v218
678: 	if v_u_5.PreferredInput == Enum.PreferredInput.Gamepad then
679: 		v218 = v_u_43.padName(v_u_43.padFor("Rip"))
680: 	else
681: 		v218 = v_u_43.keyName(v_u_43.keyFor("Rip"))
682: 	end
683: 	local v219 = {}
684: 	local v223 = {
685: 		["keys"] = nil,
686: 		["title"] = "AIM",
687: 		["cue"] = nil,
688: 		["cueKeys"] = true,
689: 		["touchCue"] = "PUSH THE STICK",
690: 		["focus"] = nil,
691: 		["skip"] = nil,
692: 		["text"] = nil,
693: 		["touch"] = "Drag the STICK to choose where your bey will land.",
694: 		["why"] = "Land near the middle to reach Volt fast.",
695: 		["help"] = nil,
696: 		["touchHelp"] = "Push the stick at the bottom left. The target on the floor moves with it!",
697: 		["done"] = nil,
698: 		["keys"] = { v217 and "L STICK" or "Mouse" },
699: 		["cue"] = v217 and "PUSH THE" or "MOVE YOUR",
700: 		["focus"] = v_u_212,
701: 		["skip"] = v_u_216,
702: 		["text"] = v217 and "Push the LEFT STICK to choose where your bey will land." or "Move your MOUSE to choose where your bey will land.",
703: 		["help"] = v217 and "Push the left stick left and right. The target on the floor moves with it!" or "Move your mouse left and right. The target on the floor moves with it!",
704: 		["done"] = function(p220) -- name: done
705: 			-- upvalues: (ref) v_u_29
706: 			local v221 = v_u_29:AimSpot()
707: 			local v222 = p220.aimFrom
708: 			return v221 ~= nil and (v222 ~= nil and (v221 - v222).Magnitude > 1.5) and true or v_u_29:LockedIn()
709: 		end
710: 	}
711: 	local v224 = {
712: 		["keys"] = nil,
713: 		["title"] = "LOCK IN",
714: 		["quick"] = true,
715: 		["skip"] = nil,
716: 		["cue"] = "PRESS",
717: 		["cueKeys"] = true,
718: 		["touchCue"] = "TAP READY",
719: 		["text"] = nil,
720: 		["touch"] = "Tap READY to lock in that spot.",
721: 		["why"] = "Your bey will launch from there.",
722: 		["help"] = nil,
723: 		["touchHelp"] = "Tap the READY button.",
724: 		["done"] = nil,
725: 		["keys"] = { v218 },
726: 		["skip"] = v_u_216,
727: 		["text"] = ("Press %* to lock in that spot."):format(v218)
728: 	}
729: 	local v225
730: 	if v217 then
731: 		v225 = ("Press the %* button on your controller."):format(v218)
732: 	else
733: 		v225 = ("Press the %* key on your keyboard."):format(v218)
734: 	end
735: 	v224.help = v225
736: 	function v224.done(p226) -- name: done
737: 		-- upvalues: (ref) v_u_29
738: 		return p226.flags.q1 == true and true or v_u_29:LockedIn()
739: 	end
740: 	__set_list(v219, 1, {v223, v224, {
741: 	["keys"] = nil,
742: 	["title"] = "LET IT RIP!",
743: 	["text"] = nil,
744: 	["touch"] = "A ring shrinks onto the circle. TAP the moment it TOUCHES the circle. 3 times!",
745: 	["why"] = "Good timing = a faster, stronger launch!",
746: 	["help"] = nil,
747: 	["touchHelp"] = "Wait for the ring to touch the circle... NOW tap!",
748: 	["act"] = 0.45,
749: 	["done"] = nil,
750: 	["keys"] = { v218 },
751: 	["text"] = ("A ring shrinks onto the circle. Press %* the moment it TOUCHES the circle. 3 times!"):format(v218),
752: 	["help"] = ("Wait for the ring to touch the circle... NOW press %*!"):format(v218),
753: 	["done"] = function(p227) -- name: done
754: 		return p227.flags.Rip == true
755: 	end
756: }})
757: 	return v219
758: end
759: local function v_u_293() -- name: battleSteps
760: 	-- upvalues: (copy) v_u_5, (copy) v_u_42, (copy) v_u_29, (ref) v_u_206, (copy) v_u_215, (copy) v_u_44, (copy) v_u_211, (copy) v_u_214, (copy) v_u_43, (copy) v_u_18, (copy) v_u_205, (copy) v_u_17
761: 	local v229 = v_u_5.PreferredInput == Enum.PreferredInput.Gamepad
762: 	local v230 = {}
763: 	local v231 = {
764: 		["keys"] = nil,
765: 		["title"] = "YOUR BEY",
766: 		["explain"] = true,
767: 		["focus"] = nil,
768: 		["text"] = "This RED bey with the ring under it is YOURS. Volt\'s bey is the BLUE one.",
769: 		["touch"] = "This RED bey with the ring under it is YOURS. Volt\'s bey is the BLUE one.",
770: 		["why"] = "",
771: 		["done"] = nil,
772: 		["keys"] = {}
   ...
1082: 		-- upvalues: (ref) v_u_44, (copy) v_u_283
1083: 		return v_u_44.piece(v_u_283)
1084: 	end
1085: 	v269.rows = { "slot1" }
1086: 	function v269.done(p284) -- name:

===== Players.RansbloxScripts.PlayerScripts.Controllers.ShowOffController =====
   ...
609: 	end
610: 	v_u_10.RivalsResonance:Fire(p215)
611: end
612: local function v_u_221(p216, p217, p218) -- name: onToolKey
613: 	-- upvalues: (copy) v_u_6, (copy) v_u_20, (copy) v_u_7, (copy) v_u_3, (copy) v_u_19, (copy) v_u_21
614: 	if p217 ~= Enum.UserInputState.Begin or (v_u_6:GetFocusedTextBox() or v_u_20.isOpen()) then
615: 		return Enum.ContextActionResult.Pass
616: 	end
617: 	if p218.UserInputType ~= Enum.UserInputType.Keyboard and v_u_7.SelectedObject ~= nil then
618: 		return Enum.ContextActionResult.Pass
619: 	end
620: 	local v219 = v_u_3.LocalPlayer
621: 	local v220 = v219:FindFirstChildOfClass("PlayerGui")
622: 	if v220 and v220:FindFirstChild("EmoteWheel") then
623: 		return Enum.ContextActionResult.Pass
624: 	end
625: 	if v219:GetAttribute("Battling") == true or v219:GetAttribute("InTutorial") == true then
626: 		return Enum.ContextActionResult.Pass
627: 	end
628: 	if p216 == "RivalsHold" then
629: 		v_u_19.press("hold")
630: 		v_u_21.setHold(v219:GetAttribute("ShowHold") ~= true)
631: 	else
632: 		v_u_19.press("resonance")
633: 		v_u_21.setResonance(v219:GetAttribute("ShowResonance") ~= true)
634: 	end
635: 	return Enum.ContextActionResult.Sink
636: end
637: local function v_u_231() -- name: toolbarShow
638: 	-- upvalues: (copy) v_u_3, (copy) v_u_19
639: 	local v222 = v_u_3.LocalPlayer
640: 	local v223 = v222:GetAttribute("ShowBey")
641: 	local v224
642: 	if type(v223) == "string" then
643: 		v224 = string.match(v223, "^([^|]+)|")
644: 	else
645: 		v224 = nil
646: 	end
647: 	local v225 = v_u_19.toolbar
648: 	local v226 = v222:GetAttribute("ShowHold") == true
649: 	local v227 = v222:GetAttribute("ShowResonance") == true
650: 	local v228 = tonumber(v222:GetAttribute("ShowEvo")) or 0
651: 	local v229 = v222:GetAttribute("ShowRarity")
652: 	local v230 = math.floor(v228) + ((v229 == "Mythic" or v229 == "Divine") and 1 or 0)

===== Players.RansbloxScripts.PlayerScripts.Cutscene.Fight =====
   ...
360: 				v141 = v137.z
361: 			end
362: 			local v142 = p128.err[v136]
363: 			if v142 then
364: 				v140 = v140 + v142.x
365: 				v141 = v141 + v142.z
366: 				local v143 = -p130 * 12
367: 				local v144 = math.exp(v143)
368: 				v142.x = v142.x * v144
369: 				v142.z = v142.z * v144
370: 			end
371: 			local v145
372: 			if v132.clash == 0 or v136 ~= v132.clashA and v136 ~= v132.clashB then
373: 				v145 = nil
374: 			else
375: 				local v146 = v136 == v132.clashA and 1 or -1
376: 				local v147 = v132.clashNx
377: 				local v148 = v132.clashNz
378: 				v145 = Vector3.new(v147, 0, v148) * v146 * (0.8 + 0.5 * v132.clashX * v146)
379: 			end
380: 			v138.press = v145
381: 			v138:update(v137, v140, v141, p130 * p131, p128.origin, p128.st, v134)
382: 			v135[v136] = v138.position
383: 		end
384: 		local v149 = v132.beys[v132.clashA]
385: 		local v150 = v132.beys[v132.clashB]
386: 		local v151 = not (v149 and v150) and 0 or (v149.x + v150.x) / 2
387: 		local v152 = not (v149 and v150) and 0 or (v149.z + v150.z) / 2
388: 		if v132.clash > 0 then
389: 			local v153 = v135[v132.clashA]
390: 			local v154 = v135[v132.clashB]
391: 			if v153 and (v154 and (v149 and v150)) then
392: 				if not p128.clashShown then
393: 					p128.clashShown = true
394: 					v_u_5.clashStart(v153, v154, v151, v152, v_u_5.color(v132.clashA), v_u_5.color(v132.clashB))
395: 					p128.shake(0.6, 0.4)
396: 				end
397: 				local v155 = v_u_5.clash
398: 				local v156 = v132.clashX
399: 				v155(v153, v154, v151, v152, math.abs(v156), v132.clash == 3)
400: 			end

===== Players.RansbloxScripts.PlayerScripts.UI.Dialogue =====
   ...
400: 		v121[v122] = v123
401: 	end
402: 	if v105 then
403: 		v121.Parent = v105
404: 	end
405: 	local v124 = {
406: 		["Thickness"] = 4,
407: 		["Color"] = nil,
408: 		["Color"] = v_u_11
409: 	}
410: 	local v125 = Instance.new("UIStroke")
411: 	for v126, v127 in v124 do
412: 		v125[v126] = v127
413: 	end
414: 	if v121 then
415: 		v125.Parent = v121
416: 	end
417: 	v35.Parent = v_u_3.LocalPlayer:WaitForChild("PlayerGui")
418: 	v39.Activated:Connect(function()
419: 		-- upvalues: (ref) v_u_8, (ref) v_u_19
420: 		v_u_8.play("press")
421: 		v_u_19:Fire()
422: 	end)
423: 	return {
424: 		["gui"] = nil,
425: 		["box"] = nil,
426: 		["scale"] = nil,
427: 		["panel"] = nil,
428: 		["accent"] = nil,
429: 		["plate"] = nil,
430: 		["plateFill"] = nil,
431: 		["name"] = nil,
432: 		["text"] = nil,
433: 		["arrow"] = nil,
434: 		["hint"] = nil,
435: 		["tile"] = nil,
436: 		["tileShell"] = nil,
437: 		["view"] = nil,
438: 		["initial"] = nil,
439: 		["who"] = nil,
440: 		["gui"] = v35,

===== Players.RansbloxScripts.PlayerScripts.UI.Kit =====
   ...
81: 		["bottom"] = v6("#CFE0FF"),
82: 		["ink"] = Color3.fromRGB(10, 18, 64),
83: 		["light"] = v6("#FFFFFF")
84: 	}
85: }
86: local v_u_7 = {}
87: for v8, v9 in v_u_5.Hues do
88: 	v_u_7[v9] = v8
89: end
90: v_u_5.T = {
91: 	["open"] = nil,
92: 	["openFade"] = nil,
93: 	["close"] = nil,
94: 	["dimIn"] = nil,
95: 	["dimOut"] = nil,
96: 	["item"] = nil,
97: 	["slide"] = nil,
98: 	["fill"] = nil,
99: 	["hoverIn"] = nil,
100: 	["hoverOut"] = nil,
101: 	["pressDown"] = nil,
102: 	["pressUp"] = nil,
103: 	["slam"] = nil,
104: 	["stagger"] = 0.025,
105: 	["openFrom"] = 1.06,
106: 	["open"] = TweenInfo.new(0.2, Enum.EasingStyle.Quint, Enum.EasingDirection.Out),
107: 	["openFade"] = TweenInfo.new(0.12, Enum.EasingStyle.Quad, Enum.EasingDirection.Out),
108: 	["close"] = TweenInfo.new(0.14, Enum.EasingStyle.Quad, Enum.EasingDirection.In),
109: 	["dimIn"] = TweenInfo.new(0.12, Enum.EasingStyle.Linear),
110: 	["dimOut"] = TweenInfo.new(0.08, Enum.EasingStyle.Linear),
111: 	["item"] = TweenInfo.new(0.2, Enum.EasingStyle.Quint, Enum.EasingDirection.Out),
112: 	["slide"] = TweenInfo.new(0.22, Enum.EasingStyle.Quint, Enum.EasingDirection.Out),
113: 	["fill"] = TweenInfo.new(0.26, Enum.EasingStyle.Quint, Enum.EasingDirection.Out),
114: 	["hoverIn"] = TweenInfo.new(0.12, Enum.EasingStyle.Quad, Enum.EasingDirection.Out),
115: 	["hoverOut"] = TweenInfo.new(0.1, Enum.EasingStyle.Quad, Enum.EasingDirection.Out),
116: 	["pressDown"] = TweenInfo.new(0.06, Enum.EasingStyle.Quad, Enum.EasingDirection.Out),
117: 	["pressUp"] = TweenInfo.new(0.22, Enum.EasingStyle.Back, Enum.EasingDirection.Out),
118: 	["slam"] = TweenInfo.new(0.16, Enum.EasingStyle.Quint, Enum.EasingDirection.Out)
119: }
120: v_u_5.SCALE = {
121: 	["hover"] = 1.05,
122: 	["press"] = 0.94,
123: 	["card"] = 1.035
124: }
125: local v_u_10 = {
126: 	["mk_panel"] = {
127: 		349,
128: 		463,
129: 		135,
130: 		192,
131: 		137,
132: 		194
133: 	},
134: 	["mk_well"] = {
135: 		223,
136: 		441,
137: 		110,
138: 		221,
139: 		112,
140: 		223
141: 	},
142: 	["mk_btn_gold"] = {
   ...
1164: 				end
1165: 				v191(v192, v193, {
1166: 					["Scale"] = not v_u_182 and 1 or v_u_181
1167: 				})
1168: 			end
1169: 			if p_u_180 then
1170: 				p_u_180(true)
1171: 			end
1172: 		end
1173: 	end)
1174: 	p177.SelectionLost:Connect(v187)
1175: 	p177.Activated:Connect(function()
1176: 		-- upvalues: (ref) v_u_14
1177: 		task.delay(0.03, v_u_14.play, "release")
1178: 	end)
1179: 	p177.InputBegan:Connect(function(p194)
1180: 		-- upvalues: (ref) v_u_183, (ref) v_u_14, (ref) v_u_5, (copy) p_u_178
1181: 		local v195 = p194.UserInputType
1182: 		if v195 == Enum.UserInputType.MouseButton1 or (v195 == Enum.UserInputType.Touch or p194.KeyCode == Enum.KeyCode.ButtonA) then
1183: 			v_u_183 = true
1184: 			v_u_14.play("press")
1185: 			v_u_5.tween(p_u_178, v_u_5.T.pressDown, {
1186: 				["Scale"] = v_u_5.SCALE.press
1187: 			})
1188: 		end
1189: 	end)
1190: 	p177.InputEnded:Connect(function(p196)
1191: 		-- upvalues: (ref) v_u_183, (ref) v_u_5, (copy) p_u_178, (ref) v_u_182, (copy) v_u_181
1192: 		local v197 = p196.UserInputType
1193: 		if v_u_183 and (v197 == Enum.UserInputType.MouseButton1 or (v197 == Enum.UserInputType.Touch or p196.KeyCode == Enum.KeyCode.ButtonA)) then
1194: 			v_u_183 = false
1195: 			v_u_5.tween(p_u_178, v_u_5.T.pressUp, {
1196: 				["Scale"] = (not v_u_182 or v197 == Enum.UserInputType.Touch) and 1 or v_u_181
1197: 			})
1198: 		end
1199: 	end)
1200: end
1201: function v_u_5.selectionRing(p198) -- name: selectionRing
1202: 	-- upvalues: (copy) v_u_28, (copy) v_u_5
1203: 	local v199 = v_u_28("Frame", {
1204: 		["Name"] = "SelectionRing",
1205: 		["BackgroundTransparency"] = 1,
1206: 		["Size"] = nil,
1207: 		["Size"] = UDim2.fromScale(1, 1)
1208: 	}, nil)
1209: 	v_u_5.corner(v199, p198 or 16)
1210: 	v_u_28("UIStroke", {
1211: 		["Thickness"] = 4,
1212: 		["Color"] = nil,
1213: 		["ApplyStrokeMode"] = nil,
1214: 		["Color"] = v_u_5.CURSOR,
1215: 		["ApplyStrokeMode"] = Enum.ApplyStrokeMode.Border

===== Players.RansbloxScripts.PlayerScripts.UI.Results =====
   ...
382: 			["radius"] = 33,
383: 			["z"] = 20,
384: 			["hue"] = v_u_13.Hues.gold,
385: 			["size"] = Vector2.new(300, 66),
386: 			["position"] = UDim2.fromOffset(640, p47.panelH + 222 + 52)
387: 		})
388: 		v115.root.Visible = false
389: 		v51.Parent = v_u_4.LocalPlayer:WaitForChild("PlayerGui")
390: 		local v116 = v_u_13.fitScale
391: 		local v117 = v_u_18
392: 		table.insert(v59, v116(v51, v54, v117, 0.3))
393: 		local v118 = v_u_3.TouchControlsEnabled
394: 		v_u_3.TouchControlsEnabled = false
395: 		if not v_u_48 then
396: 			local v119 = v_u_6.RenderStepped
397: 			table.insert(v59, v119:Connect(function(p120)
398: 				-- upvalues: (copy) v_u_55
399: 				v_u_55.Rotation = (v_u_55.Rotation + p120 * 9) % 360
400: 			end))
401: 		end
402: 		local function v121() -- name: press
403: 			-- upvalues: (copy) v_u_50, (ref) v_u_57, (copy) v_u_49, (ref) v_u_58
404: 			if os.clock() - v_u_50 < 0.35 then
405: 				return
406: 			elseif v_u_57 then
407: 				v_u_49:Fire()
408: 			else
409: 				v_u_58 = true
410: 			end
411: 		end
412: 		v_u_1:BindActionAtPriority("ResultsContinue", function(_, p122, _)
413: 			-- upvalues: (copy) v_u_50, (ref) v_u_57, (copy) v_u_49, (ref) v_u_58
414: 			if p122 == Enum.UserInputState.Begin and os.clock() - v_u_50 >= 0.35 then
415: 				if v_u_57 then
416: 					v_u_49:Fire()
417: 				else
418: 					v_u_58 = true
419: 				end
420: 			end
421: 			return Enum.ContextActionResult.Sink
422: 		end, false, Enum.ContextActionPriority.High.Value + 20, Enum.KeyCode.Return, Enum.KeyCode.KeypadEnter, Enum.KeyCode.Space, Enum.KeyCode.ButtonA)

===== Players.RansbloxScripts.PlayerScripts.UI.Night =====
   ...
28: v_u_8.TYPE_COLOR = {
29: 	["Attack"] = Color3.fromRGB(255, 92, 54),
30: 	["Defense"] = Color3.fromRGB(38, 140, 255),
31: 	["Stamina"] = Color3.fromRGB(32, 214, 120),
32: 	["Balance"] = Color3.fromRGB(178, 96, 255)
33: }
34: v_u_8.FILL = {
35: 	["gold"] = { Color3.fromHex("#FFF27A"), Color3.fromHex("#FFB21F") },
36: 	["cyan"] = { Color3.fromHex("#A8F4FF"), Color3.fromHex("#2FB8FF") },
37: 	["white"] = { Color3.fromHex("#FFFFFF"), Color3.fromHex("#BFD8FF") },
38: 	["lime"] = { Color3.fromHex("#E4FF4A"), Color3.fromHex("#8BE814") },
39: 	["crimson"] = { Color3.fromHex("#FFC2CE"), Color3.fromHex("#FF2E55") },
40: 	["ticket"] = { Color3.fromHex("#FFE6A8"), Color3.fromHex("#FF5A3C") }
41: }
42: local v_u_10 = {
43: 	["open"] = TweenInfo.new(0.2, Enum.EasingStyle.Back, Enum.EasingDirection.Out),
44: 	["close"] = TweenInfo.new(0.12, Enum.EasingStyle.Quad, Enum.EasingDirection.In),
45: 	["slide"] = TweenInfo.new(0.18, Enum.EasingStyle.Quint, Enum.EasingDirection.Out),
46: 	["fade"] = TweenInfo.new(0.15, Enum.EasingStyle.Quad, Enum.EasingDirection.Out),
47: 	["hover"] = TweenInfo.new(0.12, Enum.EasingStyle.Quad, Enum.EasingDirection.Out),
48: 	["press"] = TweenInfo.new(0.06, Enum.EasingStyle.Quad, Enum.EasingDirection.Out),
49: 	["pop"] = TweenInfo.new(0.18, Enum.EasingStyle.Back, Enum.EasingDirection.Out),
50: 	["punchIn"] = TweenInfo.new(0.08, Enum.EasingStyle.Quad, Enum.EasingDirection.Out),
51: 	["punchOut"] = TweenInfo.new(0.14, Enum.EasingStyle.Back, Enum.EasingDirection.Out)
52: }
53: v_u_8.T = v_u_10
54: function v_u_8.img(p11) -- name: img
55: 	-- upvalues: (copy) v_u_7, (copy) v_u_8
56: 	local v12 = v_u_7[p11]
57: 	if v12 == 0 then
58: 		return ""
59: 	elseif v12 then
60: 		return ("rbxassetid://%*"):format(v12)
61: 	else
62: 		return v_u_8.ROOT .. p11 .. ".png"
63: 	end
64: end
65: function v_u_8.image(p13, p14, p15, p16) -- name: image
66: 	-- upvalues: (copy) v_u_9, (copy) v_u_8
67: 	local v17 = v_u_9("ImageLabel", {
68: 		["Name"] = nil,
   ...
107: 	if p28 then
108: 		v_u_8.fill(v32, p28)
109: 	end
110: 	return v32
111: end
112: function v_u_8.caption(p33, p34, p35, p36) -- name: caption
113: 	-- upvalues: (copy) v_u_3, (copy) v_u_8
114: 	local v37 = v_u_3.text(p33, {
115: 		["text"] = nil,
116: 		["size"] = nil,
117: 		["stroke"] = 0,
118: 		["color"] = nil,
119: 		["wrap"] = true,
120: 		["text"] = p34,
121: 		["size"] = p35,
122: 		["color"] = v_u_8.TEXT2
123: 	}, p36)
124: 	v37.FontFace = Font.new("rbxasset://fonts/families/Montserrat.json", Enum.FontWeight.Bold, Enum.FontStyle.Normal)
125: 	return v37
126: end
127: function v_u_8.press(p38, p39) -- name: press
128: 	-- upvalues: (copy) v_u_9, (copy) v_u_3, (copy) v_u_10
129: 	local v_u_40 = p38:FindFirstChildOfClass("UIScale") or v_u_9("UIScale", {
130: 		["Name"] = "FX"
131: 	}, p38)
132: 	local v_u_41 = p39 or 1.04
133: 	local v_u_42 = false
134: 	local v_u_43 = false
135: 	p38.MouseEnter:Connect(function()
136: 		-- upvalues: (ref) v_u_42, (ref) v_u_43, (ref) v_u_3, (copy) v_u_40, (ref) v_u_10, (copy) v_u_41
137: 		v_u_42 = true
138: 		if not v_u_43 then
139: 			local v44 = v_u_3.tween
140: 			local v45 = v_u_40
141: 			local v46 = v_u_10.hover
142: 			local v47 = {}
143: 			local v48
144: 			if v_u_42 then
145: 				v48 = v_u_41
146: 			else
147: 				v48 = v_u_40:GetAttribute("Rest") or 1
   ...
193: 		if not v_u_43 then
194: 			local v59 = v_u_3.tween
195: 			local v60 = v_u_40
196: 			local v61 = v_u_10.hover
197: 			local v62 = {}
198: 			local v63
199: 			if v_u_42 then
200: 				v63 = v_u_41
201: 			else
202: 				v63 = v_u_40:GetAttribute("Rest") or 1
203: 			end
204: 			v62.Scale = v63
205: 			v59(v60, v61, v62)
206: 		end
207: 	end)
208: 	p38.InputBegan:Connect(function(p64)
209: 		-- upvalues: (ref) v_u_43, (ref) v_u_3, (copy) v_u_40, (ref) v_u_10
210: 		local v65 = p64.UserInputType
211: 		if v65 == Enum.UserInputType.MouseButton1 or (v65 == Enum.UserInputType.Touch or p64.KeyCode == Enum.KeyCode.ButtonA) then
212: 			v_u_43 = true
213: 			v_u_3.tween(v_u_40, v_u_10.press, {
214: 				["Scale"] = 0.95
215: 			})
216: 		end
217: 	end)
218: 	p38.InputEnded:Connect(function(p66)
219: 		-- upvalues: (ref) v_u_43, (ref) v_u_3, (copy) v_u_40, (ref) v_u_42, (copy) v_u_41
220: 		local v67 = p66.UserInputType
221: 		if v_u_43 and (v67 == Enum.UserInputType.MouseButton1 or (v67 == Enum.UserInputType.Touch or p66.KeyCode == Enum.KeyCode.ButtonA)) then
222: 			v_u_43 = false
223: 			local v68 = v_u_3.tween
224: 			local v69 = v_u_40
225: 			local v70 = TweenInfo.new(0.22, Enum.EasingStyle.Back, Enum.EasingDirection.Out)
226: 			local v71 = {}
227: 			local v72
228: 			if v_u_42 and v67 ~= Enum.UserInputType.Touch then
229: 				v72 = v_u_41
230: 			else
231: 				v72 = v_u_40:GetAttribute("Rest") or 1
232: 			end
233: 			v71.Scale = v72
   ...
482: 		["AutoButtonColor"] = false,
483: 		["Image"] = nil,
484: 		["AnchorPoint"] = nil,
485: 		["Position"] = nil,
486: 		["Size"] = nil,
487: 		["ZIndex"] = 8,
488: 		["SelectionImageObject"] = nil

===== Players.RansbloxScripts.PlayerScripts.UI.RivalsHud =====
   ...
420: 			})
421: 			if v133 then
422: 				local v151 = {
423: 					[p_u_131.glowProp] = p_u_131.glowRest
424: 				}
425: 				v_u_12.tween(v133, TweenInfo.new(0.14, Enum.EasingStyle.Quad, Enum.EasingDirection.Out), v151)
426: 			end
427: 			if v_u_134 and v_u_135 then
428: 				v_u_12.tween(v_u_135, TweenInfo.new(0.1, Enum.EasingStyle.Quad, Enum.EasingDirection.Out), {
429: 					["Scale"] = 1
430: 				})
431: 				local v152 = {
432: 					["Position"] = p_u_131.glyphPos,
433: 					["Size"] = UDim2.fromOffset(p_u_131.glyphSize.X, p_u_131.glyphSize.Y)
434: 				}
435: 				v_u_12.tween(v_u_134, TweenInfo.new(0.1, Enum.EasingStyle.Quad, Enum.EasingDirection.Out), v152)
436: 			end
437: 		end
438: 	end
439: end
440: local function v_u_158(p154) -- name: press
441: 	-- upvalues: (copy) v_u_13, (copy) v_u_12
442: 	p154.token = p154.token + 1
443: 	v_u_13.play("press")
444: 	local v155 = p154.fx
445: 	v_u_12.tween(v155, TweenInfo.new(0.06, Enum.EasingStyle.Quad, Enum.EasingDirection.Out), {
446: 		["Scale"] = 0.9
447: 	})
448: 	local v156 = p154.glyph
449: 	if v156 then
450: 		local v157 = {
451: 			["Size"] = UDim2.fromOffset(p154.glyphSize.X * 1.16, p154.glyphSize.Y * 0.84)
452: 		}
453: 		v_u_12.tween(v156, TweenInfo.new(0.06, Enum.EasingStyle.Quad, Enum.EasingDirection.Out), v157)
454: 	end
455: end
456: local function v_u_189(p_u_159) -- name: release
457: 	-- upvalues: (copy) v_u_13, (copy) v_u_12
458: 	p_u_159.token = p_u_159.token + 1
459: 	local v_u_160 = p_u_159.token
460: 	if not p_u_159.toggle then
461: 		v_u_13.play("release")
462: 	end
463: 	local v_u_161 = not p_u_159.over and 1 or p_u_159.up
   ...
1701: 			["ZIndex"] = 3,
1702: 			["FontFace"] = Font.new("rbxasset://fonts/families/BuilderSans.json", Enum.FontWeight.Bold),
1703: 			["TextColor3"] = v_u_106,
1704: 			["AutomaticSize"] = Enum.AutomaticSize.X,
1705: 			["Size"] = UDim2.fromOffset(0, 44)
1706: 		}, v_u_405)
1707: 		v_u_405.MouseEnter:Connect(function()
1708: 			-- upvalues: (ref) v_u_12, (copy) v_u_405
1709: 			v_u_12.tween(v_u_405, TweenInfo.new(0.12), {
1710: 				["BackgroundTransparency"] = 0.12
1711: 			})
1712: 		end)
1713: 		v_u_405.MouseLeave:Connect(function()
1714: 			-- upvalues: (ref) v_u_12, (copy) v_u_405
1715: 			v_u_12.tween(v_u_405, TweenInfo.new(0.12), {
1716: 				["BackgroundTransparency"] = 0.3
1717: 			})
1718: 		end)
1719: 		v_u_405.Activated:Connect(function()
1720: 			-- upvalues: (ref) v_u_13, (copy) p_u_404
1721: 			v_u_13.play("press")
1722: 			p_u_404()
1723: 		end)
1724: 		return v_u_405, v406
1725: 	end
1726: 	local v_u_408 = v_u_19("TextButton", {
1727: 		["Name"] = "Event",
1728: 		["Text"] = "",
1729: 		["AutoButtonColor"] = false,
1730: 		["BackgroundColor3"] = nil,
1731: 		["BackgroundTransparency"] = 0.3,
1732: 		["AutomaticSize"] = nil,
1733: 		["Size"] = nil,
1734: 		["LayoutOrder"] = 1,
1735: 		["Visible"] = false,
1736: 		["ZIndex"] = 2,
1737: 		["BackgroundColor3"] = Color3.new(0, 0, 0),
1738: 		["AutomaticSize"] = Enum.AutomaticSize.X,
1739: 		["Size"] = UDim2.fromOffset(44, 44)
1740: 	}, v_u_397)
1741: 	v_u_19("UICorner", {
   ...
1790: 		["AutomaticSize"] = Enum.AutomaticSize.X,
1791: 		["Size"] = UDim2.fromOffset(0, 44)
1792: 	}, v_u_408)
1793: 	v_u_408.MouseEnter:Connect(function()
1794: 		-- upvalues: (ref) v_u_12, (copy) v_u_408
1795: 		v_u_12.tween(v_u_408, TweenInfo.new(0.12), {
1796: 			["BackgroundTransparency"] = 0.12
1797: 		})
1798: 	end)
1799: 	v_u_408.MouseLeave:Connect(function()
1800: 		-- upvalues: (ref) v_u_12, (copy) v_u_408
1801: 		v_u_12.tween(v_u_408, TweenInfo.new(0.12), {
1802: 			["BackgroundTransparency"] = 0.3
1803: 		})
1804: 	end)
1805: 	v_u_408.Activated:Connect(function()
1806: 		-- upvalues: (ref) v_u_10, (ref) v_u_13, (copy) p_u_335
1807: 		if v_u_10.LOCKED then
1808: 			v_u_13.play("bad")
1809: 		else
1810: 			v_u_13.play("press")
1811: 			p_u_335.open("halloween")
1812: 		end
1813: 	end)
1814: 	v_u_26 = v_u_408
1815: 	local v_u_414 = "store:bp"
1816: 	local v415, v416 = v407("BP", 1, 2, function()
1817: 		-- upvalues: (copy) p_u_335, (copy) v_u_414
1818: 		p_u_335.open(v_u_414)
1819: 	end)
1820: 	local v_u_417 = "store:tickets"
1821: 	local v418, v419 = v407("Tickets", 2, 3, function()
1822: 		-- upvalues: (copy) p_u_335, (copy) v_u_417
1823: 		p_u_335.open(v_u_417)
1824: 	end)
1825: 	local v420 = v_u_24
1826: 	v_u_24.bp = v415
1827: 	v420.tickets = v418
1828: 	local v_u_421 = v_u_19("TextButton", {
1829: 		["Name"] = "Emotes",
1830: 		["Text"] = "",
   ...
1872: 		["Position"] = UDim2.new(1, -6, 0, 6),
1873: 		["Size"] = UDim2.fromOffset(12, 12)
1874: 	}, v_u_421)
1875: 	v_u_19("UICorner", {
1876: 		["CornerRadius"] = UDim.new(0, 6)
1877: 	}, v425)
1878: 	v_u_421.MouseEnter:Connect(function()
1879: 		-- upvalues: (ref) v_u_12, (copy) v_u_421
1880: 		v_u_12.tween(v_u_421, TweenInfo.new(0.12), {
1881: 			["BackgroundTransparency"] = 0.12
1882: 		})
1883: 	end)
1884: 	v_u_421.MouseLeave:Connect(function()
1885: 		-- upvalues: (ref) v_u_12, (copy) v_u_421
1886: 

===== Players.RansbloxScripts.PlayerScripts.UI.UiSfx =====
1: local v_u_1 = game:GetService("ContentProvider")
2: local v_u_2 = game:GetService("SoundService")
3: local v3 = {}
4: local v_u_4 = {
5: 	["hover"] = {
6: 		["id"] = "rbxassetid://133196982070163",
7: 		["volume"] = 0.26,
8: 		["pitch"] = 1.12,
9: 		["vary"] = 0.06
10: 	},
11: 	["press"] = {
12: 		["id"] = "rbxassetid://107986037170404",
13: 		["volume"] = 0.38,
14: 		["pitch"] = 0.92,
15: 		["vary"] = 0.04
16: 	},
17: 	["release"] = {
18: 		["id"] = "rbxassetid://136296894682065",
19: 		["volume"] = 0.36,
20: 		["pitch"] = 1,
21: 		["vary"] = 0.05
22: 	},
23: 	["on"] = {
24: 		["id"] = "rbxassetid://136296894682065",
25: 		["volume"] = 0.4,
26: 		["pitch"] = 1.2,
27: 		["vary"] = 0
28: 	},
29: 	["off"] = {
30: 		["id"] = "rbxassetid://136296894682065",
31: 		["volume"] = 0.32,
   ...
60: 		["id"] = "rbxassetid://9114636546",
61: 		["volume"] = 0.4,
62: 		["pitch"] = 0.62,
63: 		["vary"] = 0
64: 	},
65: 	["tick"] = {
66: 		["id"] = "rbxassetid://9114636546",
67: 		["volume"] = 0.25,
68: 		["pitch"] = 1,
69: 		["vary"] = 0
70: 	},
71: 	["reveal"] = {
72: 		["id"] = "rbxassetid://9119740811",
73: 		["volume"] = 0.55,
74: 		["pitch"] = 0.9,
75: 		["vary"] = 0.03
76: 	}
77: }
78: local v_u_5 = {
79: 	["hover"] = true,
80: 	["press"] = true,
81: 	["release"] = true
82: }
83: local v_u_6 = 0
84: local v_u_7 = {}
85: local v_u_8 = {}
86: local function v_u_15(p9) -- name: voices
87: 	-- upvalues: (copy) v_u_7, (copy) v_u_4, (copy) v_u_2
88: 	local v10 = v_u_7[p9]
89: 	if v10 then
90: 		return v10
91: 	end
92: 	local v11 = v_u_4[p9]
93: 	local v12 = {}
94: 	for _ = 1, 3 do
95: 		local v13 = Instance.new("Sound")
96: 		v13.Name = "UiSfx_" .. p9
97: 		v13.SoundId = v11.id
98: 		v13.Volume = v11.volume
99: 		local v14 = v_u_2:FindFirstChild("Sfx")
100: 		if not (v14 and v14:IsA("SoundGroup")) then

===== Players.RansbloxScripts.PlayerScripts.UI.RivalsFrame =====
   ...
149: 		-- upvalues: (ref) v_u_70, (ref) v_u_10, (copy) v_u_69, (copy) p_u_68, (ref) v_u_9
150: 		v_u_70 = true
151: 		v_u_10.play("hover")
152: 		local v71 = v_u_69
153: 		local v72 = {
154: 			["Scale"] = p_u_68
155: 		}
156: 		local v73 = Enum.EasingStyle.Back
157: 		v_u_9.tween(v71, TweenInfo.new(0.18, v73 or Enum.EasingStyle.Quint, Enum.EasingDirection.Out), v72)
158: 	end, function()
159: 		-- upvalues: (ref) v_u_70, (copy) v_u_69, (ref) v_u_9
160: 		v_u_70 = false
161: 		local v74 = v_u_69
162: 		local v75 = Enum.EasingStyle.Quad
163: 		v_u_9.tween(v74, TweenInfo.new(0.1, v75 or Enum.EasingStyle.Quint, Enum.EasingDirection.Out), {
164: 			["Scale"] = 1
165: 		})
166: 	end)
167: 	p67.MouseButton1Down:Connect(function()
168: 		-- upvalues: (ref) v_u_10, (copy) v_u_69, (ref) v_u_9
169: 		v_u_10.play("press")
170: 		local v76 = v_u_69
171: 		local v77 = Enum.EasingStyle.Quad
172: 		v_u_9.tween(v76, TweenInfo.new(0.06, v77 or Enum.EasingStyle.Quint, Enum.EasingDirection.Out), {
173: 			["Scale"] = 0.9
174: 		})
175: 	end)
176: 	p67.MouseButton1Up:Connect(function()
177: 		-- upvalues: (ref) v_u_10, (copy) v_u_69, (ref) v_u_70, (copy) p_u_68, (ref) v_u_9
178: 		v_u_10.play("release")
179: 		local v78 = v_u_69
180: 		local v79 = {
181: 			["Scale"] = not v_u_70 and 1 or p_u_68
182: 		}
183: 		local v80 = Enum.EasingStyle.Back
184: 		v_u_9.tween(v78, TweenInfo.new(0.3, v80 or Enum.EasingStyle.Quint, Enum.EasingDirection.Out), v79)
185: 	end)
186: 	return v_u_69
187: end
188: local function v_u_102(p82, p83, p84, p85) -- name: ribbon
189: 	-- upvalues: (copy) v_u_19, (copy) v_u_8
   ...
643: 		v_u_160 = true
644: 		v_u_10.play("hover")
645: 		local v168 = v_u_159
646: 		local v169 = Enum.EasingStyle.Back
647: 		v_u_9.tween(v168, TweenInfo.new(0.18, v169 or Enum.EasingStyle.Quint, Enum.EasingDirection.Out), {
648: 			["Scale"] = 1.08
649: 		})
650: 		v_u_167()
651: 	end, function()
652: 		-- upvalues: (ref) v_u_160, (copy) v_u_159, (ref) v_u_9
653: 		v_u_160 = false
654: 		local v170 = v_u_159
655: 		local v171 = Enum.EasingStyle.Quad
656: 		v_u_9.tween(v170, TweenInfo.new(0.12, v171 or Enum.EasingStyle.Quint, Enum.EasingDirection.Out), {
657: 			["Scale"] = 1
658: 		})
659: 	end)
660: 	v134.MouseButton1Down:Connect(function()
661: 		-- upvalues: (ref) v_u_161, (ref) v_u_10, (copy) v_u_159, (ref) v_u_9
662: 		v_u_161 = v_u_161 + 1
663: 		v_u_10.play("press")
664: 		local v172 = v_u_159
665: 		local v173 = Enum.EasingStyle.Quad
666: 		v_u_9.tween(v172, TweenInfo.new(0.06, v173 or Enum.EasingStyle.Quint, Enum.EasingDirection.Out), {
667: 			["Scale"] = 0.9
668: 		})
669: 	end)
670: 	v134.MouseButton1Up:Connect(function()
671: 		-- upvalues: (ref) v_u_161, (ref) v_u_10, (ref) v_u_160, (copy) v_u_159, (ref) v_u_9, (copy) v_u_145, (copy) v_u_143
672: 		v_u_161 = v_u_161 + 1
673: 		local v_u_174 = v_u_161
674: 		v_u_10.play("release")
675: 		local v_u_175 = v_u_160 and 1.08 or 1
676: 		local v176 = v_u_159
677: 		local v177 = {
678: 			["Scale"] = v_u_175 + 0.05
679: 		}
680: 		local v178 = Enum.EasingStyle.Quad
681: 		v_u_9.tween(v176, TweenInfo.new(0.08, v178 or Enum.EasingStyle.Quint, Enum.EasingDirection.Out), v177)
682: 		task.delay(0.08, function()
683: 			-- upvalues: (ref) v_u_161, (copy) v_u_174, (ref) v_u_159, (copy) v_u_175, (ref) v_u_9

===== Players.RansbloxScripts.PlayerScripts.UI.RivalsKit =====
   ...
729: 			v_u_199 = true
730: 			v_u_12.play("hover")
731: 			v_u_38(v_u_197, 0.18, {
732: 				["Scale"] = (not p_u_189 and 1 or p_u_189()) * v_u_198
733: 			}, Enum.EasingStyle.Back)
734: 			if p_u_190 then
735: 				p_u_190(true)
736: 			end
737: 		end, function()
738: 			-- upvalues: (ref) v_u_199, (ref) v_u_38, (copy) v_u_197, (copy) p_u_189, (copy) p_u_190
739: 			v_u_199 = false
740: 			v_u_38(v_u_197, 0.1, {
741: 				["Scale"] = not p_u_189 and 1 or p_u_189()
742: 			}, Enum.EasingStyle.Quad)
743: 			if p_u_190 then
744: 				p_u_190(false)
745: 			end
746: 		end)
747: 		p187.MouseButton1Down:Connect(function()
748: 			-- upvalues: (ref) v_u_12, (ref) v_u_38, (copy) v_u_197, (copy) p_u_189
749: 			v_u_12.play("press")
750: 			v_u_38(v_u_197, 0.06, {
751: 				["Scale"] = (not p_u_189 and 1 or p_u_189()) * 0.9
752: 			}, Enum.EasingStyle.Quad)
753: 		end)
754: 		p187.MouseButton1Up:Connect(function()
755: 			-- upvalues: (ref) v_u_12, (ref) v_u_38, (copy) v_u_197, (copy) p_u_189, (ref) v_u_199, (copy) v_u_198
756: 			v_u_12.play("release")
757: 			v_u_38(v_u_197, 0.28, {
758: 				["Scale"] = (not p_u_189 and 1 or p_u_189()) * (not v_u_199 and 1 or v_u_198)
759: 			}, Enum.EasingStyle.Back)
760: 		end)
761: 		return v_u_197
762: 	end
763: end
764: local v_u_200 = v_u_15.feel
765: function v_u_15.punch(p_u_201, p202) -- name: punch
766: 	-- upvalues: (copy) v_u_8, (copy) v_u_38
767: 	if not v_u_8.reduced() then
768: 		local v_u_203 = p_u_201.Scale
769: 		v_u_38(p_u_201, 0.08, {

===== Players.RansbloxScripts.PlayerScripts.UI.RivalsReveal =====
   ...
132: 				table.clear(v_u_40)
133: 			end
134: 			v_u_38.Destroying:Once(v_u_51)
135: 			local function v_u_52() -- name: finish
136: 				-- upvalues: (ref) v_u_42, (ref) v_u_43, (copy) v_u_51, (ref) v_u_9, (ref) v_u_8, (copy) v_u_37, (copy) p_u_26
137: 				if not v_u_42 and v_u_43 then
138: 					v_u_42 = true
139: 					v_u_51()
140: 					v_u_9.play("close")
141: 					v_u_8.close(v_u_37, p_u_26)
142: 				end
143: 			end
144: 			local v_u_53 = nil
145: 			local v_u_54 = {}
146: 			local function v_u_57() -- name: rush
147: 				-- upvalues: (copy) v_u_54
148: 				for v55, v56 in v_u_54 do
149: 					task.delay((v55 - 1) * 0.08, v56)
150: 				end
151: 			end
152: 			local function v61() -- name: press
153: 				-- upvalues: (ref) v_u_44, (copy) v_u_37, (ref) v_u_53, (copy) v_u_57, (ref) v_u_43, (copy) v_u_54, (ref) v_u_42, (copy) v_u_51, (ref) v_u_9, (ref) v_u_8, (copy) p_u_26
154: 				if v_u_44 then
155: 					if v_u_53 then
156: 						local v58 = v_u_53
157: 						v_u_53 = nil
158: 						v58()
159: 						task.delay(0.25, v_u_57)
160: 						return
161: 					elseif v_u_43 then
162: 						if not v_u_42 then
163: 							if not v_u_43 then
164: 								return
165: 							end
166: 							v_u_42 = true
167: 							v_u_51()
168: 							v_u_9.play("close")
169: 							v_u_8.close(v_u_37, p_u_26)
170: 						end
171: 					else
172: 						for v59, v60 in v_u_54 do

===== Players.RansbloxScripts.PlayerScripts.UI.RivalsSpin =====
   ...
1264: 			v_u_369(v423.button, 0.12, 0.5, Vector2.new(0, -40))
1265: 			return v424
1266: 		end
1267: 		local v433 = Rect.new(1344, 34, 1568, 96)
1268: 		local v434 = p_u_345 and "cur_surname" or "ui_spin_ticket"
1269: 		local v435
1270: 		if p_u_345 then
1271: 			v435 = v_u_351(255, 150, 220)
1272: 		else
1273: 			v435 = v_u_351(110, 220, 255)
1274: 		end
1275: 		local v436
1276: 		if p_u_345 then
1277: 			v436 = v_u_351(230, 40, 150)
1278: 		else
1279: 			v436 = v_u_351(40, 140, 255)
1280: 		end
1281: 		local v_u_437 = v432(v433, v434, v435, v436, function()
1282: 			-- upvalues: (copy) p_u_345, (ref) v_u_16, (ref) p_u_76
1283: 			if p_u_345 then
1284: 				v_u_16.press("getSpins")
1285: 			elseif p_u_76 then
1286: 				p_u_76("store:tickets")
1287: 			end
1288: 		end)
1289: 		local v_u_438 = v432(Rect.new(1584, 34, 1808, 96), "ui_bp_coin", v_u_351(255, 222, 80), v_u_351(240, 150, 20), function()
1290: 			-- upvalues: (ref) p_u_76
1291: 			if p_u_76 then
1292: 				p_u_76("store:bp")
1293: 			end
1294: 		end)
1295: 		v_u_14.closeIn(v_u_349, {
1296: 			1822,
1297: 			22,
1298: 			1904,
1299: 			108
1300: 		}, function()
1301: 			-- upvalues: (copy) v_u_347
1302: 			v_u_347.close()
1303: 		end, 40)
1304: 		if p_u_345 then
   ...
1414: 					["Image"] = nil,
1415: 					["Size"] = nil,
1416: 					["LayoutOrder"] = 1,
1417: 					["ZIndex"] = 27,
1418: 					["Image"] = v_u_17.img("cur_surname"),
1419: 					["Size"] = UDim2.fromOffset(40, 40)
1420: 				}, v464)
1421: 				local v466 = v_u_24.text(v464, "", 28, {
1422: 					["AutomaticSize"] = nil,
1423: 					["Size"] = nil,
1424: 					["LayoutOrder"] = 2,
1425: 					["ZIndex"] = 27,
1426: 					["AutomaticSize"] = Enum.AutomaticSize.X,
1427: 					["Size"] = UDim2.fromOffset(0, 38)
1428: 				})
1429: 				v_u_369(v463.button, p461, 0.3, Vector2.new(0, 80))
1430: 				return v463, v466, v465
1431: 			end
1432: 			local v468 = v456("Book", Rect.new(48, 904, 188, 1044), 0.5, function()
1433: 				-- upvalues: (ref) v_u_16
1434: 				v_u_16.press("book")
1435: 			end)
1436: 			v468.label.Position = UDim2.fromOffset(0, 14)
1437: 			v468.label.Size = UDim2.new(1, 0, 0, 44)
1438: 			local v469 = v_u_24.text(v468.button, "", 24, {
1439: 				["Position"] = nil,
1440: 				["Size"] = nil,
1441: 				["ZIndex"] = 27,
1442: 				["Position"] = UDim2.fromOffset(0, 60),
1443: 				["Size"] = UDim2.new(1, 0, 0, 30)
1444: 			})
1445: 			local v_u_470, v471, v472 = v467("SPIN", Rect.new(204, 904, 604, 1044), v_u_351(255, 130, 220), v_u_351(230, 40, 150), 0.56, function()
1446: 				-- upvalues: (ref) v_u_16
1447: 				v_u_16.press("spin")
1448: 			end)
1449: 			local v_u_473, v474, v475 = v467("LUCKY SPIN", Rect.new(620, 904, 1020, 1044), v_u_351(170, 255, 110), v_u_351(40, 200, 40), 0.64, function()
1450: 				-- upvalues: (ref) v_u_16
1451: 				v_u_16.press("lucky")
1452: 			end)
1453: 			v475:Destroy()
1454: 			v456("History", Rect.new(1036, 904, 1176, 1044), 0.72, function()
1455: 				-- upvalues: (ref) v_u_16
1456: 				v_u_16.press("history")
1457: 			end)
1458: 			local v476 = v_u_24.panel(v_u_349, Rect.new(1208, 136, 1872, 1044), v_u_351(200, 120, 255), v_u_351(60, 150, 255), 10, {
1459: 				["radius"] = 22,
1460: 				["rim"] = 5,
1461: 				["glow"] = 0.5
1462: 			})
1463: 			v_u_369(v476, 0.08, 0.85, Vector2.new(120, 0))
1464: 			local v477 = v_u_31("Frame", {
1465: 				["Name"] = "Odds",
1466: 				["BackgroundTransparency"] = 1,
1467: 				["Size"] = nil,
1468: 				["ZIndex"] = 18,
1469: 				["Size"] = UDim2.fromScale(1, 1)
1470: 			}, v476)
1471: 			v_u_24.text(v477, "DROP RATES", 38, {
1472: 				["Position"] = nil,
1473: 				["Size"] = nil,
1474: 				["TextXAlignment"] = nil,
1475: 				["ZIndex"] = 20,
1476: 				["Position"] = UDim2.fromOffset(30, 28),
   ...
1580: 						["Position"] = nil,
1581: 						["Size"] = nil,
1582: 						["TextXAlignment"] = nil,
1583: 						["ZIndex"] = 22,
1584: 						["AnchorPoint"] = Vector2.new(1, 0),
1585: 						["Position"] = UDim2.fromOffset(v494.x - 28, 0),
1586: 						["Size"] = UDim2.new(0, 140, 1, 0),
1587: 						["TextXAlignment"] = Enum.TextXAlignment.Right
1588: 					})
1589: 					local v496 = v495:FindFirstChildOfClass("UIGradient")
1590: 					if v496 then
1591: 						v496.Color = ColorSequence.new(v494.c:Lerp(v_u_32, 0.5), v494.c)
1592: 					end
1593: 					v478[(v493 == 1 and "oddsSpin" or "oddsLucky") .. v487] = v495
1594: 				end
1595: 				table.insert(v481, v491)
1596: 				v483 = v483 + v486
1597: 			end
1598: 			local v497 = v_u_24.button(v477, "GET SPINS", Rect.new(28, 706, 636, 772), v_u_351(255, 230, 90), v_u_351(255, 150, 20), 20, function()
1599: 				-- upvalues: (ref) v_u_16
1600: 				v_u_16.press("getSpins")
1601: 			end, {
1602: 				["lit"] = true,
1603: 				["size"] = 32
1604: 			}).button
1605: 			table.insert(v481, v497)
1606: 			local v498 = v_u_351(255, 200, 40)
1607: 			local v499 = v_u_31("Frame", {
1608: 				["Name"] = "Pity",
1609: 				["BorderSizePixel"] = 0,
1610: 				["Position"] = nil,
1611: 				["Size"] = nil,
16

===== Players.RansbloxScripts.PlayerScripts.UI.FrameSkin =====
   ...
290: 				if v_u_73 then
291: 					v81 = v_u_5.T.hoverIn
292: 				else
293: 					v81 = v_u_5.T.hoverOut
294: 				end
295: 				v79(v80, v81, {
296: 					["Scale"] = not v_u_73 and 1 or v_u_72
297: 				})
298: 			end
299: 			if p_u_71 then
300: 				p_u_71(false)
301: 			end
302: 		end
303: 	end
304: 	v_u_9.bind(p68, v78, v82)
305: 	p68.SelectionGained:Connect(v78)
306: 	p68.SelectionLost:Connect(v82)
307: 	p68.MouseButton1Down:Connect(function()
308: 		-- upvalues: (ref) v_u_74, (ref) v_u_8, (ref) v_u_5, (copy) p_u_69
309: 		v_u_74 = true
310: 		v_u_8.play("press")
311: 		v_u_5.tween(p_u_69, v_u_5.T.pressDown, {
312: 			["Scale"] = v_u_5.SCALE.press
313: 		})
314: 	end)
315: 	p68.MouseButton1Up:Connect(function()
316: 		-- upvalues: (ref) v_u_74, (ref) v_u_8, (ref) v_u_5, (copy) p_u_69, (ref) v_u_73, (copy) v_u_72
317: 		if v_u_74 then
318: 			v_u_74 = false
319: 			v_u_8.play("release")
320: 			local v83 = {
321: 				["Scale"] = not v_u_73 and 1 or v_u_72
322: 			}
323: 			v_u_5.tween(p_u_69, v_u_5.T.pressUp, v83)
324: 		end
325: 	end)
326: end
327: local function v_u_89(p84, p85, p86) -- name: plate
328: 	-- upvalues: (copy) v_u_16, (copy) v_u_6, (copy) v_u_10
329: 	local v87 = (p85 == v_u_16.lime or p85 == v_u_16.green) and "green" or (p85 == v_u_16.gold and "gold" or (p85 == v_u_16.purple and "purple" or ((p85 == v_u_16.slate or p85 == v_u_16.deep) and "navy" or (p85 == v_u_16.gray and "off" or (p85 == v_u_16.red and "red" or "theme")))))
330: 	for _, v88 in p84:GetChildren() do
331: 		if v88.Name ~= "Face" and (v88.Name ~= "Rim" and (v88.Name ~= "Shadow" and v88.Name ~= "Glow")) then
332: 			continue
333: 		end
334: 		v88:Destroy()
335: 	end
336: 	v_u_6.dress(p84, v87, v_u_10.THEME, p86)
337: end
338: function v_u_10.button(p90, p91) -- name: button
339: 	-- upvalues: (copy) v_u_15, (copy) v_u_11, (copy) v_u_5, (copy) v_u_89, (copy) v_u_10
340: 	local v92 = p91.z or 2
341: 	local v93 = v_u_15("Frame", {
342: 		["Name"] = "Button",
343: 		["BackgroundTransparency"] = 1,
   ...
490: 		table.insert(v109, v119)
491: 		local function v130(p125)
492: 			-- upvalues: (ref) v_u_7, (copy) v_u_120, (ref) v_u_10, (ref) v_u_14, (ref) v_u_5, (copy) v_u_121
493: 			local v126 = v_u_7.recolor
494: 			local v127 = v_u_120
495: 			local v128
496: 			if p125 then
497: 				v128 = v_u_10.THEME.c1
498: 			else
499: 				v128 = v_u_14(150, 152, 164)
500: 			end
501: 			local v129
502: 			if p125 then
503: 				v129 = v_u_10.THEME.c2
504: 			else
505: 				v129 = v_u_14(84, 86, 98)
506: 			end
507: 			v126(v127, v128, v129, p125)
508: 			if p125 and not v_u_5.reduced() then
509: 				v_u_121.Scale = 1.08
510: 				v_u_5.tween(v_u_121, v_u_5.T.pressUp, {
511: 					["Scale"] = 1
512: 				})
513: 			end
514: 		end
515: 		table.insert(v_u_110, v130)
516: 	end
517: 	v_u_111 = 1
518: 	local v_u_131 = v_u_111
519: 	for v132, v133 in v_u_110 do
520: 		v133(v132 == 1)
521: 	end
522: 	return {
523: 		["root"] = v107,
524: 		["buttons"] = v109,
525: 		["select"] = v115,
526: 		["selected"] = function() -- name: selected
527: 			-- upvalues: (ref) v_u_131
528: 			return v_u_131
529: 		end
530: 	}

===== Players.RansbloxScripts.PlayerScripts.UI.RivalsResults =====
   ...
426: 					v_u_429.Position = UDim2.new(0.5, 0, 0.5, v593 * v_u_437.Scale)
427: 				end
428: 			end
429: 			v348()
430: 			v505 = v_u_459:GetPropertyChangedSignal("AbsoluteSize")
431: 			table.insert(v376, v505:Connect(v348))
432: 			v384 = v_u_3.TouchControlsEnabled
433: 			v_u_3.TouchControlsEnabled = false
434: 			v_u_1:BindActionAtPriority("RivalsResultsContinue", function(_, p597, _)
435: 				-- upvalues: (copy) v_u_428, (ref) v_u_410, (copy) v_u_554, (ref) v_u_513
436: 				if p597 == Enum.UserInputState.Begin and os.clock() - v_u_428 >= 0.35 then
437: 					if v_u_410 then
438: 						v_u_554:Fire()
439: 					else
440: 						v_u_513 = true
441: 					end
442: 				end
443: 				return Enum.ContextActionResult.Sink
444: 			end, false, Enum.ContextActionPriority.High.Value + 20, Enum.KeyCode.Return, Enum.KeyCode.KeypadEnter, Enum.KeyCode.Space, Enum.KeyCode.ButtonA)
445: 			v539 = v498.Activated
446: 			table.insert(v376, v539:Connect(function() -- name: press
447: 				-- upvalues: (copy) v_u_428, (ref) v_u_410, (copy) v_u_554, (ref) v_u_513
448: 				if os.clock() - v_u_428 < 0.35 then
449: 					return
450: 				elseif v_u_410 then
451: 					v_u_554:Fire()
452: 				else
453: 					v_u_513 = true
454: 				end
455: 			end))
456: 			v_u_1:BindActionAtPriority("RivalsResultsContinuePad", function(_, p598, p599)
457: 				-- upvalues: (copy) v_u_365, (ref) v_u_410
458: 				local v600 = v_u_365[p599.KeyCode]
459: 				if p598 ~= Enum.UserInputState.Begin or not (v_u_410 and v600) then
460: 					return Enum.ContextActionResult.Pass
461: 				end
462: 				v600()
463: 				return Enum.ContextActionResult.Sink
464: 			end, false, Enum.ContextActionPriority.High.Value + 20, Enum.KeyCode.ButtonX, Enum.KeyCode.ButtonY)
465: 			v465 = function(p601) -- name: hold
466: 				-- upvalues: (ref) v_u_513

===== Players.RansbloxScripts.PlayerScripts.UI.RivalsStore =====
   ...
1006: 			v320 = false
1007: 		end
1008: 		local v_u_321
1009: 		if v320 then
1010: 			v_u_321 = not v_u_316
1011: 			if v_u_321 then
1012: 				v_u_321 = not v_u_319
1013: 			end
1014: 		else
1015: 			v_u_321 = v320
1016: 		end
1017: 		local v322 = v_u_316 and "OWNED" or (v_u_319 and "ENDED" or (v320 and "BUY" or "COMING SOON"))
1018: 		local v323 = v_u_285
1019: 		local v324 = v_u_321 and "green" or (v_u_316 and "violet" or "grey")
1020: 		if not v_u_321 then
1021: 			p315 = p315 * 0.8
1022: 		end
1023: 		local v_u_326 = v323(p310, p312, v324, v322, p315, p313, function()
1024: 			-- upvalues: (copy) v_u_321, (ref) v_u_28, (copy) p_u_311, (ref) v_u_130, (ref) v_u_15, (copy) v_u_316, (copy) v_u_319, (ref) v_u_23
1025: 			if v_u_321 then
1026: 				v_u_28.play("press")
1027: 				local v_u_325 = p_u_311
1028: 				v_u_130(function()
1029: 					-- upvalues: (ref) v_u_15, (copy) v_u_325
1030: 					return v_u_15.RivalsRobux:Fire(v_u_325.key)
1031: 				end)
1032: 			elseif not (v_u_316 or v_u_319) then
1033: 				v_u_23.toast("Robux items are coming soon!")
1034: 			end
1035: 		end)
1036: 		if v_u_321 then
1037: 			v_u_109(p_u_311, function(p327)
1038: 				-- upvalues: (copy) v_u_326, (ref) v_u_18, (ref) v_u_67
1039: 				if v_u_326.label.Parent then
1040: 					v_u_326.label.Text = v_u_18.price(v_u_67(p327))
1041: 				end
1042: 			end)
1043: 		end
1044: 		return v_u_326
1045: 	end
1046: 	local function v_u_338(p329, p330, p331, p332) -- name: picture
   ...
1090: 			})
1091: 		end
1092: 	end
1093: 	local function v_u_388(p354, p_u_355, p356, p357, p358, p359, p360, _) -- name: itemCard
1094: 		-- upvalues: (ref) v_u_25, (ref) v_u_38, (copy) v_u_269, (ref) v_u_54, (ref) v_u_28, (ref) v_u_162, (ref) v_u_29, (copy) v_u_338, (ref) v_u_19, (ref) v_u_62, (ref) v_u_33, (copy) v_u_309, (ref) v_u_16, (ref) v_u_37, (ref) v_u_40, (ref) v_u_39, (copy) v_u_247, (copy) v_u_298, (ref) v_u_42, (ref) v_u_59, (copy) v_u_192, (copy) v_u_285, (ref) v_u_56, (ref) v_u_26
1095: 		local v361 = v_u_25.rarity(p_u_355.rarity)
1096: 		local v_u_362 = p_u_355.c1 or v361:Lerp(v_u_38, 0.25)
1097: 		local v363 = v_u_269
1098: 		local v364 = v_u_54[p_u_355.rarity] or "grey"
1099: 		local v365 = {
1100: 			p356,
1101: 			p357,
1102: 			p356 + p358,
1103: 			p357 + 300
1104: 		}
1105: 		local v366 = Vector2.new(p358 / 2, 104)
1106: 		local v367 = p358 - 44
1107: 		local v_u_368 = v363(p354, "item", v364, v365, 12, v366, (math.min(v367, 150)))
1108: 		v_u_368.hit.Activated:Connect(function()
1109: 			-- upvalues: (ref) v_u_28, (ref) v_u_162, (copy) p_u_355
1110: 			v_u_28.play("press")
1111: 			v_u_162(p_u_355)
1112: 		end)
1113: 		local v369
1114: 		if p_u_355.kind == "launch" then
1115: 			v369 = ("launch_rip_%*"):format(p_u_355.id)
1116: 		elseif p_u_355.kind == "emote" or p_u_355.kind == "win" then
1117: 			v369 = p_u_355.clip
1118: 		else
1119: 			v369 = nil
1120: 		end
1121: 		if v369 or p_u_355.kind == "kit" then
1122: 			local v370 = {
1123: 				["Size"] = nil,
1124: 				["ZIndex"] = 16,
1125: 				["Size"] = UDim2.fromScale(1, 1)
1126: 			}
1127: 			local v_u_371
1128: 			if v369 then
1129: 				v_u_371 = v_u_29.new(v_u_368.art, v370, v369, false, p_u_355.kind == "launch")
1130: 			else
   ...
1159: 			v376 = v377((string.sub(v378, 1, -2)))
1160: 		else
1161: 			v376 = ""
1162: 		end
1163: 		local v379
1164: 		if p_u_355.piece and v376 ~= "LAUNCHER" then
1165: 			v379 = ("%* \194\183 %*"):format(string.upper(p_u_355.rarity), v376)
1166: 		else
1167: 			v379 = string.upper(p_u_355.rarity)
1168: 		end
1169: 		local v380 = p358 - 30
1170: 		local v381 = math.min(v380, 168)
1171: 		v_u_309(v_u_368.root, v379, {
1172: 			p358 / 2 - v381 / 2,
1173: 			222,
1174: 			p358 / 2 + v381 / 2,
1175: 			255
1176: 		}, 19.5, 18, "more", v361)
1177: 		v_u_25.round(v_u_368.root, Vector2.new(p358 - 28, 168), 36, p_u_355.clip and "\226\150\182" or "?", true, v_u_38, 19, function()
1178: 			-- upvalues: (ref) v_u_28, (ref) v_u_162, (copy) p_u_355
1179: 			v_u_28.play("press")
1180: 			v_u_162(p_u_355)
1181: 		end)
1182: 		if v_u_16.owns(p359, p_u_355.kind, p_u_355.id) then
1183: 			local v382 = v_u_37("Frame", {
1184: 				["Name"] = "Owned",
1185: 				["BackgroundColor3"] = nil,
1186: 				["BorderSizePixel"] = 0,
1187: 				["AnchorPoint"] = nil,
1188: 				["Position"] = nil,
1189: 				["Size"] = nil,
1190: 				["ZIndex"] = 19,
1191: 				["BackgroundColor3"] = v_u_40(52, 200, 90),
1192: 				["AnchorPoint"] = Vector2.new(0.5, 0.5),
1193: 				["Position"] = UDim2.fromOffset(p358 - 24, 26),
1194: 				["Size"] = UDim2.fromOffset(38, 38)
1195: 			}, v_u_368.root)
1196: 			v_u_25.corner(v382, 100)
1197: 			v_u_37("UIStroke", {
1198: 				["Thickness"] = 3,
1199: 				["Color"] = nil,

===== Players.RansbloxScripts.PlayerScripts.UI.RivalsNames =====
   ...
1704: 		-- upvalues: (ref) v_u_34, (ref) v_u_148, (copy) p_u_428
1705: 		if not v_u_34 then
1706: 			v_u_148(p_u_428)
1707: 		end
1708: 	end)
1709: 	v_u_12.pityBar(v429, "LEGENDARY+ PITY", v431.pity or 0, v_u_8.PITY, Rect.new(14, v451 - 96, v432 - 14, v451 - 50), Color3.fromRGB(255, 196, 30), 14)
1710: 	v_u_12.label(v429, "Mythic: Shirasagi, Aoba, Kurena, De La Hora.", 20, {
1711: 		["Position"] = nil,
1712: 		["Size"] = nil,
1713: 		["TextXAlignment"] = nil,
1714: 		["TextColor3"] = nil,
1715: 		["ZIndex"] = 14,
1716: 		["Position"] = UDim2.fromOffset(18, v451 - (v_u_12.phone() and 42 or 40)),
1717: 		["Size"] = UDim2.new(1, -36, 0, v_u_12.phone() and 36 or 28),
1718: 		["TextXAlignment"] = Enum.TextXAlignment.Left,
1719: 		["TextColor3"] = v_u_8.rarity("Mythic").c1
1720: 	})
1721: end
1722: local v_u_482 = nil
1723: local v_u_483 = nil
1724: function v24.press(p484) -- name: press
1725: 	-- upvalues: (ref) v_u_483, (ref) v_u_482, (ref) v_u_34, (copy) v_u_297, (copy) v_u_124, (copy) v_u_148
1726: 	local v485 = v_u_483
1727: 	if v485 then
1728: 		if p484 == "spin" or p484 == "lucky" then
1729: 			if v_u_482 then
1730: 				v_u_482(p484 == "lucky")
1731: 				return
1732: 			end
1733: 		else
1734: 			if v_u_34 then
1735: 				return
1736: 			end
1737: 			if p484 == "getSpins" then
1738: 				v_u_297(v485)
1739: 				return
1740: 			end
1741: 			if p484 == "book" then
1742: 				v_u_124(v485)
1743: 				return
1744: 			end

===== Players.RansbloxScripts.PlayerScripts.UI.Tip =====
1: local v_u_1 = game:GetService("GuiService")
2: local v_u_2 = game:GetService("Players")
3: local v_u_3 = game:GetService("UserInputService")
4: local v_u_4 = game:GetService("Workspace")
5: local v_u_5 = require(script.Parent.Parent.Battle.BattleInput)
6: local v_u_6 = {
7: 	["WORDS"] = table.freeze({
8: 		["atk"] = "<b>Attack</b>: its hits push rivals further and knock more spin and burst out of them.",
9: 		["def"] = "<b>Defense</b>: harder to burst, and it loses less spin each time it\'s hit.",
10: 		["sta"] = "<b>Stamina</b>: its spin drains slower, so it outlasts rivals.",
11: 		["spd"] = "<b>Speed</b>: it moves around the bowl faster, for dashes and rail rushes.",
12: 		["weight"] = "<b>Weight</b>: a heavier bey is knocked back less and hits heavier.",
13: 		["guard"] = "<b>Burst Guard</b>: how many hits it takes before it can burst.",
14: 		["Attack"] = "<b>Attack type</b>: hits harder the faster it\'s going and knocks rivals farther, but has fewer burst locks.",
15: 		["Defense"] = "<b>Defense type</b>: built to take hits and outlast attackers; its stamina counts for 20% more.",
16: 		["Stamina"] = "<b>Stamina type</b>: extra burst locks (it rides hits instead of taking them); it wins by outspinning.",
17: 		["Balance"] = "<b>Balance type</b>: the strongest burst locks of any type, and it changes its plan to match its rival.",
18: 		["passive"] = "<b>Passive</b>: always on in battle, on top of the bey\'s stats. Every layer has its own.",
19: 		["awakening"] = "<b>Awakening</b>: fill the meter in battle with clashes and hits, then press E: a timed boost, plus this layer\'s own effect.",
20: 		["mastery"] = "<b>Mastery</b>: battle with this layer to earn it (+6 a match, +14 more for a win). Its tier shows on your VS card.",
21: 		["power"] = "<b>Combat Power</b>: your bey\'s strength in battle: its attack, defense, stamina, speed and burst gauge as a battle makes them (every level, star, trait, surname and evolution), and the moves it has unlocked. A part\'s is your build\'s with it in."
22: 	})
23: }
24: local v_u_7 = nil
25: local v_u_8 = nil
26: local v_u_9 = nil
27: local v_u_10 = nil
28: local function v_u_22() -- name: ensure
29: 	-- upvalues: (ref) v_u_8, (ref) v_u_9, (ref) v_u_7, (copy) v_u_2
30: 	if v_u_8 and (v_u_9 and (v_u_7 and v_u_7.Parent)) then
31: 		return v_u_8, v_u_9
32: 	end
33: 	local v11 = Instance.new("ScreenGui")
34: 	v11.Name = "Tooltip"
35: 	v11.DisplayOrder = 1000
36: 	v11.IgnoreGuiInset = true
37: 	v11.ScreenInsets = Enum.ScreenInsets.None
38: 	v11.ResetOnSpawn = false
39: 	v11.ZIndexBehavior = Enum.ZIndexBehavior.Sibling

===== Players.RansbloxScripts.PlayerScripts.UI.LobbyHints =====
   ...
5: local v_u_5 = game:GetService("TweenService")
6: local v_u_6 = game:GetService("UserInputService")
7: local v_u_7 = game:GetService("Workspace")
8: local v_u_8 = require(v3.Packets)
9: local v_u_9 = require(script.Parent.Kit)
10: local v_u_10 = require(script.Parent.Locale)
11: local v_u_11 = require(script.Parent.Guide)
12: local v12 = {}
13: local v_u_13 = Color3.fromRGB
14: local v_u_14 = false
15: local v_u_22 = {
16: 	{
17: 		["bit"] = 1,
18: 		["color"] = nil,
19: 		["text"] = nil,
20: 		["show"] = nil,
21: 		["over"] = nil,
22: 		["color"] = v_u_13(110, 240, 40),
23: 		["text"] = function() -- name: text
24: 			-- upvalues: (copy) v_u_6
25: 			return v_u_6.PreferredInput == Enum.PreferredInput.KeyboardAndMouse and "Step onto a glowing queue pad to battle, or press <font color=\"#8CFF5A\">F</font> to warp to one." or "Step onto a glowing queue pad to battle!"
26: 		end,
27: 		["show"] = function(p15) -- name: show
28: 			-- upvalues: (ref) v_u_14
29: 			local v16 = v_u_14
30: 			if v16 then
31: 				if p15.Tutorial == 1 and p15.Tour == 1 then
32: 					v16 = (p15.Stats.matches or 0) == 0
33: 				else
34: 					v16 = false
35: 				end
36: 			end
37: 			return v16
38: 		end,
39: 		["over"] = function(p17) -- name: over
40: 			return (p17.Stats.matches or 0) > 0
41: 		end
42: 	},
43: 	{
44: 		["bit"] = 2,
45: 		["color"] = nil,

===== Players.RansbloxScripts.PlayerScripts.UI.PopKit =====
   ...
872: 		["ZIndex"] = p198 + 1
873: 	})
874: 	local v222 = v_u_7
875: 	local v223 = {}
876: 	local v224 = v201 * 0.5
877: 	v223.MaxTextSize = math.floor(v224)
878: 	v222("UITextSizeConstraint", v223, v_u_221)
879: 	local v_u_225 = true
880: 	local v_u_226 = false
881: 	local v_u_227 = false
882: 	local function v_u_230(p228) -- name: paint
883: 		-- upvalues: (ref) v_u_192, (copy) v_u_212, (ref) v_u_10, (copy) v_u_209, (copy) v_u_210, (ref) v_u_226, (ref) v_u_193
884: 		local v229 = v_u_192[p228] or v_u_192.green
885: 		v_u_212.Color = ColorSequence.new({ v_u_10(0, v229[1]), v_u_10(1, v229[2]) })
886: 		v_u_209.BackgroundColor3 = v229[3]
887: 		v_u_210.Color = v229[1]
888: 		v_u_226 = v_u_193[p228] == true
889: 		v_u_210.Transparency = v_u_226 and 0.45 or 1
890: 	end
891: 	v_u_230(p196)
892: 	local function v_u_240(p231) -- name: press
893: 		-- upvalues: (ref) v_u_225, (copy) v_u_211, (copy) v_u_204, (ref) v_u_2, (copy) v_u_208, (ref) v_u_227
894: 		if v_u_225 then
895: 			local v232 = v_u_211
896: 			local v233 = p231 and 0.05 or 0.2
897: 			local v234 = {
898: 				["Position"] = UDim2.fromOffset(0, not p231 and 0 or v_u_204 * 0.7)
899: 			}
900: 			local v235
901: 			if p231 then
902: 				v235 = Enum.EasingStyle.Quad
903: 			else
904: 				v235 = Enum.EasingStyle.Back
905: 			end
906: 			v_u_2:Create(v232, TweenInfo.new(v233, v235 or Enum.EasingStyle.Quad, Enum.EasingDirection.Out), v234):Play()
907: 			local v236 = v_u_208
908: 			local v237 = p231 and 0.05 or 0.22
909: 			local v238 = {
910: 				["Scale"] = p231 and 0.95 or (v_u_227 and 1.07 or 1)
911: 			}
912: 			local v239

===== Players.RansbloxScripts.PlayerScripts.UI.HudKit =====
   ...
1068: 			if v_u_287 and v_u_289 then
1069: 				local v327 = v_u_289
1070: 				v_u_6.tween(v327, TweenInfo.new(0.12, Enum.EasingStyle.Quad, Enum.EasingDirection.Out), {
1071: 					["Scale"] = 1
1072: 				})
1073: 				local v328 = v_u_287
1074: 				local v329 = {
1075: 					["Position"] = v_u_288
1076: 				}
1077: 				v_u_6.tween(v328, TweenInfo.new(0.12, Enum.EasingStyle.Quad, Enum.EasingDirection.Out), v329)
1078: 			end
1079: 		end
1080: 	end
1081: 	v_u_9.bind(p_u_278, v321, v330)
1082: 	p_u_278.SelectionGained:Connect(v321)
1083: 	p_u_278.SelectionLost:Connect(v330)
1084: 	p_u_278.MouseButton1Down:Connect(function()
1085: 		-- upvalues: (ref) v_u_303, (copy) v_u_304, (ref) v_u_8, (copy) v_u_281, (ref) v_u_301, (ref) v_u_6, (copy) v_u_287, (ref) v_u_289
1086: 		v_u_303 = v_u_303 + 1
1087: 		if v_u_304 then
1088: 			v_u_8.play("press")
1089: 		end
1090: 		local v331 = v_u_281
1091: 		local v332 = {
1092: 			["Scale"] = v_u_301 * 0.9
1093: 		}
1094: 		v_u_6.tween(v331, TweenInfo.new(0.06, Enum.EasingStyle.Quad, Enum.EasingDirection.Out), v332)
1095: 		if v_u_287 and v_u_289 then
1096: 			local v333 = v_u_289
1097: 			v_u_6.tween(v333, TweenInfo.new(0.06, Enum.EasingStyle.Quad, Enum.EasingDirection.Out), {
1098: 				["Scale"] = 0.86
1099: 			})
1100: 		end
1101: 	end)
1102: 	p_u_278.MouseButton1Up:Connect(function()
1103: 		-- upvalues: (ref) v_u_303, (copy) v_u_304, (ref) v_u_8, (ref) v_u_302, (ref) v_u_301, (copy) v_u_284, (copy) v_u_281, (ref) v_u_6, (copy) v_u_287, (ref) v_u_289, (copy) v_u_286, (ref) v_u_291, (ref) v_u_292, (ref) v_u_293, (copy) p_u_278, (copy) v_u_295
1104: 		v_u_303 = v_u_303 + 1
1105: 		local v_u_334 = v_u_303
1106: 		if v_u_304 then
1107: 			v_u_8.play("release")
1108: 		end

===== Players.RansbloxScripts.PlayerScripts.UI.FriendlyMap =====
   ...
938: 					end
939: 					if v232 ~= p230 then
940: 						v_u_130.Scale = 1.05
941: 						v_u_13.tw(v_u_130, 0.3, {
942: 							["Scale"] = 1
943: 						}, Enum.EasingStyle.Back)
944: 					end
945: 				end
946: 				if not p231 then
947: 					v_u_16.play("tick")
948: 				end
949: 				v_u_219()
950: 			end
951: 			local function v_u_247(p237) -- name: go
952: 				-- upvalues: (ref) v_u_56, (ref) v_u_45, (ref) v_u_17, (ref) v_u_16, (ref) v_u_15, (ref) v_u_31, (copy) v_u_123, (ref) v_u_10
953: 				if not v_u_56 and p237 then
954: 					local v238, v239, v240 = v_u_45(p237)
955: 					if v238 == "OPEN" then
956: 						local v241 = v_u_17.state()
957: 						if (v241 and #v241.members or 1) <= v240 - v239 then
958: 							v_u_16.play("press")
959: 							local v_u_242 = p237.key
960: 							local v_u_243 = v_u_31[p237.kind].name
961: 							v_u_123(function()
962: 								-- upvalues: (ref) v_u_10, (copy) v_u_242, (ref) v_u_15, (copy) v_u_243
963: 								local v_u_244, v_u_245 = v_u_10.GoToPad:Fire("key:" .. v_u_242)
964: 								task.wait(0.3)
965: 								task.delay(0.4, function()
966: 									-- upvalues: (copy) v_u_244, (ref) v_u_15, (ref) v_u_243, (copy) v_u_245
967: 									if v_u_244 == true then
968: 										v_u_15.toast(("On the %* pad. Your battle starts in a few seconds!"):format(v_u_243), "good")
969: 									else
970: 										local v246 = v_u_245
971: 										v_u_15.toast((type(v246) ~= "string" or v_u_245 == "") and "No answer from the server. Try again." or v_u_245, "bad")
972: 									end
973: 								end)
974: 							end)
975: 							return
976: 						end
977: 					end
978: 					v_u_16.play("bad")
